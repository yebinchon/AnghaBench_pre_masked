
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int count; struct usb_interface* intf; int (* manage_power ) (struct usb_interface*,int) ;int wlock; int validity; scalar_t__ rerr; scalar_t__ werr; int flags; } ;
struct usb_interface {int dev; } ;
struct inode {int dummy; } ;
struct file {struct wdm_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 struct wdm_device* FUNC_10 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = -VAR_0;
 struct usb_interface *VAR_8;
 struct wdm_device *VAR_9;

 FUNC_2(&VAR_3);
 VAR_9 = FUNC_10(VAR_6);
 if (!VAR_9)
  goto out;

 VAR_8 = VAR_9->intf;
 if (FUNC_5(VAR_2, &VAR_9->flags))
  goto out;
 VAR_5->private_data = VAR_9;

 VAR_7 = FUNC_6(VAR_9->intf);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_9->intf->dev, "Error autopm - %d\n", VAR_7);
  goto out;
 }


 FUNC_2(&VAR_9->wlock);
 if (!VAR_9->count++) {
  VAR_9->werr = 0;
  VAR_9->rerr = 0;
  VAR_7 = FUNC_8(VAR_9->validity, VAR_1);
  if (VAR_7 < 0) {
   VAR_9->count--;
   FUNC_0(&VAR_9->intf->dev,
    "Error submitting int urb - %d\n", VAR_7);
   VAR_7 = FUNC_9(VAR_7);
  }
 } else {
  VAR_7 = 0;
 }
 FUNC_3(&VAR_9->wlock);
 if (VAR_9->count == 1)
  VAR_9->manage_power(VAR_8, 1);
 FUNC_7(VAR_9->intf);
out:
 FUNC_3(&VAR_3);
 return VAR_7;
}
