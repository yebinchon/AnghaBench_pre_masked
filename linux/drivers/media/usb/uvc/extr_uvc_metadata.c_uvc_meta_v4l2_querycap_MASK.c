
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fh {TYPE_2__* vdev; } ;
struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct uvc_video_chain {int caps; } ;
struct uvc_streaming {TYPE_1__* dev; struct uvc_video_chain* chain; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct uvc_streaming* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_capability *VAR_4)
{
 struct v4l2_fh *VAR_5 = VAR_2->private_data;
 struct uvc_streaming *VAR_6 = FUNC_2(VAR_5->vdev);
 struct uvc_video_chain *VAR_7 = VAR_6->chain;

 FUNC_0(VAR_4->driver, "uvcvideo", sizeof(VAR_4->driver));
 FUNC_0(VAR_4->card, VAR_5->vdev->name, sizeof(VAR_4->card));
 FUNC_1(VAR_6->dev->udev, VAR_4->bus_info, sizeof(VAR_4->bus_info));
 VAR_4->capabilities = VAR_0 | VAR_1
     | VAR_7->caps;

 return 0;
}
