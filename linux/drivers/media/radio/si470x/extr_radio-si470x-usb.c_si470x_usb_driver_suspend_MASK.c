
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct si470x_device {int read_queue; scalar_t__ int_in_urb; scalar_t__ int_in_running; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct si470x_device*) ;
 struct si470x_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0,
  pm_message_t VAR_1)
{
 struct si470x_device *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dev, "suspending now...\n");


 if (VAR_2->int_in_running) {
  VAR_2->int_in_running = 0;
  if (VAR_2->int_in_urb)
   FUNC_3(VAR_2->int_in_urb);
 }


 FUNC_4(&VAR_2->read_queue);


 FUNC_1(VAR_2);
 return 0;
}
