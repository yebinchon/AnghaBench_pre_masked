
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int delta_msr_wait; } ;
struct TYPE_3__ {int rng; int dcd; int dsr; int cts; } ;
struct usb_serial_port {TYPE_2__ port; TYPE_1__ icount; } ;
struct ssu100_port_private {int shadowMSR; int status_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct ssu100_port_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_5, u8 VAR_6)
{
 struct ssu100_port_private *VAR_7 = FUNC_2(VAR_5);
 unsigned long VAR_8;

 FUNC_0(&VAR_7->status_lock, VAR_8);
 VAR_7->shadowMSR = VAR_6;
 FUNC_1(&VAR_7->status_lock, VAR_8);

 if (VAR_6 & VAR_0) {

  if (VAR_6 & VAR_1)
   VAR_5->icount.cts++;
  if (VAR_6 & VAR_3)
   VAR_5->icount.dsr++;
  if (VAR_6 & VAR_2)
   VAR_5->icount.dcd++;
  if (VAR_6 & VAR_4)
   VAR_5->icount.rng++;
  FUNC_3(&VAR_5->port.delta_msr_wait);
 }
}
