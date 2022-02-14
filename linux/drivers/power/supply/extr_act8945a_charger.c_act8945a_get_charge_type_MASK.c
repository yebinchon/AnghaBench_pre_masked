
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_9, int *VAR_10)
{
 int VAR_11;
 unsigned int VAR_12, VAR_13;

 VAR_11 = FUNC_0(VAR_9, VAR_1, &VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_0, &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_13 &= VAR_2;
 VAR_13 >>= VAR_3;

 switch (VAR_13) {
 case 128:
  *VAR_10 = VAR_7;
  break;
 case 129:
  *VAR_10 = VAR_5;
  break;
 case 130:
  *VAR_10 = VAR_6;
  break;
 case 131:
 default:
  if (!(VAR_12 & VAR_4))
   *VAR_10 = VAR_6;
  else
   *VAR_10 = VAR_8;
  break;
 }

 return 0;
}
