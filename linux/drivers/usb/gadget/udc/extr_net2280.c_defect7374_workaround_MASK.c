
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; } ;
struct net2280 {int bug7734_patched; int regs; TYPE_2__* plregs; TYPE_1__* usb; } ;
struct TYPE_4__ {int pl_ep_status_1; } ;
struct TYPE_3__ {int usbstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct net2280*) ;
 int FUNC_2 (struct net2280*,char*,...) ;
 int FUNC_3 (struct net2280*,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct net2280 *VAR_12, struct usb_ctrlrequest VAR_13)
{
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;


 VAR_14 = FUNC_4(VAR_12->regs, VAR_8);
 VAR_15 = VAR_14 & (0xf << VAR_2);
 VAR_14 &= ~(0xf << VAR_2);

 if (!((VAR_15 == VAR_5) &&
    (VAR_13.bRequestType & VAR_11)))
  return;


 if (!(FUNC_5(&VAR_12->usb->usbstat) & FUNC_0(VAR_10))) {






  VAR_14 |= VAR_3;
  VAR_12->bug7734_patched = 1;
  goto restore_data_eps;
 }


 for (VAR_16 = 0;
   VAR_16 < VAR_6;
   VAR_16++) {

  VAR_17 = FUNC_5(&VAR_12->plregs->pl_ep_status_1)
   & (0xff << VAR_9);
  if ((VAR_17 >= (VAR_1 << VAR_9)) &&
   (VAR_17 <= (VAR_0 << VAR_9))) {
   VAR_14 |= VAR_4;
   VAR_12->bug7734_patched = 1;
   break;
  }





  FUNC_7(VAR_7);

  continue;
 }


 if (VAR_16 >= VAR_6) {
  FUNC_2(VAR_12, "FAIL: Defect 7374 workaround waited but failed "
  "to detect SS host's data phase ACK.");
  FUNC_2(VAR_12, "PL_EP_STATUS_1(23:16):.Expected from 0x11 to 0x16"
  "got 0x%2.2x.\n", VAR_17 >> VAR_9);
 } else {
  FUNC_3(VAR_12, "INFO: Defect 7374 workaround waited about\n"
  "%duSec for Control Read Data Phase ACK\n",
   VAR_7 * VAR_16);
 }

restore_data_eps:




 FUNC_1(VAR_12);

 FUNC_6(VAR_12->regs, VAR_8, VAR_14);

 return;
}
