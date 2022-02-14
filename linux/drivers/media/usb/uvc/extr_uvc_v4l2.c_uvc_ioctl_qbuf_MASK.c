
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_buffer {int dummy; } ;
struct TYPE_4__ {TYPE_1__* v4l2_dev; } ;
struct uvc_streaming {TYPE_2__ vdev; int queue; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_fh*) ;
 int FUNC_1 (int *,int ,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct uvc_fh *VAR_4 = VAR_2;
 struct uvc_streaming *VAR_5 = VAR_4->stream;

 if (!FUNC_0(VAR_4))
  return -VAR_0;

 return FUNC_1(&VAR_5->queue,
    VAR_5->vdev.v4l2_dev->mdev, VAR_3);
}
