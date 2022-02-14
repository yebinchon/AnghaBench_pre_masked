
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gab {int * channel; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct gab *VAR_0, enum power_supply_property VAR_1,
  int *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_0->channel[VAR_4],
   VAR_2);
 if (VAR_3 < 0)
  FUNC_2("read channel error\n");
 return VAR_3;
}
