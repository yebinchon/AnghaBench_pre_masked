
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; } ;


 int FUNC_0 (int *,void*,size_t,int *) ;

int FUNC_1(struct usb_serial_port *VAR_0,
      void *VAR_1, size_t VAR_2)
{
 return FUNC_0(&VAR_0->write_fifo, VAR_1, VAR_2, &VAR_0->lock);
}
