
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u16 ;
struct brcmf_sdio_dev {int func2; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ f1regdata; int rxrtx; } ;
struct brcmf_sdio {int rxskip; TYPE_2__ cur_read; TYPE_1__ sdcnt; struct brcmf_sdio_dev* sdiodev; struct brcmf_core* sdio_core; } ;
struct brcmf_core {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_4 (struct brcmf_sdio_dev*,int ,int*) ;
 int FUNC_5 (struct brcmf_sdio_dev*,int ,int ,int*) ;
 int FUNC_6 (struct brcmf_sdio_dev*,scalar_t__,int ,int*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(struct brcmf_sdio *VAR_7, bool VAR_8, bool VAR_9)
{
 struct brcmf_sdio_dev *VAR_10 = VAR_7->sdiodev;
 struct brcmf_core *VAR_11 = VAR_7->sdio_core;
 uint VAR_12 = 0;
 u16 VAR_13;
 u8 VAR_14, VAR_15;
 int VAR_16;

 FUNC_2("%sterminate frame%s\n",
    VAR_8 ? "abort command, " : "",
    VAR_9 ? ", send NAK" : "");

 if (VAR_8)
  FUNC_3(VAR_7->sdiodev, VAR_7->sdiodev->func2);

 FUNC_5(VAR_7->sdiodev, VAR_0, VAR_4,
      &VAR_16);
 VAR_7->sdcnt.f1regdata++;


 for (VAR_13 = VAR_12 = 0xffff; VAR_12 > 0; VAR_12--) {
  VAR_14 = FUNC_4(VAR_7->sdiodev, VAR_1,
           &VAR_16);
  VAR_15 = FUNC_4(VAR_7->sdiodev, VAR_2,
           &VAR_16);
  VAR_7->sdcnt.f1regdata += 2;

  if ((VAR_14 == 0) && (VAR_15 == 0))
   break;

  if ((VAR_14 > (VAR_13 >> 8)) && (VAR_15 > (VAR_13 & 0x00ff))) {
   FUNC_2("count growing: last 0x%04x now 0x%04x\n",
      VAR_13, (VAR_14 << 8) + VAR_15);
  }
  VAR_13 = (VAR_14 << 8) + VAR_15;
 }

 if (!VAR_12)
  FUNC_2("count never zeroed: last 0x%04x\n", VAR_13);
 else
  FUNC_1(VAR_3, "flush took %d iterations\n", 0xffff - VAR_12);

 if (VAR_9) {
  VAR_7->sdcnt.rxrtx++;
  FUNC_6(VAR_10, VAR_11->base + FUNC_0(VAR_6),
       VAR_5, &VAR_16);

  VAR_7->sdcnt.f1regdata++;
  if (VAR_16 == 0)
   VAR_7->rxskip = 1;
 }


 VAR_7->cur_read.len = 0;
}
