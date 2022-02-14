
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lmu {int regmap; scalar_t__ en_gpio; } ;
typedef enum ti_lmu_id { ____Placeholder_ti_lmu_id } ti_lmu_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ti_lmu *VAR_3, enum ti_lmu_id VAR_4)
{
 if (VAR_3->en_gpio)
  FUNC_0(VAR_3->en_gpio, 1);


 FUNC_2(1000, 1500);


 if (VAR_4 == VAR_0) {
  return FUNC_1(VAR_3->regmap, VAR_2,
       VAR_1,
       VAR_1);
 }

 return 0;
}
