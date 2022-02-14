
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int * read_urbs; scalar_t__ bulk_in_size; int lock; int write_fifo; int * write_urbs; scalar_t__ bulk_out_size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct usb_serial_port *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 if (VAR_0->bulk_out_size) {
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->write_urbs); ++VAR_2)
   FUNC_4(VAR_0->write_urbs[VAR_2]);

  FUNC_2(&VAR_0->lock, VAR_1);
  FUNC_1(&VAR_0->write_fifo);
  FUNC_3(&VAR_0->lock, VAR_1);
 }
 if (VAR_0->bulk_in_size) {
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->read_urbs); ++VAR_2)
   FUNC_4(VAR_0->read_urbs[VAR_2]);
 }
}
