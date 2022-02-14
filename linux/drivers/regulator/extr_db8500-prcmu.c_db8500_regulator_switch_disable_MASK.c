
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct dbx500_regulator_info {scalar_t__ is_enabled; TYPE_1__ desc; int is_ramret; int epod_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct regulator_dev*) ;
 struct dbx500_regulator_info* FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1)
{
 struct dbx500_regulator_info *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_1(FUNC_3(VAR_1), "regulator-switch-%s-disable\n",
  VAR_2->desc.name);

 VAR_3 = FUNC_2(VAR_2->epod_id, VAR_2->is_ramret);
 if (VAR_3 < 0) {
  FUNC_0(FUNC_3(VAR_1),
   "regulator_switch-%s-disable: prcmu call failed\n",
   VAR_2->desc.name);
  goto out;
 }

 VAR_2->is_enabled = 0;
out:
 return VAR_3;
}
