
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;
struct brcmf_sdio_dev {TYPE_7__* func2; TYPE_6__* func1; int dev; int settings; TYPE_5__* bus_if; struct brcmf_sdio* bus; } ;
struct TYPE_16__ {scalar_t__ tickcnt; } ;
struct brcmf_sdio {int alp_only; scalar_t__ clkstate; int hostintmask; TYPE_10__* ci; int sdiodev; TYPE_4__ sdcnt; struct brcmf_core* sdio_core; } ;
struct brcmf_fw_request {TYPE_3__* items; } ;
struct brcmf_core {scalar_t__ base; } ;
struct TYPE_13__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;
struct TYPE_19__ {struct device dev; } ;
struct TYPE_18__ {int device; } ;
struct TYPE_17__ {int chiprev; int chip; int * ops; int dev; } ;
struct TYPE_14__ {int len; void* data; } ;
struct TYPE_15__ {TYPE_2__ nv_data; struct firmware* binary; } ;
struct TYPE_12__ {int chiprev; int chip; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;


 int VAR_18 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int VAR_21 ;
 int FUNC_8 (struct brcmf_sdio*) ;
 int FUNC_9 (struct brcmf_sdio*,scalar_t__,int) ;
 int FUNC_10 (struct brcmf_sdio*,struct firmware const*,void*,int ) ;
 int FUNC_11 (struct brcmf_sdio*) ;
 int FUNC_12 (struct brcmf_sdio*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct brcmf_sdio_dev*) ;
 int FUNC_15 (struct brcmf_sdio_dev*,int ,int*) ;
 int FUNC_16 (struct brcmf_sdio_dev*,int ,int,int*) ;
 int FUNC_17 (struct brcmf_sdio_dev*,scalar_t__,int,int *) ;
 struct brcmf_bus* FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int VAR_22 ;
 int FUNC_21 (struct brcmf_fw_request*) ;
 int FUNC_22 (TYPE_6__*) ;
 int FUNC_23 (TYPE_7__*) ;
 int FUNC_24 (TYPE_7__*) ;
 int FUNC_25 (TYPE_6__*) ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_26(struct device *VAR_24, int VAR_25,
      struct brcmf_fw_request *VAR_26)
{
 struct brcmf_bus *VAR_27 = FUNC_18(VAR_24);
 struct brcmf_sdio_dev *VAR_28 = VAR_27->bus_priv.sdio;
 struct brcmf_sdio *VAR_29 = VAR_28->bus;
 struct brcmf_core *VAR_30 = VAR_29->sdio_core;
 const struct firmware *VAR_31;
 void *VAR_32;
 u32 VAR_33;
 u8 VAR_34, VAR_35;
 u8 VAR_36;

 FUNC_5(VAR_20, "Enter: dev=%s, err=%d\n", FUNC_19(VAR_24), VAR_25);

 if (VAR_25)
  goto fail;

 VAR_31 = VAR_26->items[VAR_1].binary;
 VAR_32 = VAR_26->items[VAR_2].nv_data.data;
 VAR_33 = VAR_26->items[VAR_2].nv_data.len;
 FUNC_21(VAR_26);


 VAR_29->alp_only = 1;
 VAR_25 = FUNC_10(VAR_29, VAR_31, VAR_32, VAR_33);
 if (VAR_25)
  goto fail;
 VAR_29->alp_only = 0;


 VAR_29->sdcnt.tickcnt = 0;
 FUNC_12(VAR_29, 1);

 FUNC_22(VAR_28->func1);


 FUNC_9(VAR_29, VAR_3, 0);
 if (VAR_29->clkstate != VAR_3)
  goto release;


 VAR_34 = FUNC_15(VAR_28, VAR_13, &VAR_25);
 if (!VAR_25) {
  VAR_35 = VAR_34;
  VAR_35 |= FUNC_3(VAR_29->ci) ?
   VAR_15 : VAR_12;
  FUNC_16(VAR_28, VAR_13,
       VAR_35, &VAR_25);
 }
 if (VAR_25) {
  FUNC_6("Failed to force clock for F2: err %d\n", VAR_25);
  goto release;
 }


 FUNC_17(VAR_28, VAR_30->base + FUNC_0(VAR_23),
      VAR_18 << VAR_19, ((void*)0));

 VAR_25 = FUNC_24(VAR_28->func2);

 FUNC_5(VAR_9, "enable F2: err=%d\n", VAR_25);


 if (!VAR_25) {

  VAR_29->hostintmask = VAR_8;
  FUNC_17(VAR_28, VAR_30->base + FUNC_0(VAR_22),
       VAR_29->hostintmask, ((void*)0));

  switch (VAR_28->func1->device) {
  case 128:
   FUNC_5(VAR_9, "set F2 watermark to 0x%x*4 bytes\n",
      VAR_6);
   FUNC_16(VAR_28, VAR_17,
        VAR_6, &VAR_25);
   VAR_36 = FUNC_15(VAR_28, VAR_11,
         &VAR_25);
   VAR_36 |= VAR_10;
   FUNC_16(VAR_28, VAR_11, VAR_36,
        &VAR_25);
   FUNC_16(VAR_28, VAR_14,
        VAR_6 |
        VAR_16, &VAR_25);
   break;
  case 129:
   FUNC_5(VAR_9, "set F2 watermark to 0x%x*4 bytes\n",
      VAR_5);
   FUNC_16(VAR_28, VAR_17,
        VAR_5, &VAR_25);
   VAR_36 = FUNC_15(VAR_28, VAR_11,
         &VAR_25);
   VAR_36 |= VAR_10;
   FUNC_16(VAR_28, VAR_11, VAR_36,
        &VAR_25);
   break;
  default:
   FUNC_16(VAR_28, VAR_17,
        VAR_7, &VAR_25);
   break;
  }
 } else {

  FUNC_23(VAR_28->func2);
  goto checkdied;
 }

 if (FUNC_4(VAR_29->ci)) {
  FUNC_11(VAR_29);
 } else {

  FUNC_16(VAR_28, VAR_13,
       VAR_34, &VAR_25);
 }

 if (VAR_25 == 0) {

  FUNC_13(VAR_29->sdiodev, VAR_0);

  VAR_25 = FUNC_14(VAR_28);
  if (VAR_25 != 0)
   FUNC_6("intr register failed:%d\n", VAR_25);
 }


 if (VAR_25 != 0) {
  FUNC_9(VAR_29, VAR_4, 0);
  goto checkdied;
 }

 FUNC_25(VAR_28->func1);


 VAR_28->bus_if->dev = VAR_28->dev;
 VAR_28->bus_if->ops = &VAR_21;
 VAR_28->bus_if->chip = VAR_29->ci->chip;
 VAR_28->bus_if->chiprev = VAR_29->ci->chiprev;

 VAR_25 = FUNC_1(VAR_28->dev, VAR_28->settings);
 if (VAR_25) {
  FUNC_6("brcmf_alloc failed\n");
  goto claim;
 }


 VAR_25 = FUNC_2(VAR_28->dev);
 if (VAR_25 != 0) {
  FUNC_6("brcmf_attach failed\n");
  goto free;
 }


 return;

free:
 FUNC_7(VAR_28->dev);
claim:
 FUNC_22(VAR_28->func1);
checkdied:
 FUNC_8(VAR_29);
release:
 FUNC_25(VAR_28->func1);
fail:
 FUNC_5(VAR_20, "failed: dev=%s, err=%d\n", FUNC_19(VAR_24), VAR_25);
 FUNC_20(&VAR_28->func2->dev);
 FUNC_20(VAR_24);
}
