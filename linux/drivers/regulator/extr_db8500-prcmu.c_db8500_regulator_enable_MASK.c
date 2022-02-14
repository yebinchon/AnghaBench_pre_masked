
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct dbx500_regulator_info {int is_enabled; int exclude_from_power_state; TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct regulator_dev*) ;
 struct dbx500_regulator_info* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1)
{
 struct dbx500_regulator_info *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_0(FUNC_2(VAR_1), "regulator-%s-enable\n",
  VAR_2->desc.name);

 if (!VAR_2->is_enabled) {
  VAR_2->is_enabled = 1;
  if (!VAR_2->exclude_from_power_state)
   FUNC_1();
 }

 return 0;
}
