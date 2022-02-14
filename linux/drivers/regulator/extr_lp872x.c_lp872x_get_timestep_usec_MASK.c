
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp872x {int chipid; } ;
typedef enum lp872x_id { ____Placeholder_lp872x_id } lp872x_id ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lp872x*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct lp872x *VAR_6)
{
 enum lp872x_id VAR_7 = VAR_6->chipid;
 u8 VAR_8, VAR_9, VAR_10;
 int *VAR_11, VAR_12, VAR_13;
 int VAR_14[] = { 25, 50 };
 int VAR_15[] = { 32, 64, 128, 256 };

 switch (VAR_7) {
 case 129:
  VAR_9 = VAR_1;
  VAR_10 = VAR_2;
  VAR_11 = &VAR_14[0];
  VAR_12 = FUNC_0(VAR_14);
  break;
 case 128:
  VAR_9 = VAR_3;
  VAR_10 = VAR_4;
  VAR_11 = &VAR_15[0];
  VAR_12 = FUNC_0(VAR_15);
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_6, VAR_5, &VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_8 = (VAR_8 & VAR_9) >> VAR_10;
 if (VAR_8 >= VAR_12)
  return -VAR_0;

 return *(VAR_11 + VAR_8);
}
