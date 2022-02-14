
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct inode {int dummy; } ;
struct imon_context {int display_isopen; int lock; int dev; int display_supported; } ;
struct file {struct imon_context* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 struct usb_interface* FUNC_5 (int *,int) ;
 struct imon_context* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct file *VAR_5)
{
 struct usb_interface *VAR_6;
 struct imon_context *VAR_7 = ((void*)0);
 int VAR_8;
 int VAR_9 = 0;


 FUNC_2(&VAR_2);

 VAR_8 = FUNC_1(VAR_4);
 VAR_6 = FUNC_5(&VAR_3, VAR_8);
 if (!VAR_6) {
  FUNC_4("could not find interface for minor %d\n", VAR_8);
  VAR_9 = -VAR_1;
  goto exit;
 }
 VAR_7 = FUNC_6(VAR_6);

 if (!VAR_7) {
  FUNC_4("no context found for minor %d\n", VAR_8);
  VAR_9 = -VAR_1;
  goto exit;
 }

 FUNC_2(&VAR_7->lock);

 if (!VAR_7->display_supported) {
  FUNC_4("display not supported by device\n");
  VAR_9 = -VAR_1;
 } else if (VAR_7->display_isopen) {
  FUNC_4("display port is already open\n");
  VAR_9 = -VAR_0;
 } else {
  VAR_7->display_isopen = 1;
  VAR_5->private_data = VAR_7;
  FUNC_0(VAR_7->dev, "display port opened\n");
 }

 FUNC_3(&VAR_7->lock);

exit:
 FUNC_3(&VAR_2);
 return VAR_9;
}
