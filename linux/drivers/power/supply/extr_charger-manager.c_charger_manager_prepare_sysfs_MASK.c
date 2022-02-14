
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {char* name; int mode; } ;
struct TYPE_9__ {int store; int show; TYPE_5__ attr; } ;
struct TYPE_8__ {int show; TYPE_5__ attr; } ;
struct TYPE_7__ {int show; TYPE_5__ attr; } ;
struct TYPE_6__ {char* name; TYPE_5__** attrs; } ;
struct charger_regulator {int externally_control; int regulator_name; TYPE_4__ attr_externally_control; TYPE_3__ attr_state; TYPE_2__ attr_name; TYPE_1__ attr_grp; TYPE_5__** attrs; } ;
struct charger_manager {int dev; struct charger_desc* desc; } ;
struct charger_desc {int num_charger_regulators; struct charger_regulator* charger_regulators; TYPE_1__** sysfs_groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 char* FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(struct charger_manager *VAR_7)
{
 struct charger_desc *VAR_8 = VAR_7->desc;
 struct charger_regulator *VAR_9;
 int VAR_10 = 1;
 char *VAR_11;
 int VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_8->num_charger_regulators; VAR_12++) {
  VAR_9 = &VAR_8->charger_regulators[VAR_12];

  VAR_11 = FUNC_2(VAR_7->dev, VAR_2, "charger.%d", VAR_12);
  if (!VAR_11)
   return -VAR_1;

  VAR_9->attrs[0] = &VAR_9->attr_name.attr;
  VAR_9->attrs[1] = &VAR_9->attr_state.attr;
  VAR_9->attrs[2] = &VAR_9->attr_externally_control.attr;
  VAR_9->attrs[3] = ((void*)0);

  VAR_9->attr_grp.name = VAR_11;
  VAR_9->attr_grp.attrs = VAR_9->attrs;
  VAR_8->sysfs_groups[VAR_12] = &VAR_9->attr_grp;

  FUNC_3(&VAR_9->attr_name.attr);
  VAR_9->attr_name.attr.name = "name";
  VAR_9->attr_name.attr.mode = 0444;
  VAR_9->attr_name.show = VAR_5;

  FUNC_3(&VAR_9->attr_state.attr);
  VAR_9->attr_state.attr.name = "state";
  VAR_9->attr_state.attr.mode = 0444;
  VAR_9->attr_state.show = VAR_6;

  FUNC_3(&VAR_9->attr_externally_control.attr);
  VAR_9->attr_externally_control.attr.name
    = "externally_control";
  VAR_9->attr_externally_control.attr.mode = 0644;
  VAR_9->attr_externally_control.show
    = VAR_3;
  VAR_9->attr_externally_control.store
    = VAR_4;

  if (!VAR_8->charger_regulators[VAR_12].externally_control ||
    !VAR_10)
   VAR_10 = 0;

  FUNC_1(VAR_7->dev, "'%s' regulator's externally_control is %d\n",
    VAR_9->regulator_name, VAR_9->externally_control);
 }

 if (VAR_10) {
  FUNC_0(VAR_7->dev, "Cannot register regulator because charger-manager must need at least one charger for charging battery\n");
  return -VAR_0;
 }

 return 0;
}
