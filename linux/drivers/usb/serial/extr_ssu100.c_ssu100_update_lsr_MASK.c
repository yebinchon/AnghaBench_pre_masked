
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int overrun; int frame; int parity; int brk; } ;
struct usb_serial_port {int port; TYPE_1__ icount; } ;
struct ssu100_port_private {int shadowLSR; int status_lock; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int ,int ) ;
 struct ssu100_port_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_5(struct usb_serial_port *VAR_10, u8 VAR_11,
         char *VAR_12)
{
 struct ssu100_port_private *VAR_13 = FUNC_3(VAR_10);
 unsigned long VAR_14;

 FUNC_0(&VAR_13->status_lock, VAR_14);
 VAR_13->shadowLSR = VAR_11;
 FUNC_1(&VAR_13->status_lock, VAR_14);

 *VAR_12 = VAR_2;
 if (VAR_11 & VAR_6) {


  if (VAR_11 & VAR_5) {
   VAR_10->icount.brk++;
   *VAR_12 = VAR_0;
   FUNC_4(VAR_10);
  }
  if (VAR_11 & VAR_9) {
   VAR_10->icount.parity++;
   if (*VAR_12 == VAR_2)
    *VAR_12 = VAR_4;
  }
  if (VAR_11 & VAR_7) {
   VAR_10->icount.frame++;
   if (*VAR_12 == VAR_2)
    *VAR_12 = VAR_1;
  }
  if (VAR_11 & VAR_8) {
   VAR_10->icount.overrun++;
   FUNC_2(&VAR_10->port, 0, VAR_3);
  }
 }

}
