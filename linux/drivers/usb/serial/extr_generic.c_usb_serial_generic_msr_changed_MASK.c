
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_icount {scalar_t__ rng; scalar_t__ dsr; scalar_t__ dcd; scalar_t__ cts; } ;
struct usb_serial_port {int lock; struct async_icount icount; int port; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct tty_struct *VAR_4,
    unsigned long VAR_5, struct async_icount *VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_4->driver_data;
 struct async_icount VAR_8;
 unsigned long VAR_9;
 bool VAR_10;





 if (!FUNC_2(&VAR_7->port))
  return 1;

 FUNC_0(&VAR_7->lock, VAR_9);
 VAR_8 = VAR_7->icount;
 FUNC_1(&VAR_7->lock, VAR_9);

 VAR_10 = ((VAR_5 & VAR_3) && (VAR_8.rng != VAR_6->rng)) ||
  ((VAR_5 & VAR_2) && (VAR_8.dsr != VAR_6->dsr)) ||
  ((VAR_5 & VAR_0) && (VAR_8.dcd != VAR_6->dcd)) ||
  ((VAR_5 & VAR_1) && (VAR_8.cts != VAR_6->cts));

 *VAR_6 = VAR_8;

 return VAR_10;
}
