
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {char* name; } ;
struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct uvc_video_chain {int caps; } ;
struct uvc_streaming {TYPE_1__* dev; } ;
struct uvc_fh {struct uvc_streaming* stream; struct uvc_video_chain* chain; } ;
struct file {struct uvc_fh* private_data; } ;
struct TYPE_2__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
         struct v4l2_capability *VAR_4)
{
 struct video_device *VAR_5 = FUNC_2(VAR_2);
 struct uvc_fh *VAR_6 = VAR_2->private_data;
 struct uvc_video_chain *VAR_7 = VAR_6->chain;
 struct uvc_streaming *VAR_8 = VAR_6->stream;

 FUNC_0(VAR_4->driver, "uvcvideo", sizeof(VAR_4->driver));
 FUNC_0(VAR_4->card, VAR_5->name, sizeof(VAR_4->card));
 FUNC_1(VAR_8->dev->udev, VAR_4->bus_info, sizeof(VAR_4->bus_info));
 VAR_4->capabilities = VAR_0 | VAR_1
     | VAR_7->caps;

 return 0;
}
