
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcba_usb_msg_ka_usb {scalar_t__ termination_state; int soft_ver_minor; int soft_ver_major; } ;
struct TYPE_2__ {int termination; } ;
struct mcba_priv {int usb_ka_first_pass; TYPE_1__ can; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mcba_priv *VAR_2,
        struct mcba_usb_msg_ka_usb *VAR_3)
{
 if (FUNC_1(VAR_2->usb_ka_first_pass)) {
  FUNC_0(VAR_2->netdev, "PIC USB version %hhu.%hhu\n",
       VAR_3->soft_ver_major, VAR_3->soft_ver_minor);

  VAR_2->usb_ka_first_pass = 0;
 }

 if (VAR_3->termination_state)
  VAR_2->can.termination = VAR_1;
 else
  VAR_2->can.termination = VAR_0;
}
