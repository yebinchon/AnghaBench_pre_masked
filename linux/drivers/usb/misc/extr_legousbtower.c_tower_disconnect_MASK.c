
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct lego_usb_tower {int minor; int disconnected; int lock; int write_wait; int read_wait; int open_count; int interrupt_out_urb; int interrupt_in_urb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct lego_usb_tower*) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct lego_usb_tower* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8 (struct usb_interface *VAR_2)
{
 struct lego_usb_tower *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5 (VAR_2);

 VAR_4 = VAR_3->minor;


 FUNC_4 (VAR_2, &VAR_1);


 FUNC_6(VAR_3->interrupt_in_urb);
 FUNC_6(VAR_3->interrupt_out_urb);

 FUNC_1(&VAR_3->lock);


 if (!VAR_3->open_count) {
  FUNC_2(&VAR_3->lock);
  FUNC_3 (VAR_3);
 } else {
  VAR_3->disconnected = 1;

  FUNC_7(&VAR_3->read_wait);
  FUNC_7(&VAR_3->write_wait);
  FUNC_2(&VAR_3->lock);
 }

 FUNC_0(&VAR_2->dev, "LEGO USB Tower #%d now disconnected\n",
   (VAR_4 - VAR_0));
}
