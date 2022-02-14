
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct brcmfmac_sdio_pd {int oob_irq_flags; int oob_irq_nr; scalar_t__ oob_irq_supported; } ;
struct brcmf_sdio_dev {int irq_en; int oob_irq_requested; int irq_wake; int sd_irq_requested; TYPE_4__* func1; TYPE_4__* func2; TYPE_3__* bus_if; int irq_en_lock; TYPE_2__* settings; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {scalar_t__ chip; } ;
struct TYPE_7__ {struct brcmfmac_sdio_pd sdio; } ;
struct TYPE_8__ {TYPE_1__ bus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int) ;
 int VAR_15 ;
 int FUNC_3 (struct brcmf_sdio_dev*,int ,int*) ;
 int FUNC_4 (struct brcmf_sdio_dev*,int ,int,int*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct brcmf_sdio_dev*,int,int*) ;
 int FUNC_6 (struct brcmf_sdio_dev*,int ,int,int*) ;
 int FUNC_7 (struct brcmf_sdio_dev*,int,int,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,char*,int *) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct brcmf_sdio_dev *VAR_18)
{
 struct brcmfmac_sdio_pd *VAR_19;
 int VAR_20 = 0;
 u8 VAR_21;
 u32 VAR_22, VAR_23;

 VAR_19 = &VAR_18->settings->bus.sdio;
 if (VAR_19->oob_irq_supported) {
  FUNC_1(VAR_5, "Enter, register OOB IRQ %d\n",
     VAR_19->oob_irq_nr);
  FUNC_13(&VAR_18->irq_en_lock);
  VAR_18->irq_en = 1;

  VAR_20 = FUNC_9(VAR_19->oob_irq_nr, VAR_17,
      VAR_19->oob_irq_flags, "brcmf_oob_intr",
      &VAR_18->func1->dev);
  if (VAR_20 != 0) {
   FUNC_2("request_irq failed %d\n", VAR_20);
   return VAR_20;
  }
  VAR_18->oob_irq_requested = 1;

  VAR_20 = FUNC_8(VAR_19->oob_irq_nr);
  if (VAR_20 != 0) {
   FUNC_2("enable_irq_wake failed %d\n", VAR_20);
   return VAR_20;
  }
  VAR_18->irq_wake = 1;

  FUNC_10(VAR_18->func1);

  if (VAR_18->bus_if->chip == VAR_0) {

   VAR_22 = FUNC_0(VAR_14, VAR_23);
   VAR_23 = FUNC_5(VAR_18, VAR_22, &VAR_20);
   VAR_23 |= 0x2;
   FUNC_7(VAR_18, VAR_22, VAR_23, &VAR_20);

   FUNC_6(VAR_18, VAR_4,
        0xf, &VAR_20);
   FUNC_6(VAR_18, VAR_3, 0, &VAR_20);
   FUNC_6(VAR_18, VAR_2, 0x2, &VAR_20);
  }


  VAR_21 = FUNC_3(VAR_18, VAR_13, &VAR_20);
  VAR_21 |= VAR_11 | VAR_12 |
   VAR_10;
  FUNC_4(VAR_18, VAR_13, VAR_21, &VAR_20);


  VAR_21 = VAR_8 | VAR_9;
  if (VAR_19->oob_irq_flags & VAR_1)
   VAR_21 |= VAR_7;
  FUNC_4(VAR_18, VAR_6,
         VAR_21, &VAR_20);
  FUNC_12(VAR_18->func1);
 } else {
  FUNC_1(VAR_5, "Entering\n");
  FUNC_10(VAR_18->func1);
  FUNC_11(VAR_18->func1, VAR_16);
  FUNC_11(VAR_18->func2, VAR_15);
  FUNC_12(VAR_18->func1);
  VAR_18->sd_irq_requested = 1;
 }

 return 0;
}
