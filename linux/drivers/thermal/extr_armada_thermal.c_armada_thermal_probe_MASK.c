
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct thermal_zone_device {int dummy; } ;
struct TYPE_13__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct armada_thermal_sensor {int id; struct armada_thermal_priv* priv; } ;
struct armada_thermal_priv {int current_channel; int overheat_sensor; struct armada_thermal_data* data; int zone_name; int update_lock; TYPE_3__* dev; } ;
struct armada_thermal_data {int cpu_nr; int (* init ) (struct platform_device*,struct armada_thermal_priv*) ;} ;
struct TYPE_12__ {struct armada_thermal_priv* priv; struct thermal_zone_device* tz; } ;
struct armada_drvdata {TYPE_2__ data; int type; } ;
struct TYPE_11__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 int VAR_4 ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int VAR_5 ;
 int FUNC_2 (struct armada_thermal_priv*,struct thermal_zone_device*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct platform_device*,struct armada_thermal_priv*) ;
 int VAR_8 ;
 int FUNC_4 (struct platform_device*,struct armada_thermal_priv*) ;
 int FUNC_5 (struct platform_device*,struct armada_thermal_priv*) ;
 int FUNC_6 (struct armada_thermal_priv*) ;
 int FUNC_7 (TYPE_3__*,char*,...) ;
 int FUNC_8 (TYPE_3__*,char*,int) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_3__*,struct armada_thermal_sensor*) ;
 void* FUNC_11 (TYPE_3__*,int,int ) ;
 int FUNC_12 (TYPE_3__*,int,int ,int ,int ,int *,struct armada_thermal_priv*) ;
 struct thermal_zone_device* FUNC_13 (TYPE_3__*,int,struct armada_thermal_sensor*,int *) ;
 int VAR_9 ;
 int FUNC_14 (int *) ;
 struct of_device_id* FUNC_15 (int ,TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct armada_drvdata*) ;
 int FUNC_18 (struct platform_device*,struct armada_thermal_priv*) ;
 int FUNC_19 (struct platform_device*,struct armada_thermal_priv*) ;
 struct thermal_zone_device* FUNC_20 (int ) ;
 struct thermal_zone_device* FUNC_21 (int ,int ,int ,struct armada_thermal_priv*,int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_11)
{
 struct thermal_zone_device *VAR_12;
 struct armada_thermal_sensor *VAR_13;
 struct armada_drvdata *VAR_14;
 const struct of_device_id *VAR_15;
 struct armada_thermal_priv *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_15 = FUNC_15(VAR_8, &VAR_11->dev);
 if (!VAR_15)
  return -VAR_0;

 VAR_16 = FUNC_11(&VAR_11->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_1;

 VAR_14 = FUNC_11(&VAR_11->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_16->dev = &VAR_11->dev;
 VAR_16->data = (struct armada_thermal_data *)VAR_15->data;

 FUNC_14(&VAR_16->update_lock);
 if (FUNC_0(FUNC_20(VAR_11->dev.parent->of_node))) {

  FUNC_3(VAR_11, VAR_16);

  VAR_19 = FUNC_4(VAR_11, VAR_16);
  if (VAR_19)
   return VAR_19;

  VAR_16->data->init(VAR_11, VAR_16);


  FUNC_6(VAR_16);

  VAR_12 = FUNC_21(VAR_16->zone_name, 0, 0, VAR_16,
        &VAR_9, ((void*)0), 0, 0);
  if (FUNC_0(VAR_12)) {
   FUNC_7(&VAR_11->dev,
    "Failed to register thermal zone device\n");
   return FUNC_1(VAR_12);
  }

  VAR_14->type = VAR_4;
  VAR_14->data.tz = VAR_12;
  FUNC_17(VAR_11, VAR_14);

  return 0;
 }

 VAR_19 = FUNC_5(VAR_11, VAR_16);
 if (VAR_19)
  return VAR_19;

 VAR_16->current_channel = -1;
 VAR_16->data->init(VAR_11, VAR_16);
 VAR_14->type = VAR_5;
 VAR_14->data.priv = VAR_16;
 FUNC_17(VAR_11, VAR_14);

 VAR_18 = FUNC_16(VAR_11, 0);
 if (VAR_18 == -VAR_2)
  return VAR_18;


 if (VAR_18 > 0) {
  VAR_19 = FUNC_12(&VAR_11->dev, VAR_18,
      VAR_6,
      VAR_7,
      0, ((void*)0), VAR_16);
  if (VAR_19) {
   FUNC_7(&VAR_11->dev, "Cannot request threaded IRQ %d\n",
    VAR_18);
   return VAR_19;
  }
 }





 for (VAR_17 = 0; VAR_17 <= VAR_16->data->cpu_nr; VAR_17++) {
  VAR_13 = FUNC_11(&VAR_11->dev,
          sizeof(struct armada_thermal_sensor),
          VAR_3);
  if (!VAR_13)
   return -VAR_1;


  VAR_13->priv = VAR_16;
  VAR_13->id = VAR_17;
  VAR_12 = FUNC_13(&VAR_11->dev,
         VAR_13->id, VAR_13,
         &VAR_10);
  if (FUNC_0(VAR_12)) {
   FUNC_8(&VAR_11->dev, "Thermal sensor %d unavailable\n",
     VAR_17);
   FUNC_10(&VAR_11->dev, VAR_13);
   continue;
  }






  if (VAR_18 > 0 && !VAR_16->overheat_sensor)
   FUNC_2(VAR_16, VAR_12, VAR_13->id);
 }


 if (!VAR_16->overheat_sensor)
  FUNC_9(&VAR_11->dev, "Overheat interrupt not available\n");

 return 0;
}
