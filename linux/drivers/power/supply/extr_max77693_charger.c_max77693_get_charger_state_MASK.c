
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_8, int *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_0(VAR_8, VAR_2, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 &= VAR_0;
 VAR_11 >>= VAR_1;

 switch (VAR_11) {
 case 133:
 case 138:
 case 137:
 case 129:

 case 136:
  *VAR_9 = VAR_3;
  break;
 case 139:
  *VAR_9 = VAR_5;
  break;
 case 130:
 case 131:
  *VAR_9 = VAR_6;
  break;
 case 135:
 case 134:
 case 128:
  *VAR_9 = VAR_4;
  break;
 case 132:
 default:
  *VAR_9 = VAR_7;
 }

 return 0;
}
