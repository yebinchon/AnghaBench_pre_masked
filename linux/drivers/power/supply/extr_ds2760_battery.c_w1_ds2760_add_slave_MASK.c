
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int id; scalar_t__ of_node; } ;
struct w1_slave {struct ds2760_device_info* family_data; struct device dev; } ;
struct power_supply_config {scalar_t__ of_node; struct ds2760_device_info* drv_data; } ;
struct TYPE_3__ {int notifier_call; } ;
struct TYPE_4__ {char* name; int external_power_changed; int set_charged; int property_is_writeable; int set_property; int get_property; int num_properties; int properties; int type; } ;
struct ds2760_device_info {char* raw; int bat; TYPE_1__ pm_notifier; int monitor_work; int monitor_wqueue; int set_charged_work; struct device* dev; TYPE_2__ bat_desc; int charge_status; } ;
typedef int name ;


 int FUNC_0 (int ) ;
 char VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (char*,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (struct device*,char*) ;
 struct ds2760_device_info* FUNC_6 (struct device*,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct ds2760_device_info*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (struct ds2760_device_info*,scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct ds2760_device_info*,int) ;
 int FUNC_10 (struct ds2760_device_info*,char) ;
 int VAR_19 ;
 int FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (scalar_t__,char*,int*) ;
 int VAR_20 ;
 int FUNC_13 (struct device*,TYPE_2__*,struct power_supply_config*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *,int) ;
 int VAR_21 ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_18(struct w1_slave *VAR_22)
{
 struct power_supply_config VAR_23 = {};
 struct ds2760_device_info *VAR_24;
 struct device *VAR_25 = &VAR_22->dev;
 int VAR_26 = 0;
 char VAR_27[32];
 char VAR_28;

 VAR_24 = FUNC_6(VAR_25, sizeof(*VAR_24), VAR_4);
 if (!VAR_24) {
  VAR_26 = -VAR_2;
  goto di_alloc_failed;
 }

 FUNC_17(VAR_27, sizeof(VAR_27), "ds2760-battery.%d", VAR_25->id);

 VAR_24->dev = VAR_25;
 VAR_24->bat_desc.name = VAR_27;
 VAR_24->bat_desc.type = VAR_7;
 VAR_24->bat_desc.properties = VAR_14;
 VAR_24->bat_desc.num_properties = FUNC_0(VAR_14);
 VAR_24->bat_desc.get_property = VAR_12;
 VAR_24->bat_desc.set_property = VAR_17;
 VAR_24->bat_desc.property_is_writeable =
      VAR_13;
 VAR_24->bat_desc.set_charged = VAR_15;
 VAR_24->bat_desc.external_power_changed =
      VAR_11;

 VAR_23.drv_data = VAR_24;

 if (VAR_25->of_node) {
  u32 VAR_29;

  VAR_23.of_node = VAR_25->of_node;

  if (!FUNC_11(VAR_25->of_node, "maxim,pmod-enabled"))
   VAR_20 = 1;

  if (!FUNC_12(VAR_25->of_node,
       "maxim,cache-time-ms", &VAR_29))
   VAR_9 = VAR_29;

  if (!FUNC_12(VAR_25->of_node,
       "rated-capacity-microamp-hours",
       &VAR_29))
   VAR_21 = VAR_29 / 10;
 }

 VAR_24->charge_status = VAR_6;

 VAR_22->family_data = VAR_24;


 FUNC_7(VAR_24);
 VAR_28 = VAR_24->raw[VAR_1];
 if (VAR_20)
  VAR_28 |= VAR_0;
 else
  VAR_28 &= ~VAR_0;

 FUNC_10(VAR_24, VAR_28);


 if (VAR_21)
  FUNC_9(VAR_24, VAR_21);



 if (VAR_10)
  FUNC_8(VAR_24, VAR_10);

 VAR_24->bat = FUNC_13(VAR_25, &VAR_24->bat_desc, &VAR_23);
 if (FUNC_2(VAR_24->bat)) {
  FUNC_5(VAR_24->dev, "failed to register battery\n");
  VAR_26 = FUNC_3(VAR_24->bat);
  goto batt_failed;
 }

 FUNC_1(&VAR_24->monitor_work, VAR_18);
 FUNC_1(&VAR_24->set_charged_work,
     VAR_16);
 VAR_24->monitor_wqueue = FUNC_4(VAR_27, VAR_8);
 if (!VAR_24->monitor_wqueue) {
  VAR_26 = -VAR_3;
  goto workqueue_failed;
 }
 FUNC_15(VAR_24->monitor_wqueue, &VAR_24->monitor_work, VAR_5 * 1);

 VAR_24->pm_notifier.notifier_call = VAR_19;
 FUNC_16(&VAR_24->pm_notifier);

 goto success;

workqueue_failed:
 FUNC_14(VAR_24->bat);
batt_failed:
di_alloc_failed:
success:
 return VAR_26;
}
