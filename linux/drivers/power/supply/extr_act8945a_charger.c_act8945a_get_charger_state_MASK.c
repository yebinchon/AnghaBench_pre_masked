
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
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_10, int *VAR_11)
{
 int VAR_12;
 unsigned int VAR_13, VAR_14;

 VAR_12 = FUNC_0(VAR_10, VAR_1, &VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_10, VAR_0, &VAR_14);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_14 &= VAR_2;
 VAR_14 >>= VAR_3;

 switch (VAR_14) {
 case 128:
 case 129:
  *VAR_11 = VAR_6;
  break;
 case 130:
  if (VAR_13 & VAR_4)
   *VAR_11 = VAR_8;
  else
   *VAR_11 = VAR_6;
  break;
 case 131:
 default:
  if (!(VAR_13 & VAR_5))
   *VAR_11 = VAR_7;
  else
   *VAR_11 = VAR_9;
  break;
 }

 return 0;
}
