
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int epdir; } ;
union cvmx_usbcx_hccharx {TYPE_1__ s; } ;
struct usb_ctrlrequest {int wLength; } ;
struct octeon_hcd {int dummy; } ;
struct cvmx_usb_transaction {int stage; int actual_bytes; int control_header; } ;
struct cvmx_usb_pipe {int pid_toggle; int max_packet; } ;
 int VAR_0 ;
 int VAR_1 ;
 struct usb_ctrlrequest* FUNC_0 (int ) ;
 int FUNC_1 (struct octeon_hcd*,struct cvmx_usb_pipe*,struct cvmx_usb_transaction*,int ) ;
 int FUNC_2 (struct octeon_hcd*,struct cvmx_usb_pipe*) ;

__attribute__((used)) static void FUNC_3(struct octeon_hcd *VAR_2,
          struct cvmx_usb_pipe *VAR_3,
          struct cvmx_usb_transaction *VAR_4,
          union cvmx_usbcx_hccharx VAR_5,
          int VAR_6,
          int VAR_7)
{
 switch (VAR_4->stage) {
 case 133:
 case 132:

  FUNC_1(VAR_2, VAR_3, VAR_4,
      VAR_0);
  break;
 case 131:
  VAR_3->pid_toggle = 1;
  if (FUNC_2(VAR_2, VAR_3)) {
   VAR_4->stage =
    130;
  } else {
   struct usb_ctrlrequest *VAR_8 =
    FUNC_0(VAR_4->control_header);
   if (VAR_8->wLength)
    VAR_4->stage = 135;
   else
    VAR_4->stage = 129;
  }
  break;
 case 130:
  {
   struct usb_ctrlrequest *VAR_9 =
    FUNC_0(VAR_4->control_header);
   if (VAR_9->wLength)
    VAR_4->stage = 135;
   else
    VAR_4->stage = 129;
  }
  break;
 case 135:
  if (FUNC_2(VAR_2, VAR_3)) {
   VAR_4->stage = 134;






   if (!VAR_5.s.epdir) {
    if (VAR_6 < VAR_3->max_packet)
     VAR_4->actual_bytes +=
      VAR_6;
    else
     VAR_4->actual_bytes +=
      VAR_3->max_packet;
   }
  } else if ((VAR_6 == 0) ||
      (VAR_7 < VAR_3->max_packet)) {
   VAR_3->pid_toggle = 1;
   VAR_4->stage = 129;
  }
  break;
 case 134:
  if ((VAR_6 == 0) ||
      (VAR_7 < VAR_3->max_packet)) {
   VAR_3->pid_toggle = 1;
   VAR_4->stage = 129;
  } else {
   VAR_4->stage = 135;
  }
  break;
 case 129:
  if (FUNC_2(VAR_2, VAR_3))
   VAR_4->stage =
    128;
  else
   FUNC_1(VAR_2, VAR_3, VAR_4,
       VAR_1);
  break;
 case 128:
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);
  break;
 }
}
