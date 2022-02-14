
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct brcmf_sdio_dev {TYPE_1__* func1; } ;
struct TYPE_4__ {int f1regdata; int fc_rcvd; int fc_xon; int fc_xoff; } ;
struct brcmf_sdio {int rx_seq; int rxskip; int sdpcm_ver; int flowcontrol; TYPE_2__ sdcnt; struct brcmf_core* sdio_core; struct brcmf_sdio_dev* sdiodev; } ;
struct brcmf_core {scalar_t__ base; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct brcmf_sdio*) ;
 int FUNC_5 (struct brcmf_sdio_dev*,scalar_t__,int*) ;
 int FUNC_6 (struct brcmf_sdio_dev*,scalar_t__,int ,int*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static u32 FUNC_7(struct brcmf_sdio *VAR_15)
{
 struct brcmf_sdio_dev *VAR_16 = VAR_15->sdiodev;
 struct brcmf_core *VAR_17 = VAR_15->sdio_core;
 u32 VAR_18 = 0;
 u32 VAR_19;
 u8 VAR_20;
 int VAR_21;

 FUNC_1(VAR_10, "Enter\n");


 VAR_19 = FUNC_5(VAR_16,
         VAR_17->base + FUNC_0(VAR_13),
         &VAR_21);

 if (!VAR_21)
  FUNC_6(VAR_16, VAR_17->base + FUNC_0(VAR_14),
       VAR_12, &VAR_21);

 VAR_15->sdcnt.f1regdata += 2;


 if (VAR_19 & VAR_4) {
  FUNC_1(VAR_10, "mailbox indicates firmware halted\n");
  FUNC_3(&VAR_16->func1->dev);
 }


 if (VAR_19 & VAR_6) {
  FUNC_1(VAR_10, "Dongle reports NAK handled, expect rtx of %d\n",
     VAR_15->rx_seq);
  if (!VAR_15->rxskip)
   FUNC_2("unexpected NAKHANDLED!\n");

  VAR_15->rxskip = 0;
  VAR_18 |= VAR_9;
 }




 if (VAR_19 & (VAR_0 | VAR_5)) {
  VAR_15->sdpcm_ver =
      (VAR_19 & VAR_7) >>
      VAR_8;
  if (VAR_15->sdpcm_ver != VAR_11)
   FUNC_2("Version mismatch, dongle reports %d, "
      "expecting %d\n",
      VAR_15->sdpcm_ver, VAR_11);
  else
   FUNC_1(VAR_10, "Dongle ready, protocol version %d\n",
      VAR_15->sdpcm_ver);





  FUNC_4(VAR_15);
 }






 if (VAR_19 & VAR_1) {
  VAR_20 = (VAR_19 & VAR_2) >>
       VAR_3;

  if (VAR_20 & ~VAR_15->flowcontrol)
   VAR_15->sdcnt.fc_xoff++;

  if (VAR_15->flowcontrol & ~VAR_20)
   VAR_15->sdcnt.fc_xon++;

  VAR_15->sdcnt.fc_rcvd++;
  VAR_15->flowcontrol = VAR_20;
 }


 if (VAR_19 & ~(VAR_0 |
    VAR_6 |
    VAR_1 |
    VAR_5 |
    VAR_4 |
    VAR_2 | VAR_7))
  FUNC_2("Unknown mailbox data content: 0x%02x\n",
     VAR_19);

 return VAR_18;
}
