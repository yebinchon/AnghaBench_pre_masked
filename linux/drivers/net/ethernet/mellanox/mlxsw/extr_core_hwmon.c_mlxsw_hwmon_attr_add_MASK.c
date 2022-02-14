
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; int name; } ;
struct TYPE_3__ {TYPE_2__ attr; int show; int store; } ;
struct mlxsw_hwmon_attr {unsigned int type_index; TYPE_1__ dev_attr; int name; struct mlxsw_hwmon* hwmon; } ;
struct mlxsw_hwmon {unsigned int attrs_count; TYPE_2__** attrs; struct mlxsw_hwmon_attr* hwmon_attrs; } ;
typedef enum mlxsw_hwmon_attr_type { ____Placeholder_mlxsw_hwmon_attr_type } mlxsw_hwmon_attr_type ;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int,char*,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_hwmon *VAR_13,
     enum mlxsw_hwmon_attr_type VAR_14,
     unsigned int VAR_15, unsigned int VAR_16) {
 struct mlxsw_hwmon_attr *VAR_17;
 unsigned int VAR_18;

 VAR_18 = VAR_13->attrs_count;
 VAR_17 = &VAR_13->hwmon_attrs[VAR_18];

 switch (VAR_14) {
 case 136:
  VAR_17->dev_attr.show = VAR_12;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_input", VAR_16 + 1);
  break;
 case 134:
  VAR_17->dev_attr.show = VAR_10;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_highest", VAR_16 + 1);
  break;
 case 128:
  VAR_17->dev_attr.store = VAR_11;
  VAR_17->dev_attr.attr.mode = 0200;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_reset_history", VAR_16 + 1);
  break;
 case 138:
  VAR_17->dev_attr.show = VAR_1;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "fan%u_input", VAR_16 + 1);
  break;
 case 139:
  VAR_17->dev_attr.show = VAR_0;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "fan%u_fault", VAR_16 + 1);
  break;
 case 137:
  VAR_17->dev_attr.show = VAR_8;
  VAR_17->dev_attr.store = VAR_9;
  VAR_17->dev_attr.attr.mode = 0644;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "pwm%u", VAR_16 + 1);
  break;
 case 133:
  VAR_17->dev_attr.show = VAR_7;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_input", VAR_16 + 1);
  break;
 case 130:
  VAR_17->dev_attr.show =
     VAR_5;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_fault", VAR_16 + 1);
  break;
 case 132:
  VAR_17->dev_attr.show =
   VAR_3;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_crit", VAR_16 + 1);
  break;
 case 131:
  VAR_17->dev_attr.show =
   VAR_4;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_emergency", VAR_16 + 1);
  break;
 case 129:
  VAR_17->dev_attr.show =
   VAR_6;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_label", VAR_16 + 1);
  break;
 case 135:
  VAR_17->dev_attr.show =
   VAR_2;
  VAR_17->dev_attr.attr.mode = 0444;
  FUNC_1(VAR_17->name, sizeof(VAR_17->name),
    "temp%u_label", VAR_16 + 1);
  break;
 default:
  FUNC_0(1);
 }

 VAR_17->type_index = VAR_15;
 VAR_17->hwmon = VAR_13;
 VAR_17->dev_attr.attr.name = VAR_17->name;
 FUNC_2(&VAR_17->dev_attr.attr);

 VAR_13->attrs[VAR_18] = &VAR_17->dev_attr.attr;
 VAR_13->attrs_count++;
}
