
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct device {int dummy; } ;
struct brcmf_sdio_dev {scalar_t__ state; struct brcmf_sdio* bus; } ;
struct TYPE_6__ {int tx_ctlpkts; int tx_ctlerrs; } ;
struct brcmf_sdio {unsigned char* ctrl_frame_buf; int ctrl_frame_stat; int ctrl_frame_err; TYPE_3__ sdcnt; TYPE_2__* sdiodev; int ctrl_wait; int ctrl_frame_len; } ;
struct TYPE_4__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;
struct TYPE_5__ {int func1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct brcmf_sdio*) ;
 struct brcmf_bus* FUNC_2 (struct device*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct device *VAR_6, unsigned char *VAR_7, uint VAR_8)
{
 struct brcmf_bus *VAR_9 = FUNC_2(VAR_6);
 struct brcmf_sdio_dev *VAR_10 = VAR_9->bus_priv.sdio;
 struct brcmf_sdio *VAR_11 = VAR_10->bus;
 int VAR_12;

 FUNC_0(VAR_5, "Enter\n");
 if (VAR_10->state != VAR_0)
  return -VAR_2;


 VAR_11->ctrl_frame_buf = VAR_7;
 VAR_11->ctrl_frame_len = VAR_8;
 FUNC_7();
 VAR_11->ctrl_frame_stat = 1;

 FUNC_1(VAR_11);
 FUNC_6(VAR_11->ctrl_wait, !VAR_11->ctrl_frame_stat,
      VAR_1);
 VAR_12 = 0;
 if (VAR_11->ctrl_frame_stat) {
  FUNC_4(VAR_11->sdiodev->func1);
  if (VAR_11->ctrl_frame_stat) {
   FUNC_0(VAR_4, "ctrl_frame timeout\n");
   VAR_11->ctrl_frame_stat = 0;
   VAR_12 = -VAR_3;
  }
  FUNC_5(VAR_11->sdiodev->func1);
 }
 if (!VAR_12) {
  FUNC_0(VAR_4, "ctrl_frame complete, err=%d\n",
     VAR_11->ctrl_frame_err);
  FUNC_3();
  VAR_12 = VAR_11->ctrl_frame_err;
 }

 if (VAR_12)
  VAR_11->sdcnt.tx_ctlerrs++;
 else
  VAR_11->sdcnt.tx_ctlpkts++;

 return VAR_12;
}
