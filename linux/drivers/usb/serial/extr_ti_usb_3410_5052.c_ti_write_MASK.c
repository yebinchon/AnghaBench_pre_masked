
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int write_fifo; } ;
struct tty_struct {int dummy; } ;
struct ti_port {int tp_lock; int tp_is_open; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char const*,int,int *) ;
 int FUNC_1 (struct ti_port*) ;
 struct ti_port* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, struct usb_serial_port *VAR_2,
   const unsigned char *VAR_3, int VAR_4)
{
 struct ti_port *VAR_5 = FUNC_2(VAR_2);

 if (VAR_4 == 0) {
  return 0;
 }

 if (!VAR_5->tp_is_open)
  return -VAR_0;

 VAR_4 = FUNC_0(&VAR_2->write_fifo, VAR_3, VAR_4,
       &VAR_5->tp_lock);
 FUNC_1(VAR_5);

 return VAR_4;
}
