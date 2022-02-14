
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_meta_format {int dataformat; } ;
struct TYPE_3__ {struct v4l2_meta_format meta; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct v4l2_fh {int vdev; } ;
struct TYPE_4__ {int format; } ;
struct uvc_streaming {int mutex; TYPE_2__ meta; int queue; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct uvc_streaming* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
        struct v4l2_format *VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct uvc_streaming *VAR_5 = FUNC_4(VAR_4->vdev);
 struct v4l2_meta_format *VAR_6 = &VAR_3->fmt.meta;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;






 FUNC_0(&VAR_5->mutex);

 if (FUNC_3(&VAR_5->queue))
  VAR_7 = -VAR_0;
 else
  VAR_5->meta.format = VAR_6->dataformat;

 FUNC_1(&VAR_5->mutex);

 return VAR_7;
}
