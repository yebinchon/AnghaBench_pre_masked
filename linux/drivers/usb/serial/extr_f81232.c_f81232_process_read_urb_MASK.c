
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ console; } ;
struct TYPE_4__ {int overrun; int frame; int parity; int brk; } ;
struct usb_serial_port {TYPE_2__ port; scalar_t__ sysrq; TYPE_1__ icount; } ;
struct urb {unsigned char* transfer_buffer; int actual_length; struct usb_serial_port* context; } ;
struct f81232_private {int lsr_work; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,unsigned char,char) ;
 struct f81232_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_serial_port*) ;
 scalar_t__ FUNC_5 (struct usb_serial_port*,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_10)
{
 struct usb_serial_port *VAR_11 = VAR_10->context;
 struct f81232_private *VAR_12 = FUNC_3(VAR_11);
 unsigned char *VAR_13 = VAR_10->transfer_buffer;
 char VAR_14;
 unsigned int VAR_15;
 u8 VAR_16;





 if ((VAR_10->actual_length < 2) || (VAR_10->actual_length % 2))
  return;



 for (VAR_15 = 0; VAR_15 < VAR_10->actual_length; VAR_15 += 2) {
  VAR_14 = VAR_2;
  VAR_16 = VAR_13[VAR_15];

  if (VAR_16 & VAR_6) {
   if (VAR_16 & VAR_5) {
    VAR_14 = VAR_0;
    VAR_11->icount.brk++;
    FUNC_4(VAR_11);
   } else if (VAR_16 & VAR_9) {
    VAR_14 = VAR_4;
    VAR_11->icount.parity++;
   } else if (VAR_16 & VAR_7) {
    VAR_14 = VAR_1;
    VAR_11->icount.frame++;
   }

   if (VAR_16 & VAR_8) {
    VAR_11->icount.overrun++;
    FUNC_0(&VAR_12->lsr_work);
    FUNC_2(&VAR_11->port, 0,
      VAR_3);
   }
  }

  if (VAR_11->port.console && VAR_11->sysrq) {
   if (FUNC_5(VAR_11, VAR_13[VAR_15 + 1]))
    continue;
  }

  FUNC_2(&VAR_11->port, VAR_13[VAR_15 + 1], VAR_14);
 }

 FUNC_1(&VAR_11->port);
}
