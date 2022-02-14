
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1e_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct atl1e_hw*,int ,int*) ;

int FUNC_1(struct atl1e_hw *VAR_11, u16 *VAR_12, u16 *VAR_13)
{
 int VAR_14;
 u16 VAR_15;


 VAR_14 = FUNC_0(VAR_11, VAR_4, &VAR_15);
 if (VAR_14)
  return VAR_14;

 if (!(VAR_15 & VAR_6))
  return VAR_0;

 switch (VAR_15 & VAR_7) {
 case 130:
  *VAR_12 = VAR_10;
  break;
 case 129:
  *VAR_12 = VAR_9;
  break;
 case 128:
  *VAR_12 = VAR_8;
  break;
 default:
  return VAR_1;
 }

 if (VAR_15 & VAR_5)
  *VAR_13 = VAR_2;
 else
  *VAR_13 = VAR_3;

 return 0;
}
