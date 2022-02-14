
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int overrun; int parity; int frame; int brk; } ;
struct usb_serial_port {TYPE_1__ icount; } ;
struct ark3116_private {int lsr; int status_lock; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct ark3116_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_5, __u8 VAR_6)
{
 struct ark3116_private *VAR_7 = FUNC_2(VAR_5);
 unsigned long VAR_8;

 FUNC_0(&VAR_7->status_lock, VAR_8);

 VAR_7->lsr |= VAR_6;
 FUNC_1(&VAR_7->status_lock, VAR_8);

 if (VAR_6&VAR_1) {
  if (VAR_6 & VAR_0)
   VAR_5->icount.brk++;
  if (VAR_6 & VAR_2)
   VAR_5->icount.frame++;
  if (VAR_6 & VAR_4)
   VAR_5->icount.parity++;
  if (VAR_6 & VAR_3)
   VAR_5->icount.overrun++;
 }
}
