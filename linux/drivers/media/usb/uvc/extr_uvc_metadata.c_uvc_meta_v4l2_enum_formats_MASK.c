
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct v4l2_fmtdesc {unsigned int index; scalar_t__ type; int pixelformat; } ;
struct v4l2_fh {TYPE_3__* vdev; } ;
struct uvc_streaming {struct uvc_device* dev; } ;
struct uvc_device {TYPE_2__* info; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_6__ {TYPE_1__* queue; } ;
struct TYPE_5__ {int meta_format; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_fmtdesc*,int ,int) ;
 struct uvc_streaming* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
          struct v4l2_fmtdesc *VAR_4)
{
 struct v4l2_fh *VAR_5 = VAR_2->private_data;
 struct uvc_streaming *VAR_6 = FUNC_1(VAR_5->vdev);
 struct uvc_device *VAR_7 = VAR_6->dev;
 u32 VAR_8 = VAR_4->index;

 if (VAR_4->type != VAR_5->vdev->queue->type ||
     VAR_8 > 1U || (VAR_8 && !VAR_7->info->meta_format))
  return -VAR_0;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->type = VAR_5->vdev->queue->type;
 VAR_4->index = VAR_8;
 VAR_4->pixelformat = VAR_8 ? VAR_7->info->meta_format : VAR_1;

 return 0;
}
