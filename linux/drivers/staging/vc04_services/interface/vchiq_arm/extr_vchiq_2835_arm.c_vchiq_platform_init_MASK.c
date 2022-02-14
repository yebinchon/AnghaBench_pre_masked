
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vchiq_state {int dummy; } ;
struct vchiq_slot_zero {int* platform_data; } ;
struct vchiq_drvdata {int cache_line_size; struct rpi_firmware* fw; } ;
struct rpi_firmware {int dummy; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
typedef scalar_t__ dma_addr_t ;
typedef int channelbase ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,struct resource*) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,struct vchiq_state*) ;
 int FUNC_8 (struct device*,int ) ;
 void* FUNC_9 (struct device*,int,scalar_t__*,int ) ;
 int VAR_14 ;
 struct device* VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct vchiq_drvdata* FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct rpi_firmware*,int ,scalar_t__*,int) ;
 int FUNC_14 (int *,int) ;
 int VAR_21 ;
 int FUNC_15 () ;
 int VAR_22 ;
 struct vchiq_slot_zero* FUNC_16 (void*,int) ;
 scalar_t__ FUNC_17 (struct vchiq_state*,struct vchiq_slot_zero*) ;
 int FUNC_18 (int ,char*,struct vchiq_slot_zero*,scalar_t__*) ;

int FUNC_19(struct platform_device *VAR_23, struct vchiq_state *VAR_24)
{
 struct device *VAR_25 = &VAR_23->dev;
 struct vchiq_drvdata *VAR_26 = FUNC_10(VAR_23);
 struct rpi_firmware *VAR_27 = VAR_26->fw;
 struct vchiq_slot_zero *VAR_28;
 struct resource *VAR_29;
 void *VAR_30;
 dma_addr_t VAR_31;
 u32 VAR_32;
 int VAR_33, VAR_34;
 int VAR_35, VAR_36, VAR_37;





 VAR_35 = FUNC_8(VAR_25, FUNC_0(32));

 if (VAR_35 < 0)
  return VAR_35;

 VAR_14 = VAR_26->cache_line_size;
 VAR_17 = 2 * VAR_14;


 VAR_33 = FUNC_2(VAR_9 * VAR_12);
 VAR_34 = FUNC_2(VAR_17 * VAR_6);

 VAR_30 = FUNC_9(VAR_25, VAR_33 + VAR_34,
           &VAR_31, VAR_3);
 if (!VAR_30) {
  FUNC_5(VAR_25, "could not allocate DMA memory\n");
  return -VAR_1;
 }

 FUNC_4(((unsigned long)VAR_30 & (VAR_7 - 1)) != 0);

 VAR_28 = FUNC_16(VAR_30, VAR_33);
 if (!VAR_28)
  return -VAR_0;

 VAR_28->platform_data[VAR_11] =
  (int)VAR_31 + VAR_33;
 VAR_28->platform_data[VAR_10] =
  VAR_6;

 VAR_16 = (char *)VAR_30 + VAR_33;

 VAR_18 = VAR_16;
 for (VAR_37 = 0; VAR_37 < (VAR_6 - 1); VAR_37++) {
  *(char **)&VAR_16[VAR_37*VAR_17] =
   &VAR_16[(VAR_37 + 1)*VAR_17];
 }
 *(char **)&VAR_16[VAR_37 * VAR_17] = ((void*)0);
 FUNC_14(&VAR_19, VAR_6);

 if (FUNC_17(VAR_24, VAR_28) != VAR_13)
  return -VAR_0;

 VAR_29 = FUNC_12(VAR_23, VAR_4, 0);
 VAR_20 = FUNC_6(&VAR_23->dev, VAR_29);
 if (FUNC_1(VAR_20))
  return FUNC_3(VAR_20);

 VAR_36 = FUNC_11(VAR_23, 0);
 if (VAR_36 <= 0)
  return VAR_36;

 VAR_35 = FUNC_7(VAR_25, VAR_36, VAR_22, VAR_5,
          "VCHIQ doorbell", VAR_24);
 if (VAR_35) {
  FUNC_5(VAR_25, "failed to register irq=%d\n", VAR_36);
  return VAR_35;
 }


 VAR_32 = VAR_31;
 VAR_35 = FUNC_13(VAR_27, VAR_8,
        &VAR_32, sizeof(VAR_32));
 if (VAR_35 || VAR_32) {
  FUNC_5(VAR_25, "failed to set channelbase\n");
  return VAR_35 ? : -VAR_2;
 }

 VAR_15 = VAR_25;
 FUNC_18(VAR_21,
  "vchiq_init - done (slots %pK, phys %pad)",
  VAR_28, &VAR_31);

 FUNC_15();

 return 0;
}
