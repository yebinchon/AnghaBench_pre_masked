
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int chip_id; int regmap; } ;



 int VAR_0 ;




 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct da9052 *VAR_1, unsigned char VAR_2)
{
 int VAR_3;

 switch (VAR_1->chip_id) {
 case 132:
 case 131:
 case 130:
 case 129:

  if (!FUNC_0(VAR_2))
   return FUNC_1(VAR_1->regmap,
        VAR_0,
        &VAR_3);
  break;
 case 128:
 default:




  break;
 }

 return 0;
}
