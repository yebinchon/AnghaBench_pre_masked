
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ console; } ;
struct usb_serial_port {TYPE_1__ port; scalar_t__ sysrq; } ;
struct urb {int actual_length; scalar_t__ transfer_buffer; struct usb_serial_port* context; } ;


 char VAR_0 ;
 int FUNC_0 (struct usb_serial_port*,char,char*) ;
 int FUNC_1 (struct usb_serial_port*,char) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char,char) ;
 int FUNC_4 (TYPE_1__*,char*,char,int) ;
 int FUNC_5 (struct usb_serial_port*,char) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->context;
 char *VAR_3 = (char *)VAR_1->transfer_buffer;
 char VAR_4 = VAR_0;
 u32 VAR_5 = VAR_1->actual_length;
 int VAR_6;
 char *VAR_7;

 if ((VAR_5 >= 4) &&
     (VAR_3[0] == 0x1b) && (VAR_3[1] == 0x1b) &&
     ((VAR_3[2] == 0x00) || (VAR_3[2] == 0x01))) {
  if (VAR_3[2] == 0x00)
   FUNC_0(VAR_2, VAR_3[3], &VAR_4);
  if (VAR_3[2] == 0x01)
   FUNC_1(VAR_2, VAR_3[3]);

  VAR_5 -= 4;
  VAR_7 = VAR_3 + 4;
 } else
  VAR_7 = VAR_3;

 if (!VAR_5)
  return;

 if (VAR_2->port.console && VAR_2->sysrq) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_7++) {
   if (!FUNC_5(VAR_2, *VAR_7))
    FUNC_3(&VAR_2->port, *VAR_7, VAR_4);
  }
 } else
  FUNC_4(&VAR_2->port, VAR_7, VAR_4, VAR_5);

 FUNC_2(&VAR_2->port);
}
