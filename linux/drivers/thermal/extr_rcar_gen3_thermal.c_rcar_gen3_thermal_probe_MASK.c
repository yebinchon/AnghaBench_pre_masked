
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* tzp; } ;
struct resource {int dummy; } ;
struct rcar_gen3_thermal_tsc {int id; struct thermal_zone_device* zone; struct thermal_zone_device* base; } ;
struct rcar_gen3_thermal_priv {int num_tscs; int (* thermal_init ) (struct rcar_gen3_thermal_tsc*) ;struct rcar_gen3_thermal_tsc** tscs; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int no_hwmon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ,struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_6 (struct device*,struct resource*) ;
 char* FUNC_7 (struct device*,int ,char*,int ,int) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int *,int ,int ,char*,struct rcar_gen3_thermal_priv*) ;
 struct thermal_zone_device* FUNC_10 (struct device*,int,struct rcar_gen3_thermal_tsc*,int *) ;
 int* FUNC_11 (struct device*) ;
 int FUNC_12 (struct thermal_zone_device*) ;
 int FUNC_13 (struct platform_device*,int) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int) ;
 int FUNC_15 (struct platform_device*,struct rcar_gen3_thermal_priv*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (struct rcar_gen3_thermal_tsc*,int*,int ,int const) ;
 int FUNC_19 (struct rcar_gen3_thermal_tsc*) ;
 int FUNC_20 (struct rcar_gen3_thermal_tsc*) ;
 int VAR_8 ;
 int FUNC_21 (struct platform_device*) ;
 int VAR_9 ;
 int FUNC_22 (struct rcar_gen3_thermal_priv*,int) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (struct rcar_gen3_thermal_tsc*) ;
 int * VAR_10 ;
 int FUNC_25 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_11)
{
 struct rcar_gen3_thermal_priv *VAR_12;
 struct device *VAR_13 = &VAR_11->dev;
 const int *VAR_14 = FUNC_11(VAR_13);
 struct resource *VAR_15;
 struct thermal_zone_device *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 char *VAR_20;



 int VAR_21[3] = { 2631, 1509, 435 };

 VAR_12 = FUNC_8(VAR_13, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->thermal_init = FUNC_19;
 if (FUNC_23(VAR_6))
  VAR_12->thermal_init = FUNC_20;

 FUNC_15(VAR_11, VAR_12);






 for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
  VAR_18 = FUNC_13(VAR_11, VAR_19);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_20 = FUNC_7(VAR_13, VAR_2, "%s:ch%d",
      FUNC_4(VAR_13), VAR_19);
  if (!VAR_20)
   return -VAR_1;

  VAR_17 = FUNC_9(VAR_13, VAR_18, ((void*)0),
      VAR_8,
      VAR_4, VAR_20, VAR_12);
  if (VAR_17)
   return VAR_17;
 }

 FUNC_16(VAR_13);
 FUNC_17(VAR_13);

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  struct rcar_gen3_thermal_tsc *VAR_22;

  VAR_15 = FUNC_14(VAR_11, VAR_3, VAR_19);
  if (!VAR_15)
   break;

  VAR_22 = FUNC_8(VAR_13, sizeof(*VAR_22), VAR_2);
  if (!VAR_22) {
   VAR_17 = -VAR_1;
   goto error_unregister;
  }

  VAR_22->base = FUNC_6(VAR_13, VAR_15);
  if (FUNC_0(VAR_22->base)) {
   VAR_17 = FUNC_1(VAR_22->base);
   goto error_unregister;
  }
  VAR_22->id = VAR_19;

  VAR_12->tscs[VAR_19] = VAR_22;

  VAR_12->thermal_init(VAR_22);
  FUNC_18(VAR_22, VAR_21, VAR_10[VAR_19],
          *VAR_14);

  VAR_16 = FUNC_10(VAR_13, VAR_19, VAR_22,
           &VAR_9);
  if (FUNC_0(VAR_16)) {
   FUNC_2(VAR_13, "Can't register thermal zone\n");
   VAR_17 = FUNC_1(VAR_16);
   goto error_unregister;
  }
  VAR_22->zone = VAR_16;

  VAR_22->zone->tzp->no_hwmon = 0;
  VAR_17 = FUNC_25(VAR_22->zone);
  if (VAR_17)
   goto error_unregister;

  VAR_17 = FUNC_5(VAR_13, VAR_7, VAR_16);
  if (VAR_17) {
   goto error_unregister;
  }

  VAR_17 = FUNC_12(VAR_22->zone);
  if (VAR_17 < 0)
   goto error_unregister;

  FUNC_3(VAR_13, "TSC%d: Loaded %d trip points\n", VAR_19, VAR_17);
 }

 VAR_12->num_tscs = VAR_19;

 if (!VAR_12->num_tscs) {
  VAR_17 = -VAR_0;
  goto error_unregister;
 }

 FUNC_22(VAR_12, 1);

 return 0;

error_unregister:
 FUNC_21(VAR_11);

 return VAR_17;
}
