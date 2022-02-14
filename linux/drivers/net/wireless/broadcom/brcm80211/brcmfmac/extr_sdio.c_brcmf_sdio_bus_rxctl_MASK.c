
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u8 ;
struct device {int dummy; } ;
struct brcmf_sdio_dev {scalar_t__ state; struct brcmf_sdio* bus; } ;
struct TYPE_4__ {int rx_ctlerrs; int rx_ctlpkts; } ;
struct brcmf_sdio {TYPE_2__ sdcnt; int rxctl_lock; scalar_t__ rxlen; int * rxctl_orig; int * rxctl; } ;
struct TYPE_3__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct brcmf_sdio*) ;
 int FUNC_3 (struct brcmf_sdio*,scalar_t__*,int*) ;
 struct brcmf_bus* FUNC_4 (struct device*) ;
 int FUNC_5 (unsigned char*,int *,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct device *VAR_6, unsigned char *VAR_7, uint VAR_8)
{
 int VAR_9;
 uint VAR_10 = 0;
 bool VAR_11;
 u8 *VAR_12;
 struct brcmf_bus *VAR_13 = FUNC_4(VAR_6);
 struct brcmf_sdio_dev *VAR_14 = VAR_13->bus_priv.sdio;
 struct brcmf_sdio *VAR_15 = VAR_14->bus;

 FUNC_0(VAR_5, "Enter\n");
 if (VAR_14->state != VAR_0)
  return -VAR_2;


 VAR_9 = FUNC_3(VAR_15, &VAR_15->rxlen, &VAR_11);

 FUNC_7(&VAR_15->rxctl_lock);
 VAR_10 = VAR_15->rxlen;
 FUNC_5(VAR_7, VAR_15->rxctl, FUNC_6(VAR_8, VAR_10));
 VAR_15->rxctl = ((void*)0);
 VAR_12 = VAR_15->rxctl_orig;
 VAR_15->rxctl_orig = ((void*)0);
 VAR_15->rxlen = 0;
 FUNC_8(&VAR_15->rxctl_lock);
 FUNC_9(VAR_12);

 if (VAR_10) {
  FUNC_0(VAR_1, "resumed on rxctl frame, got %d expected %d\n",
     VAR_10, VAR_8);
 } else if (VAR_9 == 0) {
  FUNC_1("resumed on timeout\n");
  FUNC_2(VAR_15);
 } else if (VAR_11) {
  FUNC_0(VAR_1, "cancelled\n");
  return -VAR_3;
 } else {
  FUNC_0(VAR_1, "resumed for unknown reason?\n");
  FUNC_2(VAR_15);
 }

 if (VAR_10)
  VAR_15->sdcnt.rx_ctlpkts++;
 else
  VAR_15->sdcnt.rx_ctlerrs++;

 return VAR_10 ? (int)VAR_10 : -VAR_4;
}
