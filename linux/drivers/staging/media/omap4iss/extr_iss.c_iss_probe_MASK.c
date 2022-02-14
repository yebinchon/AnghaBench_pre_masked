
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* coherent_dma_mask; void** dma_mask; struct iss_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct iss_platform_data {int dummy; } ;
struct iss_device {int irq_num; int iss_mutex; int crashed; int media_dev; TYPE_1__* dev; int revision; int syscon; void* raw_dmamask; struct iss_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 struct iss_device* FUNC_5 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int ,int ,char*,struct iss_device*) ;
 int FUNC_7 (struct iss_device*) ;
 int FUNC_8 (struct iss_device*) ;
 int FUNC_9 (struct iss_device*) ;
 int FUNC_10 (struct iss_device*) ;
 int FUNC_11 (struct iss_device*) ;
 int VAR_15 ;
 int FUNC_12 (struct platform_device*,struct iss_device*,unsigned int) ;
 int FUNC_13 (struct iss_device*,unsigned int,int ) ;
 int FUNC_14 (struct iss_device*,int ,int ,int ,int) ;
 int FUNC_15 (struct iss_device*) ;
 int FUNC_16 (struct iss_device*) ;
 int FUNC_17 (struct iss_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct iss_device*) ;
 int FUNC_23 (struct iss_device*) ;
 int FUNC_24 (struct iss_device*,int ) ;
 int FUNC_25 (struct platform_device*,int ) ;
 int FUNC_26 (struct platform_device*,struct iss_device*) ;
 int FUNC_27 (char*) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_16)
{
 struct iss_platform_data *VAR_17 = VAR_16->dev.platform_data;
 struct iss_device *VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 if (!VAR_17)
  return -VAR_3;

 VAR_18 = FUNC_5(&VAR_16->dev, sizeof(*VAR_18), VAR_6);
 if (!VAR_18)
  return -VAR_5;

 FUNC_21(&VAR_18->iss_mutex);

 VAR_18->dev = &VAR_16->dev;
 VAR_18->pdata = VAR_17;

 VAR_18->raw_dmamask = FUNC_0(32);
 VAR_18->dev->dma_mask = &VAR_18->raw_dmamask;
 VAR_18->dev->coherent_dma_mask = FUNC_0(32);

 FUNC_26(VAR_16, VAR_18);





 VAR_18->syscon = FUNC_27("syscon");
 if (FUNC_1(VAR_18->syscon)) {
  VAR_20 = FUNC_2(VAR_18->syscon);
  goto error;
 }


 VAR_20 = FUNC_12(VAR_16, VAR_18, VAR_13);
 if (VAR_20 < 0)
  goto error;

 VAR_20 = FUNC_9(VAR_18);
 if (VAR_20 < 0)
  goto error;

 if (!FUNC_22(VAR_18))
  goto error;

 VAR_20 = FUNC_16(VAR_18);
 if (VAR_20 < 0)
  goto error_iss;

 VAR_18->revision = FUNC_13(VAR_18, VAR_13, VAR_9);
 FUNC_4(VAR_18->dev, "Revision %08x found\n", VAR_18->revision);

 for (VAR_19 = 1; VAR_19 < VAR_12; VAR_19++) {
  VAR_20 = FUNC_12(VAR_16, VAR_18, VAR_19);
  if (VAR_20)
   goto error_iss;
 }


 FUNC_14(VAR_18, VAR_10, VAR_0,
         VAR_1,
         18 << VAR_2);


 VAR_20 = FUNC_24(VAR_18, VAR_14);
 if (VAR_20 < 0)
  goto error_iss;

 VAR_20 = FUNC_11(VAR_18);
 if (VAR_20 < 0)
  goto error_iss;

 FUNC_4(VAR_18->dev, "ISP Revision %08x found\n",
   FUNC_13(VAR_18, VAR_11, VAR_8));


 VAR_20 = FUNC_25(VAR_16, 0);
 if (VAR_20 <= 0) {
  VAR_20 = -VAR_4;
  goto error_iss;
 }
 VAR_18->irq_num = VAR_20;

 if (FUNC_6(VAR_18->dev, VAR_18->irq_num, VAR_15, VAR_7,
        "OMAP4 ISS", VAR_18)) {
  FUNC_3(VAR_18->dev, "Unable to request IRQ\n");
  VAR_20 = -VAR_3;
  goto error_iss;
 }


 VAR_20 = FUNC_10(VAR_18);
 if (VAR_20 < 0)
  goto error_iss;

 VAR_20 = FUNC_15(VAR_18);
 if (VAR_20 < 0)
  goto error_modules;

 VAR_20 = FUNC_19(&VAR_18->crashed, &VAR_18->media_dev);
 if (VAR_20)
  goto error_entities;

 VAR_20 = FUNC_8(VAR_18);
 if (VAR_20 < 0)
  goto error_entities;

 FUNC_23(VAR_18);

 return 0;

error_entities:
 FUNC_17(VAR_18);
 FUNC_18(&VAR_18->crashed);
error_modules:
 FUNC_7(VAR_18);
error_iss:
 FUNC_23(VAR_18);
error:
 FUNC_20(&VAR_18->iss_mutex);

 return VAR_20;
}
