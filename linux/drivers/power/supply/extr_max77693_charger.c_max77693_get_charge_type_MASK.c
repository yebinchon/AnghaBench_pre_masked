
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
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_7, int *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_0(VAR_7, VAR_2, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 &= VAR_0;
 VAR_10 >>= VAR_1;

 switch (VAR_10) {
 case 133:




 case 129:
  *VAR_8 = VAR_5;
  break;
 case 138:
 case 137:

 case 136:
  *VAR_8 = VAR_3;
  break;
 case 139:
 case 130:
 case 131:
 case 135:
 case 134:
 case 128:
  *VAR_8 = VAR_4;
  break;
 case 132:
 default:
  *VAR_8 = VAR_6;
 }

 return 0;
}
