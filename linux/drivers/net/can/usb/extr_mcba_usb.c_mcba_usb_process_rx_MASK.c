
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcba_usb_msg_ka_usb {int dummy; } ;
struct mcba_usb_msg_ka_can {int dummy; } ;
struct mcba_usb_msg_can {int dummy; } ;
struct mcba_usb_msg {int cmd_id; } ;
struct mcba_priv {int netdev; } ;







 int FUNC_0 (struct mcba_priv*,struct mcba_usb_msg_can*) ;
 int FUNC_1 (struct mcba_priv*,struct mcba_usb_msg_ka_can*) ;
 int FUNC_2 (struct mcba_priv*,struct mcba_usb_msg_ka_usb*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct mcba_priv *VAR_0,
    struct mcba_usb_msg *VAR_1)
{
 switch (VAR_1->cmd_id) {
 case 132:
  FUNC_1(VAR_0,
     (struct mcba_usb_msg_ka_can *)VAR_1);
  break;

 case 131:
  FUNC_2(VAR_0,
     (struct mcba_usb_msg_ka_usb *)VAR_1);
  break;

 case 129:
  FUNC_0(VAR_0, (struct mcba_usb_msg_can *)VAR_1);
  break;

 case 130:



  break;

 case 128:

  break;

 default:
  FUNC_3(VAR_0->netdev, "Unsupported msg (0x%hhX)",
       VAR_1->cmd_id);
  break;
 }
}
