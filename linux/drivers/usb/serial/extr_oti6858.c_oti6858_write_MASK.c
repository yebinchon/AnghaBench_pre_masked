
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; } ;
struct tty_struct {int dummy; } ;


 int FUNC_0 (int *,unsigned char const*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, struct usb_serial_port *VAR_1,
   const unsigned char *VAR_2, int VAR_3)
{
 if (!VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(&VAR_1->write_fifo, VAR_2, VAR_3, &VAR_1->lock);

 return VAR_3;
}
