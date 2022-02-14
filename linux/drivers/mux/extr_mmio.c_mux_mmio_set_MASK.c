
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {int dummy; } ;
struct mux_control {int chip; } ;


 struct regmap_field** FUNC_0 (int ) ;
 size_t FUNC_1 (struct mux_control*) ;
 int FUNC_2 (struct regmap_field*,int) ;

__attribute__((used)) static int FUNC_3(struct mux_control *VAR_0, int VAR_1)
{
 struct regmap_field **VAR_2 = FUNC_0(VAR_0->chip);

 return FUNC_2(VAR_2[FUNC_1(VAR_0)], VAR_1);
}
