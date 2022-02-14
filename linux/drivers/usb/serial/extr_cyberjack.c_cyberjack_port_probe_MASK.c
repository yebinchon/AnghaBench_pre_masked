
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; int interrupt_in_urb; } ;
struct cyberjack_private {scalar_t__ wrsent; scalar_t__ wrfilled; scalar_t__ rdtodo; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct cyberjack_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_serial_port*,struct cyberjack_private*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_2)
{
 struct cyberjack_private *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(sizeof(struct cyberjack_private), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->lock);
 VAR_3->rdtodo = 0;
 VAR_3->wrfilled = 0;
 VAR_3->wrsent = 0;

 FUNC_3(VAR_2, VAR_3);

 VAR_4 = FUNC_4(VAR_2->interrupt_in_urb, VAR_1);
 if (VAR_4)
  FUNC_0(&VAR_2->dev, "usb_submit_urb(read int) failed\n");

 return 0;
}
