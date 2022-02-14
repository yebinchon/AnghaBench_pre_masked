
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct async_icount {int frame; int parity; int overrun; int brk; } ;
struct usb_serial_port {struct async_icount icount; } ;
struct qt2_port_private {int shadowLSR; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct qt2_port_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_5, unsigned char *VAR_6)
{
 struct qt2_port_private *VAR_7;
 struct async_icount *VAR_8;
 unsigned long VAR_9;
 u8 VAR_10 = (u8) *VAR_6;

 VAR_7 = FUNC_2(VAR_5);

 if (VAR_10 & VAR_0)
  VAR_10 &= (u8) (VAR_3 | VAR_0);

 FUNC_0(&VAR_7->lock, VAR_9);
 VAR_7->shadowLSR = VAR_10;
 FUNC_1(&VAR_7->lock, VAR_9);

 VAR_8 = &VAR_5->icount;

 if (VAR_10 & VAR_1) {

  if (VAR_10 & VAR_0)
   VAR_8->brk++;

  if (VAR_10 & VAR_3)
   VAR_8->overrun++;

  if (VAR_10 & VAR_4)
   VAR_8->parity++;

  if (VAR_10 & VAR_2)
   VAR_8->frame++;
 }

}
