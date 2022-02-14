
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
 int VAR_8 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_9, int *VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;

 VAR_11 = FUNC_0(VAR_9, VAR_2, &VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 &= VAR_0;
 VAR_12 >>= VAR_1;

 switch (VAR_12) {
 case 133:
  *VAR_10 = VAR_3;
  break;
 case 130:
 case 135:
 case 134:
  *VAR_10 = VAR_4;
  break;
 case 128:




  *VAR_10 = VAR_6;
  break;
 case 131:
  *VAR_10 = VAR_5;
  break;
 case 132:
  *VAR_10 = VAR_8;
  break;
 case 129:
 default:
  *VAR_10 = VAR_7;
  break;
 }

 return 0;
}
