
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_capability {int bus_info; int card; int driver; } ;
struct TYPE_6__ {TYPE_2__* config; } ;
struct uvc_device {TYPE_3__ func; } ;
struct usb_composite_dev {TYPE_1__* gadget; } ;
struct file {int dummy; } ;
struct TYPE_5__ {struct usb_composite_dev* cdev; } ;
struct TYPE_4__ {char* name; int dev; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 struct video_device* FUNC_2 (struct file*) ;
 struct uvc_device* FUNC_3 (struct video_device*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_0, void *VAR_1, struct v4l2_capability *VAR_2)
{
 struct video_device *VAR_3 = FUNC_2(VAR_0);
 struct uvc_device *VAR_4 = FUNC_3(VAR_3);
 struct usb_composite_dev *VAR_5 = VAR_4->func.config->cdev;

 FUNC_1(VAR_2->driver, "g_uvc", sizeof(VAR_2->driver));
 FUNC_1(VAR_2->card, VAR_5->gadget->name, sizeof(VAR_2->card));
 FUNC_1(VAR_2->bus_info, FUNC_0(&VAR_5->gadget->dev),
  sizeof(VAR_2->bus_info));
 return 0;
}
