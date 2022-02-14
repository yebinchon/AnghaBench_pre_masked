
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; int bulk_out_size; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char const*,int,int *) ;
 int FUNC_1 (struct usb_serial_port*,int ) ;

int FUNC_2(struct tty_struct *VAR_2,
 struct usb_serial_port *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
 int VAR_6;

 if (!VAR_3->bulk_out_size)
  return -VAR_0;

 if (!VAR_5)
  return 0;

 VAR_5 = FUNC_0(&VAR_3->write_fifo, VAR_4, VAR_5, &VAR_3->lock);
 VAR_6 = FUNC_1(VAR_3, VAR_1);
 if (VAR_6)
  return VAR_6;

 return VAR_5;
}
