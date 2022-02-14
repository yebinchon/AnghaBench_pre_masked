
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_meta_format {scalar_t__ dataformat; int buffersize; } ;
struct TYPE_5__ {struct v4l2_meta_format meta; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct v4l2_fh {TYPE_4__* vdev; } ;
struct uvc_streaming {struct uvc_device* dev; } ;
struct uvc_device {TYPE_3__* info; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_8__ {TYPE_2__* queue; } ;
struct TYPE_7__ {scalar_t__ meta_format; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_meta_format*,int ,int) ;
 struct uvc_streaming* FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
        struct v4l2_format *VAR_5)
{
 struct v4l2_fh *VAR_6 = VAR_3->private_data;
 struct uvc_streaming *VAR_7 = FUNC_1(VAR_6->vdev);
 struct uvc_device *VAR_8 = VAR_7->dev;
 struct v4l2_meta_format *VAR_9 = &VAR_5->fmt.meta;
 u32 VAR_10 = VAR_9->dataformat;

 if (VAR_5->type != VAR_6->vdev->queue->type)
  return -VAR_0;

 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->dataformat = VAR_10 == VAR_8->info->meta_format
   ? VAR_10 : VAR_2;
 VAR_9->buffersize = VAR_1;

 return 0;
}
