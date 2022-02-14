
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * sensor; } ;
struct TYPE_8__ {TYPE_1__ thermal_sensor_data; } ;
struct TYPE_9__ {TYPE_2__ mac; } ;
struct ixgbe_adapter {TYPE_5__* ixgbe_hwmon_buff; TYPE_3__ hw; } ;
struct TYPE_12__ {int mode; int name; } ;
struct TYPE_10__ {TYPE_6__ attr; int * store; int show; } ;
struct hwmon_attr {TYPE_4__ dev_attr; int name; TYPE_3__* hw; int * sensor; } ;
struct TYPE_11__ {unsigned int n_hwmon; TYPE_6__** attrs; struct hwmon_attr* hwmon_list; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*,unsigned int) ;
 int FUNC_1 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_5,
    unsigned int VAR_6, int VAR_7) {
 int VAR_8;
 unsigned int VAR_9;
 struct hwmon_attr *VAR_10;

 VAR_9 = VAR_5->ixgbe_hwmon_buff->n_hwmon;
 VAR_10 = &VAR_5->ixgbe_hwmon_buff->hwmon_list[VAR_9];

 switch (VAR_7) {
 case 130:
  VAR_10->dev_attr.show = VAR_2;
  FUNC_0(VAR_10->name, sizeof(VAR_10->name),
    "temp%u_label", VAR_6 + 1);
  break;
 case 128:
  VAR_10->dev_attr.show = VAR_4;
  FUNC_0(VAR_10->name, sizeof(VAR_10->name),
    "temp%u_input", VAR_6 + 1);
  break;
 case 131:
  VAR_10->dev_attr.show = VAR_1;
  FUNC_0(VAR_10->name, sizeof(VAR_10->name),
    "temp%u_max", VAR_6 + 1);
  break;
 case 129:
  VAR_10->dev_attr.show = VAR_3;
  FUNC_0(VAR_10->name, sizeof(VAR_10->name),
    "temp%u_crit", VAR_6 + 1);
  break;
 default:
  VAR_8 = -VAR_0;
  return VAR_8;
 }


 VAR_10->sensor =
  &VAR_5->hw.mac.thermal_sensor_data.sensor[VAR_6];
 VAR_10->hw = &VAR_5->hw;
 VAR_10->dev_attr.store = ((void*)0);
 VAR_10->dev_attr.attr.mode = 0444;
 VAR_10->dev_attr.attr.name = VAR_10->name;
 FUNC_1(&VAR_10->dev_attr.attr);

 VAR_5->ixgbe_hwmon_buff->attrs[VAR_9] = &VAR_10->dev_attr.attr;

 ++VAR_5->ixgbe_hwmon_buff->n_hwmon;

 return 0;
}
