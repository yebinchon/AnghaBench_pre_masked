
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;

 unsigned int VAR_3 ;

 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_6, int VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11 = FUNC_1(VAR_6);

 switch (VAR_11) {
 case 131:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 default:
  return 0;
 }
 VAR_10 = VAR_5;
 VAR_8 = FUNC_0(VAR_7);

 return FUNC_2(VAR_6->regmap, VAR_10,
      VAR_0 << VAR_9,
      VAR_8 << VAR_9);
}
