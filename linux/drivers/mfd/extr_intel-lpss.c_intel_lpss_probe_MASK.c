
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_lpss_platform_info {scalar_t__ irq; TYPE_2__* mem; int properties; } ;
struct intel_lpss {scalar_t__ devid; TYPE_1__* cell; scalar_t__ priv; int caps; struct device* dev; struct intel_lpss_platform_info const* info; } ;
struct device {int dummy; } ;
struct TYPE_5__ {scalar_t__ start; } ;
struct TYPE_4__ {int properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,struct intel_lpss*) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct device*,scalar_t__,int ) ;
 struct intel_lpss* FUNC_4 (struct device*,int,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct intel_lpss*) ;
 int FUNC_8 (struct intel_lpss*) ;
 int FUNC_9 (struct intel_lpss*) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (struct intel_lpss*) ;
 TYPE_1__ VAR_9 ;
 int FUNC_11 (struct intel_lpss*) ;
 int FUNC_12 (struct intel_lpss*) ;
 int FUNC_13 (struct intel_lpss*) ;
 int FUNC_14 (struct intel_lpss*) ;
 int FUNC_15 (struct intel_lpss*) ;
 int FUNC_16 (struct device*,int,TYPE_1__*,int,TYPE_2__*,scalar_t__,int *) ;
 int FUNC_17 (scalar_t__) ;

int FUNC_18(struct device *VAR_10,
       const struct intel_lpss_platform_info *VAR_11)
{
 struct intel_lpss *VAR_12;
 int VAR_13;

 if (!VAR_11 || !VAR_11->mem || VAR_11->irq <= 0)
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_10, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->priv = FUNC_3(VAR_10, VAR_11->mem->start + VAR_6,
      VAR_7);
 if (!VAR_12->priv)
  return -VAR_2;

 VAR_12->info = VAR_11;
 VAR_12->dev = VAR_10;
 VAR_12->caps = FUNC_17(VAR_12->priv + VAR_5);

 FUNC_1(VAR_10, VAR_12);

 VAR_13 = FUNC_7(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_12->cell->properties = VAR_11->properties;

 FUNC_11(VAR_12);

 VAR_12->devid = FUNC_5(&VAR_8, 0, 0, VAR_3);
 if (VAR_12->devid < 0)
  return VAR_12->devid;

 VAR_13 = FUNC_14(VAR_12);
 if (VAR_13)
  goto err_clk_register;

 FUNC_12(VAR_12);

 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13)
  FUNC_2(VAR_10, "Failed to create debugfs entries\n");

 if (FUNC_10(VAR_12)) {
  VAR_13 = FUNC_16(VAR_10, VAR_12->devid, &VAR_9,
          1, VAR_11->mem, VAR_11->irq, ((void*)0));
  if (VAR_13)
   FUNC_2(VAR_10, "Failed to add %s, fallback to PIO\n",
     VAR_4);
 }

 VAR_13 = FUNC_16(VAR_10, VAR_12->devid, VAR_12->cell,
         1, VAR_11->mem, VAR_11->irq, ((void*)0));
 if (VAR_13)
  goto err_remove_ltr;

 FUNC_0(VAR_10, VAR_0);

 return 0;

err_remove_ltr:
 FUNC_9(VAR_12);
 FUNC_13(VAR_12);
 FUNC_15(VAR_12);

err_clk_register:
 FUNC_6(&VAR_8, VAR_12->devid);

 return VAR_13;
}
