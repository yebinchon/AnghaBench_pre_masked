
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int delta_msr_wait; } ;
struct TYPE_3__ {int dcd; int rng; int dsr; int cts; } ;
struct usb_serial_port {TYPE_2__ port; TYPE_1__ icount; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {int dummy; } ;
struct pl2303_serial_private {int quirks; } ;
struct pl2303_private {int line_status; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct tty_struct*) ;
 struct tty_struct* FUNC_3 (TYPE_2__*) ;
 struct pl2303_serial_private* FUNC_4 (struct usb_serial*) ;
 struct pl2303_private* FUNC_5 (struct usb_serial_port*) ;
 int FUNC_6 (struct usb_serial_port*) ;
 int FUNC_7 (struct usb_serial_port*,struct tty_struct*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_serial_port *VAR_8,
          unsigned char *VAR_9,
          unsigned int VAR_10)
{
 struct usb_serial *VAR_11 = VAR_8->serial;
 struct pl2303_serial_private *VAR_12 = FUNC_4(VAR_11);
 struct pl2303_private *VAR_13 = FUNC_5(VAR_8);
 struct tty_struct *VAR_14;
 unsigned long VAR_15;
 unsigned int VAR_16 = VAR_6;
 u8 VAR_17;
 u8 VAR_18;

 if (VAR_12->quirks & VAR_0)
  VAR_16 = 0;

 if (VAR_10 < VAR_16 + 1)
  return;

 VAR_17 = VAR_9[VAR_16];


 FUNC_0(&VAR_13->lock, VAR_15);
 VAR_18 = VAR_13->line_status ^ VAR_17;
 VAR_13->line_status = VAR_17;
 FUNC_1(&VAR_13->lock, VAR_15);

 if (VAR_17 & VAR_1)
  FUNC_6(VAR_8);

 if (VAR_18 & VAR_7) {
  if (VAR_18 & VAR_2)
   VAR_8->icount.cts++;
  if (VAR_18 & VAR_4)
   VAR_8->icount.dsr++;
  if (VAR_18 & VAR_5)
   VAR_8->icount.rng++;
  if (VAR_18 & VAR_3) {
   VAR_8->icount.dcd++;
   VAR_14 = FUNC_3(&VAR_8->port);
   if (VAR_14) {
    FUNC_7(VAR_8, VAR_14,
       VAR_17 & VAR_3);
    FUNC_2(VAR_14);
   }
  }

  FUNC_8(&VAR_8->port.delta_msr_wait);
 }
}
