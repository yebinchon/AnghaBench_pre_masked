
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct amradio_device {int muted; int lock; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct amradio_device*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct amradio_device* FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct amradio_device *VAR_2 = FUNC_4(FUNC_5(VAR_0));

 FUNC_2(&VAR_2->lock);
 if (!VAR_2->muted) {
  FUNC_0(VAR_2, 1);
  VAR_2->muted = 0;
 }
 FUNC_3(&VAR_2->lock);

 FUNC_1(&VAR_0->dev, "going into suspend..\n");
 return 0;
}
