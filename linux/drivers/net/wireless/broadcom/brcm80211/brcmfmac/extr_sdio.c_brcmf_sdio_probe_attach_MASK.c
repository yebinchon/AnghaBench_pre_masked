
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct brcmf_sdio_dev {int func1; TYPE_5__* settings; TYPE_1__* bus_if; int dev; void* cc_core; } ;
struct brcmf_sdio {scalar_t__ head_align; scalar_t__ sgentry_align; int* rxhdr; int intr; int poll; int pollrate; int * hdrbuf; int txq; TYPE_4__* ci; void* sdio_core; struct brcmf_sdio_dev* sdiodev; } ;
struct TYPE_16__ {int base; } ;
struct TYPE_12__ {scalar_t__ sd_head_align; scalar_t__ sd_sgentry_align; int drive_strength; scalar_t__ oob_irq_supported; } ;
struct TYPE_13__ {TYPE_2__ sdio; } ;
struct TYPE_15__ {TYPE_3__ bus; } ;
struct TYPE_14__ {int chiprev; int chip; } ;
struct TYPE_11__ {int wowl_supported; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_4__* FUNC_2 (struct brcmf_sdio_dev*,int *) ;
 void* FUNC_3 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*,...) ;
 TYPE_5__* FUNC_6 (int ,int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_7 (struct brcmf_sdio_dev*,TYPE_4__*,int) ;
 scalar_t__ FUNC_8 (struct brcmf_sdio*) ;
 int FUNC_9 (struct brcmf_sdio_dev*,int ,int*) ;
 int FUNC_10 (struct brcmf_sdio_dev*,int ,int,int*) ;
 int FUNC_11 (struct brcmf_sdio_dev*,int ,int*) ;
 int FUNC_12 (struct brcmf_sdio_dev*,int,int*) ;
 int FUNC_13 (struct brcmf_sdio_dev*) ;
 int FUNC_14 (struct brcmf_sdio_dev*,int ,int,int*) ;
 int FUNC_15 (struct brcmf_sdio_dev*,int,int,int*) ;
 int FUNC_16 (int *,scalar_t__,int ) ;
 int * FUNC_17 (scalar_t__,int ) ;
 int VAR_20 ;
 int FUNC_18 (char*,int) ;
 scalar_t__ FUNC_19 (unsigned long,scalar_t__) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static bool
FUNC_23(struct brcmf_sdio *VAR_21)
{
 struct brcmf_sdio_dev *VAR_22;
 u8 VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25;
 u32 VAR_26;
 u32 VAR_27;

 VAR_22 = VAR_21->sdiodev;
 FUNC_20(VAR_22->func1);

 FUNC_18("F1 signature read @0x18000000=0x%4x\n",
   FUNC_12(VAR_22, VAR_17, ((void*)0)));






 FUNC_14(VAR_22, VAR_14, VAR_6,
      &VAR_24);
 if (!VAR_24)
  VAR_23 = FUNC_11(VAR_22, VAR_14,
        &VAR_24);

 if (VAR_24 || ((VAR_23 & ~VAR_13) != VAR_6)) {
  FUNC_5("ChipClkCSR access: err %d wrote 0x%02x read 0x%02x\n",
     VAR_24, VAR_6, VAR_23);
  goto fail;
 }

 VAR_21->ci = FUNC_2(VAR_22, &VAR_19);
 if (FUNC_1(VAR_21->ci)) {
  FUNC_5("brcmf_chip_attach failed!\n");
  VAR_21->ci = ((void*)0);
  goto fail;
 }


 VAR_21->sdio_core = FUNC_3(VAR_21->ci, VAR_4);
 if (!VAR_21->sdio_core)
  goto fail;


 VAR_22->cc_core = FUNC_3(VAR_21->ci, VAR_3);
 if (!VAR_22->cc_core)
  goto fail;

 VAR_22->settings = FUNC_6(VAR_22->dev,
         VAR_5,
         VAR_21->ci->chip,
         VAR_21->ci->chiprev);
 if (!VAR_22->settings) {
  FUNC_5("Failed to get device parameters\n");
  goto fail;
 }



 VAR_21->head_align = VAR_0;
 VAR_21->sgentry_align = VAR_0;
 if (VAR_22->settings->bus.sdio.sd_head_align > VAR_0)
  VAR_21->head_align = VAR_22->settings->bus.sdio.sd_head_align;
 if (VAR_22->settings->bus.sdio.sd_sgentry_align > VAR_0)
  VAR_21->sgentry_align =
    VAR_22->settings->bus.sdio.sd_sgentry_align;




 FUNC_13(VAR_22);
 if (FUNC_8(VAR_21)) {
  FUNC_5("error enabling KSO\n");
  goto fail;
 }

 if (VAR_22->settings->bus.sdio.drive_strength)
  VAR_27 = VAR_22->settings->bus.sdio.drive_strength;
 else
  VAR_27 = VAR_7;
 FUNC_7(VAR_22, VAR_21->ci, VAR_27);


 VAR_26 = FUNC_9(VAR_22, VAR_15, &VAR_24);
 if (VAR_24)
  goto fail;

 VAR_26 |= VAR_16;

 FUNC_10(VAR_22, VAR_15, VAR_26, &VAR_24);
 if (VAR_24)
  goto fail;


 VAR_25 = FUNC_0(FUNC_4(VAR_21->ci)->base, VAR_20);
 VAR_26 = FUNC_12(VAR_22, VAR_25, &VAR_24);
 if (VAR_24)
  goto fail;

 VAR_26 |= (VAR_1 << VAR_2);

 FUNC_15(VAR_22, VAR_25, VAR_26, &VAR_24);
 if (VAR_24)
  goto fail;

 FUNC_22(VAR_22->func1);

 FUNC_16(&VAR_21->txq, (VAR_12 + 1), VAR_18);


 VAR_21->hdrbuf = FUNC_17(VAR_9 + VAR_21->head_align, VAR_8);
 if (!VAR_21->hdrbuf)
  return 0;

 VAR_21->rxhdr = (u8 *) FUNC_19((unsigned long)&VAR_21->hdrbuf[0],
        VAR_21->head_align);


 VAR_21->intr = 1;
 VAR_21->poll = 0;
 if (VAR_21->poll)
  VAR_21->pollrate = 1;

 return 1;

fail:
 FUNC_22(VAR_22->func1);
 return 0;
}
