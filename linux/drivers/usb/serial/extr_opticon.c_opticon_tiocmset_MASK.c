
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct opticon_private {int rts; int lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct opticon_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct usb_serial_port *VAR_5 = VAR_2->driver_data;
 struct opticon_private *VAR_6 = FUNC_3(VAR_5);
 unsigned long VAR_7;
 bool VAR_8;
 bool VAR_9 = 0;
 int VAR_10;


 FUNC_1(&VAR_6->lock, VAR_7);

 VAR_8 = VAR_6->rts;
 if (VAR_3 & VAR_1)
  VAR_6->rts = 1;
 if (VAR_4 & VAR_1)
  VAR_6->rts = 0;
 VAR_9 = VAR_8 ^ VAR_6->rts;
 FUNC_2(&VAR_6->lock, VAR_7);

 if (!VAR_9)
  return 0;

 VAR_10 = FUNC_0(VAR_5, VAR_0, !VAR_8);
 if (VAR_10)
  return FUNC_4(VAR_10);

 return 0;
}
