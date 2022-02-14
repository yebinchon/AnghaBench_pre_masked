
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct uhci_hcd {int rh_state; int lock; int wait_for_hp; scalar_t__ auto_stop_time; int resuming_ports; scalar_t__ dead; } ;


 int FUNC_0 (struct usb_hcd*) ;
 scalar_t__ VAR_0 ;




 int FUNC_1 (struct uhci_hcd*) ;
 int FUNC_2 (struct uhci_hcd*,char*) ;
 struct uhci_hcd* FUNC_3 (struct usb_hcd*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uhci_hcd*,int const) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (struct uhci_hcd*) ;
 int FUNC_9 (struct uhci_hcd*) ;
 int FUNC_10 (struct usb_hcd*) ;
 int FUNC_11 (struct uhci_hcd*) ;

__attribute__((used)) static int FUNC_12(struct usb_hcd *VAR_2, char *VAR_3)
{
 struct uhci_hcd *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_9(VAR_4);
 if (!FUNC_0(VAR_2) || VAR_4->dead)
  goto done;
 FUNC_8(VAR_4);

 VAR_6 = FUNC_2(VAR_4, VAR_3);

 switch (VAR_4->rh_state) {
     case 128:

  if (VAR_6 || VAR_4->resuming_ports) {
   VAR_6 = 1;
   FUNC_10(VAR_2);
  }
  break;

     case 131:

  if (VAR_6)
   FUNC_11(VAR_4);
  break;

     case 130:

  if (!FUNC_1(VAR_4)) {
   VAR_4->rh_state = 129;
   VAR_4->auto_stop_time = VAR_1 + VAR_0;
  }
  break;

     case 129:

  if (FUNC_1(VAR_4))
   VAR_4->rh_state = 130;
  else if (FUNC_7(VAR_1, VAR_4->auto_stop_time) &&
    !VAR_4->wait_for_hp)
   FUNC_6(VAR_4, 131);
  break;

     default:
  break;
 }

done:
 FUNC_5(&VAR_4->lock, VAR_5);
 return VAR_6;
}
