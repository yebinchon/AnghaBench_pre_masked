
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int minor; int dev; } ;
struct ld_usb {int disconnected; int mutex; int write_wait; int read_wait; int open_count; int interrupt_out_urb; int interrupt_in_urb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct ld_usb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct ld_usb* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_2)
{
 struct ld_usb *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 FUNC_7(VAR_2, ((void*)0));

 VAR_4 = VAR_2->minor;


 FUNC_4(VAR_2, &VAR_1);

 FUNC_6(VAR_3->interrupt_in_urb);
 FUNC_6(VAR_3->interrupt_out_urb);

 FUNC_2(&VAR_3->mutex);


 if (!VAR_3->open_count) {
  FUNC_3(&VAR_3->mutex);
  FUNC_1(VAR_3);
 } else {
  VAR_3->disconnected = 1;

  FUNC_8(&VAR_3->read_wait);
  FUNC_8(&VAR_3->write_wait);
  FUNC_3(&VAR_3->mutex);
 }

 FUNC_0(&VAR_2->dev, "LD USB Device #%d now disconnected\n",
   (VAR_4 - VAR_0));
}
