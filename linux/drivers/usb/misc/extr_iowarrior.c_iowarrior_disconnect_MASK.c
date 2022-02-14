
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct iowarrior {int minor; int mutex; int write_wait; int read_wait; int submitted; int int_in_urb; scalar_t__ opened; scalar_t__ present; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct iowarrior*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct iowarrior* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_2)
{
 struct iowarrior *VAR_3 = FUNC_5(VAR_2);
 int VAR_4 = VAR_3->minor;

 FUNC_4(VAR_2, &VAR_1);

 FUNC_2(&VAR_3->mutex);


 VAR_3->present = 0;

 if (VAR_3->opened) {




  FUNC_7(VAR_3->int_in_urb);
  FUNC_6(&VAR_3->submitted);
  FUNC_8(&VAR_3->read_wait);
  FUNC_8(&VAR_3->write_wait);
  FUNC_3(&VAR_3->mutex);
 } else {

  FUNC_3(&VAR_3->mutex);
  FUNC_1(VAR_3);
 }

 FUNC_0(&VAR_2->dev, "I/O-Warror #%d now disconnected\n",
   VAR_4 - VAR_0);
}
