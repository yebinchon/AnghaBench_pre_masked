
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; struct device* parent; int * fops; int minor; } ;
struct tegra_vde {int iram_pool; scalar_t__ iram; TYPE_1__ miscdev; int decode_completion; int lock; int map_lock; int map_list; int iram_lists_addr; void* rst_mc; void* rst; void* clk; void* frameid; void* vdma; void* ppb; void* tfe; void* mce; void* ppe; void* mbe; void* bsev; void* sxe; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 void* FUNC_5 (struct device*,int *) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct tegra_vde* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,int ,int ,struct tegra_vde*) ;
 void* FUNC_9 (struct device*,int *) ;
 void* FUNC_10 (struct device*,char*) ;
 scalar_t__ FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,unsigned long,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (struct platform_device*,char*) ;
 struct resource* FUNC_20 (struct platform_device*,int ,char*) ;
 int FUNC_21 (struct platform_device*,struct tegra_vde*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*,int) ;
 int FUNC_25 (struct device*) ;
 int VAR_6 ;
 int FUNC_26 (struct tegra_vde*) ;
 int FUNC_27 (struct tegra_vde*) ;
 int VAR_7 ;
 int FUNC_28 (struct device*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct resource *VAR_10;
 struct tegra_vde *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_7(VAR_9, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 FUNC_21(VAR_8, VAR_11);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "sxe");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->sxe = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->sxe))
  return FUNC_2(VAR_11->sxe);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "bsev");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->bsev = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->bsev))
  return FUNC_2(VAR_11->bsev);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "mbe");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->mbe = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->mbe))
  return FUNC_2(VAR_11->mbe);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "ppe");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->ppe = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->ppe))
  return FUNC_2(VAR_11->ppe);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "mce");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->mce = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->mce))
  return FUNC_2(VAR_11->mce);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "tfe");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->tfe = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->tfe))
  return FUNC_2(VAR_11->tfe);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "ppb");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->ppb = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->ppb))
  return FUNC_2(VAR_11->ppb);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "vdma");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->vdma = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->vdma))
  return FUNC_2(VAR_11->vdma);

 VAR_10 = FUNC_20(VAR_8, VAR_4, "frameid");
 if (!VAR_10)
  return -VAR_0;

 VAR_11->frameid = FUNC_6(VAR_9, VAR_10);
 if (FUNC_1(VAR_11->frameid))
  return FUNC_2(VAR_11->frameid);

 VAR_11->clk = FUNC_5(VAR_9, ((void*)0));
 if (FUNC_1(VAR_11->clk)) {
  VAR_13 = FUNC_2(VAR_11->clk);
  FUNC_3(VAR_9, "Could not get VDE clk %d\n", VAR_13);
  return VAR_13;
 }

 VAR_11->rst = FUNC_9(VAR_9, ((void*)0));
 if (FUNC_1(VAR_11->rst)) {
  VAR_13 = FUNC_2(VAR_11->rst);
  FUNC_3(VAR_9, "Could not get VDE reset %d\n", VAR_13);
  return VAR_13;
 }

 VAR_11->rst_mc = FUNC_10(VAR_9, "mc");
 if (FUNC_1(VAR_11->rst_mc)) {
  VAR_13 = FUNC_2(VAR_11->rst_mc);
  FUNC_3(VAR_9, "Could not get MC reset %d\n", VAR_13);
  return VAR_13;
 }

 VAR_12 = FUNC_19(VAR_8, "sync-token");
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = FUNC_8(VAR_9, VAR_12, VAR_7, 0,
          FUNC_4(VAR_9), VAR_11);
 if (VAR_13) {
  FUNC_3(VAR_9, "Could not request IRQ %d\n", VAR_13);
  return VAR_13;
 }

 VAR_11->iram_pool = FUNC_18(VAR_9->of_node, "iram", 0);
 if (!VAR_11->iram_pool) {
  FUNC_3(VAR_9, "Could not get IRAM pool\n");
  return -VAR_2;
 }

 VAR_11->iram = FUNC_11(VAR_11->iram_pool,
           FUNC_13(VAR_11->iram_pool),
           &VAR_11->iram_lists_addr);
 if (!VAR_11->iram) {
  FUNC_3(VAR_9, "Could not reserve IRAM\n");
  return -VAR_1;
 }

 FUNC_0(&VAR_11->map_list);
 FUNC_17(&VAR_11->map_lock);
 FUNC_17(&VAR_11->lock);
 FUNC_14(&VAR_11->decode_completion);

 VAR_11->miscdev.minor = VAR_5;
 VAR_11->miscdev.name = "tegra_vde";
 VAR_11->miscdev.fops = &VAR_6;
 VAR_11->miscdev.parent = VAR_9;

 VAR_13 = FUNC_27(VAR_11);
 if (VAR_13) {
  FUNC_3(VAR_9, "Failed to initialize IOMMU: %d\n", VAR_13);
  goto err_gen_free;
 }

 VAR_13 = FUNC_16(&VAR_11->miscdev);
 if (VAR_13) {
  FUNC_3(VAR_9, "Failed to register misc device: %d\n", VAR_13);
  goto err_deinit_iommu;
 }

 FUNC_22(VAR_9);
 FUNC_25(VAR_9);
 FUNC_24(VAR_9, 300);

 if (!FUNC_23(VAR_9)) {
  VAR_13 = FUNC_28(VAR_9);
  if (VAR_13)
   goto err_misc_unreg;
 }

 return 0;

err_misc_unreg:
 FUNC_15(&VAR_11->miscdev);

err_deinit_iommu:
 FUNC_26(VAR_11);

err_gen_free:
 FUNC_12(VAR_11->iram_pool, (unsigned long)VAR_11->iram,
        FUNC_13(VAR_11->iram_pool));

 return VAR_13;
}
