
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_consumer_data {scalar_t__ max_uA; scalar_t__ min_uA; int enabled; int regulator; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0,
       struct virtual_consumer_data *VAR_1)
{
 int VAR_2;

 if (VAR_1->max_uA
     && VAR_1->min_uA <= VAR_1->max_uA) {
  FUNC_0(VAR_0, "Requesting %d-%duA\n",
   VAR_1->min_uA, VAR_1->max_uA);
  VAR_2 = FUNC_4(VAR_1->regulator,
     VAR_1->min_uA, VAR_1->max_uA);
  if (VAR_2 != 0) {
   FUNC_1(VAR_0,
    "regulator_set_current_limit() failed: %d\n",
    VAR_2);
   return;
  }
 }

 if (VAR_1->max_uA && !VAR_1->enabled) {
  FUNC_0(VAR_0, "Enabling regulator\n");
  VAR_2 = FUNC_3(VAR_1->regulator);
  if (VAR_2 == 0)
   VAR_1->enabled = 1;
  else
   FUNC_1(VAR_0, "regulator_enable() failed: %d\n",
    VAR_2);
 }

 if (!(VAR_1->min_uA && VAR_1->max_uA) && VAR_1->enabled) {
  FUNC_0(VAR_0, "Disabling regulator\n");
  VAR_2 = FUNC_2(VAR_1->regulator);
  if (VAR_2 == 0)
   VAR_1->enabled = 0;
  else
   FUNC_1(VAR_0, "regulator_disable() failed: %d\n",
    VAR_2);
 }
}
