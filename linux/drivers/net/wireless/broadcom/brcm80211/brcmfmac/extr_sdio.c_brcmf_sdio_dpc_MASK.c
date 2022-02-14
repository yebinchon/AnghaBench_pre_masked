
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u8 ;
typedef unsigned long u32 ;
struct brcmf_sdio_dev {scalar_t__ state; int func1; } ;
struct TYPE_4__ {int f1regdata; } ;
struct brcmf_sdio {scalar_t__ clkstate; unsigned long hostintmask; int ctrl_frame_stat; int ctrl_frame_err; int dpc_triggered; int flowcontrol; int txq; int fcstate; int ipend; int intstatus; struct brcmf_sdio_dev* sdiodev; int txminmax; scalar_t__ rxpending; int ctrl_frame_len; int ctrl_frame_buf; int rxbound; scalar_t__ rxskip; TYPE_2__ sdcnt; int sr_enabled; scalar_t__ txbound; TYPE_1__* sdio_core; } ;
struct TYPE_3__ {unsigned long base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_15 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 unsigned long FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct brcmf_sdio*,int,int) ;
 int FUNC_9 (struct brcmf_sdio*) ;
 unsigned long FUNC_10 (struct brcmf_sdio*) ;
 int FUNC_11 (struct brcmf_sdio*) ;
 int FUNC_12 (struct brcmf_sdio*,int ) ;
 int FUNC_13 (struct brcmf_sdio*,scalar_t__) ;
 int FUNC_14 (struct brcmf_sdio*,int ,int ) ;
 int FUNC_15 (struct brcmf_sdio*) ;
 int FUNC_16 (struct brcmf_sdio_dev*,int ,int*) ;
 unsigned long FUNC_17 (struct brcmf_sdio_dev*,unsigned long,int*) ;
 int FUNC_18 (struct brcmf_sdio_dev*,int ,int ,int*) ;
 int FUNC_19 (struct brcmf_sdio_dev*,unsigned long,unsigned long,int*) ;
 scalar_t__ FUNC_20 (int *,int ) ;
 scalar_t__ FUNC_21 (struct brcmf_sdio*) ;
 unsigned long VAR_16 ;
 scalar_t__ FUNC_22 (scalar_t__,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 () ;

__attribute__((used)) static void FUNC_26(struct brcmf_sdio *VAR_17)
{
 struct brcmf_sdio_dev *VAR_18 = VAR_17->sdiodev;
 u32 VAR_19 = 0;
 u32 VAR_20 = VAR_17->sdio_core->base + FUNC_1(VAR_16);
 unsigned long VAR_21;
 uint VAR_22 = VAR_17->txbound;
 uint VAR_23;
 int VAR_24 = 0;

 FUNC_6(VAR_15, "Enter\n");

 FUNC_23(VAR_17->sdiodev->func1);


 if (!VAR_17->sr_enabled && VAR_17->clkstate == VAR_2) {
  u8 VAR_25, VAR_26 = 0;
  VAR_25 = FUNC_16(VAR_17->sdiodev,
        VAR_14, &VAR_24);

  FUNC_6(VAR_15, "DPC: PENDING, devctl 0x%02x clkctl 0x%02x\n",
     VAR_26, VAR_25);

  if (FUNC_0(VAR_25)) {
   VAR_26 = FUNC_16(VAR_17->sdiodev,
         VAR_13, &VAR_24);
   VAR_26 &= ~VAR_12;
   FUNC_18(VAR_17->sdiodev,
        VAR_13, VAR_26, &VAR_24);
   VAR_17->clkstate = VAR_1;
  }
 }


 FUNC_8(VAR_17, 0, 1);


 if (FUNC_3(&VAR_17->ipend) > 0) {
  FUNC_4(&VAR_17->ipend, 0);
  VAR_24 = FUNC_11(VAR_17);
 }


 VAR_21 = FUNC_5(&VAR_17->intstatus, 0);





 if (VAR_21 & VAR_5) {
  VAR_21 &= ~VAR_5;
  FUNC_19(VAR_18, VAR_20, VAR_5, &VAR_24);

  VAR_19 = FUNC_17(VAR_18, VAR_20, &VAR_24);

  VAR_17->sdcnt.f1regdata += 2;
  FUNC_4(&VAR_17->fcstate,
      !!(VAR_19 & (VAR_6 | VAR_5)));
  VAR_21 |= (VAR_19 & VAR_17->hostintmask);
 }


 if (VAR_21 & VAR_8) {
  VAR_21 &= ~VAR_8;
  VAR_21 |= FUNC_10(VAR_17);
 }

 FUNC_24(VAR_17->sdiodev->func1);


 if (VAR_21 & VAR_11) {
  FUNC_7("Dongle reports WR_OOSYNC\n");
  VAR_21 &= ~VAR_11;
 }

 if (VAR_21 & VAR_9) {
  FUNC_7("Dongle reports RD_OOSYNC\n");
  VAR_21 &= ~VAR_9;
 }

 if (VAR_21 & VAR_10) {
  FUNC_7("Dongle reports SBINT\n");
  VAR_21 &= ~VAR_10;
 }


 if (VAR_21 & VAR_4) {
  FUNC_6(VAR_15, "Dongle reports CHIPACTIVE\n");
  VAR_21 &= ~VAR_4;
 }


 if (VAR_17->rxskip)
  VAR_21 &= ~VAR_7;


 if ((VAR_21 & VAR_7) && (VAR_17->clkstate == VAR_1)) {
  FUNC_12(VAR_17, VAR_17->rxbound);
  if (!VAR_17->rxpending)
   VAR_21 &= ~VAR_7;
 }


 if (VAR_21)
  FUNC_2(VAR_21, &VAR_17->intstatus);

 FUNC_9(VAR_17);

 if (VAR_17->ctrl_frame_stat && (VAR_17->clkstate == VAR_1) &&
     FUNC_21(VAR_17)) {
  FUNC_23(VAR_17->sdiodev->func1);
  if (VAR_17->ctrl_frame_stat) {
   VAR_24 = FUNC_14(VAR_17, VAR_17->ctrl_frame_buf,
            VAR_17->ctrl_frame_len);
   VAR_17->ctrl_frame_err = VAR_24;
   FUNC_25();
   VAR_17->ctrl_frame_stat = 0;
  }
  FUNC_24(VAR_17->sdiodev->func1);
  FUNC_15(VAR_17);
 }

 if ((VAR_17->clkstate == VAR_1) && !FUNC_3(&VAR_17->fcstate) &&
     FUNC_20(&VAR_17->txq, ~VAR_17->flowcontrol) && VAR_22 &&
     FUNC_21(VAR_17)) {
  VAR_23 = VAR_17->rxpending ? FUNC_22(VAR_22, VAR_17->txminmax) :
         VAR_22;
  FUNC_13(VAR_17, VAR_23);
 }

 if ((VAR_17->sdiodev->state != VAR_0) || (VAR_24 != 0)) {
  FUNC_7("failed backplane access over SDIO, halting operation\n");
  FUNC_4(&VAR_17->intstatus, 0);
  if (VAR_17->ctrl_frame_stat) {
   FUNC_23(VAR_17->sdiodev->func1);
   if (VAR_17->ctrl_frame_stat) {
    VAR_17->ctrl_frame_err = -VAR_3;
    FUNC_25();
    VAR_17->ctrl_frame_stat = 0;
    FUNC_15(VAR_17);
   }
   FUNC_24(VAR_17->sdiodev->func1);
  }
 } else if (FUNC_3(&VAR_17->intstatus) ||
     FUNC_3(&VAR_17->ipend) > 0 ||
     (!FUNC_3(&VAR_17->fcstate) &&
      FUNC_20(&VAR_17->txq, ~VAR_17->flowcontrol) &&
      FUNC_21(VAR_17))) {
  VAR_17->dpc_triggered = 1;
 }
}
