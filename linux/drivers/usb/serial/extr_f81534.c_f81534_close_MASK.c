
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int * read_urbs; int lock; int write_fifo; int * write_urbs; TYPE_1__* serial; } ;
struct f81534_serial_private {int urb_mutex; int opened_port; } ;
struct TYPE_2__ {struct usb_serial_port** port; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct f81534_serial_private* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct usb_serial_port *VAR_0)
{
 struct f81534_serial_private *VAR_1 =
   FUNC_6(VAR_0->serial);
 struct usb_serial_port *VAR_2 = VAR_0->serial->port[0];
 unsigned long VAR_3;
 size_t VAR_4;

 FUNC_7(VAR_0->write_urbs[0]);

 FUNC_4(&VAR_0->lock, VAR_3);
 FUNC_1(&VAR_0->write_fifo);
 FUNC_5(&VAR_0->lock, VAR_3);


 FUNC_2(&VAR_1->urb_mutex);
 VAR_1->opened_port--;

 if (!VAR_1->opened_port) {
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->read_urbs); ++VAR_4)
   FUNC_7(VAR_2->read_urbs[VAR_4]);
 }

 FUNC_3(&VAR_1->urb_mutex);
}
