
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_meta_format {int buffersize; int dataformat; } ;
struct TYPE_7__ {struct v4l2_meta_format meta; } ;
struct v4l2_format {scalar_t__ type; TYPE_3__ fmt; } ;
struct v4l2_fh {TYPE_4__* vdev; } ;
struct TYPE_6__ {int format; } ;
struct uvc_streaming {TYPE_2__ meta; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_8__ {TYPE_1__* queue; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_meta_format*,int ,int) ;
 struct uvc_streaming* FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_format *VAR_4)
{
 struct v4l2_fh *VAR_5 = VAR_2->private_data;
 struct uvc_streaming *VAR_6 = FUNC_1(VAR_5->vdev);
 struct v4l2_meta_format *VAR_7 = &VAR_4->fmt.meta;

 if (VAR_4->type != VAR_5->vdev->queue->type)
  return -VAR_0;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->dataformat = VAR_6->meta.format;
 VAR_7->buffersize = VAR_1;

 return 0;
}
