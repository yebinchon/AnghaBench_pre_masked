
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct da9150_fg_pdata* platform_data; scalar_t__ of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct da9150_fg_pdata {int warn_soc_lvl; int crit_soc_lvl; scalar_t__ update_interval; } ;
struct da9150_fg {int warn_soc; int crit_soc; int work; scalar_t__ interval; int battery; int io_lock; struct device* dev; struct da9150* da9150; } ;
struct da9150 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct da9150_fg_pdata* FUNC_4 (struct device*) ;
 int VAR_7 ;
 int FUNC_5 (struct da9150_fg*,int ,int ) ;
 int FUNC_6 (struct da9150_fg*) ;
 int VAR_8 ;
 int FUNC_7 (struct da9150*,int ,int ,int ) ;
 int FUNC_8 (struct device*,char*,int,...) ;
 struct da9150* FUNC_9 (int ) ;
 struct da9150_fg_pdata* FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,char*,int) ;
 int FUNC_12 (struct device*,char*) ;
 struct da9150_fg* FUNC_13 (struct device*,int,int ) ;
 int FUNC_14 (struct device*,int *,int *) ;
 int FUNC_15 (struct device*,int,int *,int ,int ,char*,struct da9150_fg*) ;
 int VAR_9 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct platform_device*,char*) ;
 int FUNC_19 (struct platform_device*,struct da9150_fg*) ;
 int FUNC_20 (int *,int ) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct da9150 *VAR_12 = FUNC_9(VAR_11->parent);
 struct da9150_fg_pdata *VAR_13 = FUNC_10(VAR_11);
 struct da9150_fg *VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0;

 VAR_14 = FUNC_13(VAR_11, sizeof(*VAR_14), VAR_5);
 if (VAR_14 == ((void*)0))
  return -VAR_4;

 FUNC_19(VAR_10, VAR_14);
 VAR_14->da9150 = VAR_12;
 VAR_14->dev = VAR_11;

 FUNC_17(&VAR_14->io_lock);


 FUNC_7(VAR_12, VAR_0, VAR_1,
   VAR_1);

 VAR_14->battery = FUNC_14(VAR_11, &VAR_9, ((void*)0));
 if (FUNC_1(VAR_14->battery)) {
  VAR_17 = FUNC_2(VAR_14->battery);
  return VAR_17;
 }

 VAR_15 = FUNC_5(VAR_14, VAR_2,
      VAR_3);
 FUNC_11(VAR_11, "Version: 0x%x\n", VAR_15);


 if (VAR_11->of_node) {
  VAR_13 = FUNC_4(VAR_11);
  VAR_11->platform_data = VAR_13;
 }


 if (VAR_13) {
  VAR_14->interval = VAR_13->update_interval;

  if (VAR_13->warn_soc_lvl > 100)
   FUNC_12(VAR_11, "Invalid SOC warning level provided, Ignoring");
  else
   VAR_14->warn_soc = VAR_13->warn_soc_lvl;

  if ((VAR_13->crit_soc_lvl > 100) ||
      (VAR_13->crit_soc_lvl >= VAR_13->warn_soc_lvl))
   FUNC_12(VAR_11, "Invalid SOC critical level provided, Ignoring");
  else
   VAR_14->crit_soc = VAR_13->crit_soc_lvl;


 }


 FUNC_6(VAR_14);





 if (VAR_14->interval) {
  FUNC_0(&VAR_14->work, VAR_8);
  FUNC_20(&VAR_14->work,
          FUNC_16(VAR_14->interval));
 }


 VAR_16 = FUNC_18(VAR_10, "FG");
 if (VAR_16 < 0) {
  FUNC_8(VAR_11, "Failed to get IRQ FG: %d\n", VAR_16);
  VAR_17 = VAR_16;
  goto irq_fail;
 }

 VAR_17 = FUNC_15(VAR_11, VAR_16, ((void*)0), VAR_7,
     VAR_6, "FG", VAR_14);
 if (VAR_17) {
  FUNC_8(VAR_11, "Failed to request IRQ %d: %d\n", VAR_16, VAR_17);
  goto irq_fail;
 }

 return 0;

irq_fail:
 if (VAR_14->interval)
  FUNC_3(&VAR_14->work);

 return VAR_17;
}
