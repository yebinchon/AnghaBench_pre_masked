
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ console; int delta_msr_wait; } ;
struct TYPE_5__ {int rx; int overrun; int frame; int parity; int brk; int dcd; int rng; int dsr; int cts; } ;
struct usb_serial_port {TYPE_2__ port; scalar_t__ sysrq; TYPE_1__ icount; int dev; } ;
struct tty_struct {int dummy; } ;
struct ftdi_private {char prev_status; int transmit_empty; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,char,char) ;
 int FUNC_2 (TYPE_2__*,char*,char,int) ;
 int FUNC_3 (struct tty_struct*) ;
 struct tty_struct* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct usb_serial_port*) ;
 int FUNC_6 (struct usb_serial_port*,struct tty_struct*,char) ;
 int FUNC_7 (struct usb_serial_port*,char) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct usb_serial_port *VAR_16,
  struct ftdi_private *VAR_17, char *VAR_18, int VAR_19)
{
 int VAR_20;
 char VAR_21;
 char VAR_22;
 char *VAR_23;

 if (VAR_19 < 2) {
  FUNC_0(&VAR_16->dev, "malformed packet\n");
  return 0;
 }




 VAR_21 = VAR_18[0] & VAR_10;
 if (VAR_21 != VAR_17->prev_status) {
  char VAR_24 = VAR_21 ^ VAR_17->prev_status;

  if (VAR_24 & VAR_0)
   VAR_16->icount.cts++;
  if (VAR_24 & VAR_1)
   VAR_16->icount.dsr++;
  if (VAR_24 & VAR_2)
   VAR_16->icount.rng++;
  if (VAR_24 & VAR_3) {
   struct tty_struct *VAR_25;

   VAR_16->icount.dcd++;
   VAR_25 = FUNC_4(&VAR_16->port);
   if (VAR_25)
    FUNC_6(VAR_16, VAR_25,
      VAR_21 & VAR_3);
   FUNC_3(VAR_25);
  }

  FUNC_8(&VAR_16->port.delta_msr_wait);
  VAR_17->prev_status = VAR_21;
 }


 if (VAR_18[1] & VAR_9)
  VAR_17->transmit_empty = 1;
 else
  VAR_17->transmit_empty = 0;

 VAR_19 -= 2;
 if (!VAR_19)
  return 0;





 VAR_22 = VAR_13;
 if (VAR_18[1] & VAR_5) {


  if (VAR_18[1] & VAR_4) {
   VAR_22 = VAR_11;
   VAR_16->icount.brk++;
   FUNC_5(VAR_16);
  } else if (VAR_18[1] & VAR_8) {
   VAR_22 = VAR_15;
   VAR_16->icount.parity++;
  } else if (VAR_18[1] & VAR_6) {
   VAR_22 = VAR_12;
   VAR_16->icount.frame++;
  }

  if (VAR_18[1] & VAR_7) {
   VAR_16->icount.overrun++;
   FUNC_1(&VAR_16->port, 0, VAR_14);
  }
 }

 VAR_16->icount.rx += VAR_19;
 VAR_23 = VAR_18 + 2;

 if (VAR_16->port.console && VAR_16->sysrq) {
  for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++, VAR_23++) {
   if (!FUNC_7(VAR_16, *VAR_23))
    FUNC_1(&VAR_16->port, *VAR_23, VAR_22);
  }
 } else {
  FUNC_2(&VAR_16->port, VAR_23, VAR_22, VAR_19);
 }

 return VAR_19;
}
