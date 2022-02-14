
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_ctlerrs; int tx_ctlpkts; int rx_ctlerrs; int rx_ctlpkts; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct brcmf_usbdev_info {int ctl_urb_status; int ctl_completed; TYPE_2__ bus_pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct brcmf_usbdev_info*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct brcmf_usbdev_info *VAR_3, int VAR_4, int VAR_5)
{
 FUNC_0(VAR_2, "Enter, status=%d\n", VAR_5);

 if (FUNC_2(VAR_3 == ((void*)0)))
  return;

 if (VAR_4 == VAR_0) {
  if (VAR_5 == 0)
   VAR_3->bus_pub.stats.rx_ctlpkts++;
  else
   VAR_3->bus_pub.stats.rx_ctlerrs++;
 } else if (VAR_4 == VAR_1) {
  if (VAR_5 == 0)
   VAR_3->bus_pub.stats.tx_ctlpkts++;
  else
   VAR_3->bus_pub.stats.tx_ctlerrs++;
 }

 VAR_3->ctl_urb_status = VAR_5;
 VAR_3->ctl_completed = 1;
 FUNC_1(VAR_3);
}
