
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct rcar_thermal_priv {int id; int list; TYPE_2__* zone; int work; int lock; struct rcar_thermal_chip const* chip; struct rcar_thermal_common* common; TYPE_2__* base; } ;
struct rcar_thermal_common {TYPE_2__* base; int head; struct device* dev; int lock; } ;
struct rcar_thermal_chip {int nirqs; scalar_t__ irq_per_ch; scalar_t__ use_of_thermal; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_8__ {TYPE_1__* tzp; } ;
struct TYPE_7__ {int no_hwmon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int ,int ,int ,int ,struct rcar_thermal_common*) ;
 TYPE_2__* FUNC_10 (struct device*,int,struct rcar_thermal_priv*,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 struct rcar_thermal_chip* FUNC_13 (struct device*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int) ;
 int FUNC_15 (struct platform_device*,struct rcar_thermal_common*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct rcar_thermal_common*,int ,int) ;
 int VAR_8 ;
 int FUNC_19 (struct rcar_thermal_priv*) ;
 int FUNC_20 (struct platform_device*) ;
 int FUNC_21 (struct rcar_thermal_priv*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_2__*) ;
 TYPE_2__* FUNC_24 (char*,int,int ,struct rcar_thermal_priv*,int *,int *,int ,int) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_12)
{
 struct rcar_thermal_common *VAR_13;
 struct rcar_thermal_priv *VAR_14;
 struct device *VAR_15 = &VAR_12->dev;
 struct resource *VAR_16, *VAR_17;
 const struct rcar_thermal_chip *VAR_18 = FUNC_13(VAR_15);
 int VAR_19 = 0;
 int VAR_20;
 int VAR_21 = -VAR_0;
 int VAR_22 = VAR_4;
 u32 VAR_23 = 0;

 VAR_13 = FUNC_8(VAR_15, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 FUNC_15(VAR_12, VAR_13);

 FUNC_1(&VAR_13->head);
 FUNC_22(&VAR_13->lock);
 VAR_13->dev = VAR_15;

 FUNC_16(VAR_15);
 FUNC_17(VAR_15);

 for (VAR_20 = 0; VAR_20 < VAR_18->nirqs; VAR_20++) {
  VAR_17 = FUNC_14(VAR_12, VAR_5, VAR_20);
  if (!VAR_17)
   continue;
  if (!VAR_13->base) {





   VAR_16 = FUNC_14(VAR_12, VAR_6,
          VAR_19++);
   VAR_13->base = FUNC_7(VAR_15, VAR_16);
   if (FUNC_2(VAR_13->base))
    return FUNC_3(VAR_13->base);

   VAR_22 = 0;
  }

  VAR_21 = FUNC_9(VAR_15, VAR_17->start, VAR_8,
           VAR_7, FUNC_6(VAR_15), VAR_13);
  if (VAR_21) {
   FUNC_4(VAR_15, "irq request failed\n ");
   goto error_unregister;
  }


  if (VAR_18->irq_per_ch)
   VAR_23 |= 1 << VAR_20;
 }

 for (VAR_20 = 0;; VAR_20++) {
  VAR_16 = FUNC_14(VAR_12, VAR_6, VAR_19++);
  if (!VAR_16)
   break;

  VAR_14 = FUNC_8(VAR_15, sizeof(*VAR_14), VAR_3);
  if (!VAR_14) {
   VAR_21 = -VAR_1;
   goto error_unregister;
  }

  VAR_14->base = FUNC_7(VAR_15, VAR_16);
  if (FUNC_2(VAR_14->base)) {
   VAR_21 = FUNC_3(VAR_14->base);
   goto error_unregister;
  }

  VAR_14->common = VAR_13;
  VAR_14->id = VAR_20;
  VAR_14->chip = VAR_18;
  FUNC_12(&VAR_14->lock);
  FUNC_1(&VAR_14->list);
  FUNC_0(&VAR_14->work, VAR_9);
  VAR_21 = FUNC_21(VAR_14);
  if (VAR_21 < 0)
   goto error_unregister;

  if (VAR_18->use_of_thermal)
   VAR_14->zone = FUNC_10(
      VAR_15, VAR_20, VAR_14,
      &VAR_10);
  else
   VAR_14->zone = FUNC_24(
      "rcar_thermal",
      1, 0, VAR_14,
      &VAR_11, ((void*)0), 0,
      VAR_22);
  if (FUNC_2(VAR_14->zone)) {
   FUNC_4(VAR_15, "can't register thermal zone\n");
   VAR_21 = FUNC_3(VAR_14->zone);
   VAR_14->zone = ((void*)0);
   goto error_unregister;
  }

  if (VAR_18->use_of_thermal) {




   VAR_14->zone->tzp->no_hwmon = 0;
   VAR_21 = FUNC_23(VAR_14->zone);
   if (VAR_21)
    goto error_unregister;
  }

  FUNC_19(VAR_14);

  FUNC_11(&VAR_14->list, &VAR_13->head);


  if (!VAR_18->irq_per_ch)
   VAR_23 |= 3 << (VAR_20 * 8);
 }

 if (VAR_13->base && VAR_23)
  FUNC_18(VAR_13, VAR_2, VAR_23);

 FUNC_5(VAR_15, "%d sensor probed\n", VAR_20);

 return 0;

error_unregister:
 FUNC_20(VAR_12);

 return VAR_21;
}
