
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pio_control {struct regmap_field* alt; } ;
struct regmap_field {int dummy; } ;


 int FUNC_0 (struct regmap_field*,unsigned int*) ;
 int FUNC_1 (struct regmap_field*,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct st_pio_control *VAR_0,
    int VAR_1, int VAR_2)
{
 struct regmap_field *VAR_3 = VAR_0->alt;
 unsigned int VAR_4;
 int VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = VAR_5 * 4;

 if (!VAR_3)
  return;

 FUNC_0(VAR_3, &VAR_4);
 VAR_4 &= ~(0xf << VAR_6);
 VAR_4 |= VAR_2 << VAR_6;
 FUNC_1(VAR_3, VAR_4);
}
