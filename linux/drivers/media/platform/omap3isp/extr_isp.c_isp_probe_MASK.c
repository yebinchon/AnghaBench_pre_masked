
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_7__ dev; } ;
struct TYPE_16__ {int * ops; } ;
struct TYPE_15__ {void* vdd; } ;
struct TYPE_14__ {void* vdd; } ;
struct isp_device {int revision; int irq_num; int isp_mutex; TYPE_3__ notifier; int v4l2_dev; TYPE_7__* dev; scalar_t__ mmio_hist_base_phys; scalar_t__* mmio_base; int * clock; TYPE_2__ isp_csiphy2; TYPE_1__ isp_csiphy1; scalar_t__ ref_count; int stat_lock; int autoidle; int syscon_offset; scalar_t__ syscon; int phy_type; } ;
struct TYPE_17__ {int isp_rev; scalar_t__* offset; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (struct isp_device*,int) ;
 int FUNC_5 (struct isp_device*,int) ;
 int VAR_13 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_7__*,char*,...) ;
 int FUNC_9 (TYPE_7__*,char*,int,int) ;
 scalar_t__ FUNC_10 (TYPE_7__*,struct resource*) ;
 void* FUNC_11 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_12 (TYPE_7__*,int,int ,int ,char*,struct isp_device*) ;
 int FUNC_13 (TYPE_7__*,int ) ;
 int FUNC_14 (int ,char*,int *) ;
 int FUNC_15 (struct isp_device*) ;
 int FUNC_16 (struct isp_device*) ;
 int FUNC_17 (struct isp_device*,int) ;
 int FUNC_18 (struct isp_device*) ;
 int FUNC_19 (struct isp_device*) ;
 int FUNC_20 (struct isp_device*) ;
 int FUNC_21 (struct isp_device*) ;
 int VAR_14 ;
 int FUNC_22 (struct isp_device*) ;
 int FUNC_23 (struct isp_device*,int ,int ) ;
 int FUNC_24 (struct isp_device*) ;
 TYPE_6__* VAR_15 ;
 int FUNC_25 (struct isp_device*) ;
 int VAR_16 ;
 int FUNC_26 (struct isp_device*) ;
 int FUNC_27 (struct isp_device*) ;
 int FUNC_28 (struct isp_device*) ;
 int FUNC_29 (struct isp_device*) ;
 struct isp_device* FUNC_30 (int,int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ,char*,int,int *) ;
 int FUNC_35 (struct isp_device*) ;
 int FUNC_36 (struct platform_device*,int ) ;
 struct resource* FUNC_37 (struct platform_device*,int ,int) ;
 int FUNC_38 (struct platform_device*,struct isp_device*) ;
 int FUNC_39 (int *) ;
 scalar_t__ FUNC_40 (int ,char*) ;
 int FUNC_41 (TYPE_3__*) ;
 int FUNC_42 (TYPE_3__*) ;
 int FUNC_43 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_44(struct platform_device *VAR_17)
{
 struct isp_device *VAR_18;
 struct resource *VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;

 VAR_18 = FUNC_30(sizeof(*VAR_18), VAR_3);
 if (!VAR_18) {
  FUNC_8(&VAR_17->dev, "could not allocate memory\n");
  return -VAR_2;
 }

 VAR_20 = FUNC_14(FUNC_33(VAR_17->dev.of_node),
           "ti,phy-type", &VAR_18->phy_type);
 if (VAR_20)
  goto error_release_isp;

 VAR_18->syscon = FUNC_40(VAR_17->dev.of_node,
            "syscon");
 if (FUNC_2(VAR_18->syscon)) {
  VAR_20 = FUNC_3(VAR_18->syscon);
  goto error_release_isp;
 }

 VAR_20 = FUNC_34(VAR_17->dev.of_node,
      "syscon", 1, &VAR_18->syscon_offset);
 if (VAR_20)
  goto error_release_isp;

 VAR_18->autoidle = VAR_13;

 FUNC_32(&VAR_18->isp_mutex);
 FUNC_39(&VAR_18->stat_lock);
 FUNC_42(&VAR_18->notifier);
 VAR_18->dev = &VAR_17->dev;

 VAR_20 = FUNC_22(VAR_18);
 if (VAR_20 < 0)
  goto error;

 VAR_18->ref_count = 0;

 VAR_20 = FUNC_13(VAR_18->dev, FUNC_1(32));
 if (VAR_20)
  goto error;

 FUNC_38(VAR_17, VAR_18);


 VAR_18->isp_csiphy1.vdd = FUNC_11(&VAR_17->dev, "vdd-csiphy1");
 VAR_18->isp_csiphy2.vdd = FUNC_11(&VAR_17->dev, "vdd-csiphy2");
 for (VAR_21 = 0; VAR_21 < 2; VAR_21++) {
  unsigned int VAR_23 = VAR_21 ? VAR_8 : 0;

  VAR_19 = FUNC_37(VAR_17, VAR_4, VAR_21);
  VAR_18->mmio_base[VAR_23] =
   FUNC_10(VAR_18->dev, VAR_19);
  if (FUNC_2(VAR_18->mmio_base[VAR_23]))
   return FUNC_3(VAR_18->mmio_base[VAR_23]);
 }

 VAR_20 = FUNC_20(VAR_18);
 if (VAR_20 < 0)
  goto error;

 VAR_20 = FUNC_7(VAR_18->clock[VAR_6]);
 if (VAR_20 < 0)
  goto error;

 VAR_18->revision = FUNC_23(VAR_18, VAR_12, VAR_7);
 FUNC_9(VAR_18->dev, "Revision %d.%d found\n",
   (VAR_18->revision & 0xf0) >> 4, VAR_18->revision & 0x0f);

 FUNC_6(VAR_18->clock[VAR_6]);

 if (FUNC_4(VAR_18, 0) == ((void*)0)) {
  VAR_20 = -VAR_1;
  goto error;
 }

 VAR_20 = FUNC_25(VAR_18);
 if (VAR_20 < 0)
  goto error_isp;

 VAR_20 = FUNC_28(VAR_18);
 if (VAR_20 < 0)
  goto error_isp;


 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_15); VAR_22++)
  if (VAR_18->revision == VAR_15[VAR_22].isp_rev)
   break;

 if (VAR_22 == FUNC_0(VAR_15)) {
  FUNC_8(VAR_18->dev, "No resource map found for ISP rev %d.%d\n",
   (VAR_18->revision & 0xf0) >> 4, VAR_18->revision & 0xf);
  VAR_20 = -VAR_1;
  goto error_isp;
 }

 for (VAR_21 = 1; VAR_21 < VAR_8; VAR_21++)
  VAR_18->mmio_base[VAR_21] =
   VAR_18->mmio_base[0] + VAR_15[VAR_22].offset[VAR_21];

 for (VAR_21 = VAR_9; VAR_21 < VAR_11; VAR_21++)
  VAR_18->mmio_base[VAR_21] =
   VAR_18->mmio_base[VAR_8]
   + VAR_15[VAR_22].offset[VAR_21];

 VAR_18->mmio_hist_base_phys =
  VAR_19->start + VAR_15[VAR_22].offset[VAR_10];


 VAR_20 = FUNC_15(VAR_18);
 if (VAR_20 < 0) {
  FUNC_8(&VAR_17->dev, "unable to attach to IOMMU\n");
  goto error_isp;
 }


 VAR_20 = FUNC_36(VAR_17, 0);
 if (VAR_20 <= 0) {
  VAR_20 = -VAR_1;
  goto error_iommu;
 }
 VAR_18->irq_num = VAR_20;

 if (FUNC_12(VAR_18->dev, VAR_18->irq_num, VAR_14, VAR_5,
        "OMAP3 ISP", VAR_18)) {
  FUNC_8(VAR_18->dev, "Unable to request IRQ\n");
  VAR_20 = -VAR_0;
  goto error_iommu;
 }


 VAR_20 = FUNC_21(VAR_18);
 if (VAR_20 < 0)
  goto error_iommu;

 VAR_20 = FUNC_24(VAR_18);
 if (VAR_20 < 0)
  goto error_modules;

 VAR_20 = FUNC_18(VAR_18);
 if (VAR_20 < 0)
  goto error_register_entities;

 VAR_18->notifier.ops = &VAR_16;

 VAR_20 = FUNC_43(&VAR_18->v4l2_dev, &VAR_18->notifier);
 if (VAR_20)
  goto error_register_entities;

 FUNC_17(VAR_18, 1);
 FUNC_35(VAR_18);

 return 0;

error_register_entities:
 FUNC_26(VAR_18);
error_modules:
 FUNC_16(VAR_18);
error_iommu:
 FUNC_19(VAR_18);
error_isp:
 FUNC_27(VAR_18);
 FUNC_5(VAR_18, 0);
error:
 FUNC_41(&VAR_18->notifier);
 FUNC_31(&VAR_18->isp_mutex);
error_release_isp:
 FUNC_29(VAR_18);

 return VAR_20;
}
