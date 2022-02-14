
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct vsp1_histogram {int meta_format; TYPE_1__ queue; } ;
struct v4l2_fmtdesc {scalar_t__ index; scalar_t__ type; int pixelformat; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 struct vsp1_histogram* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
      struct v4l2_fmtdesc *VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct vsp1_histogram *VAR_5 = FUNC_0(VAR_4->vdev);

 if (VAR_3->index > 0 || VAR_3->type != VAR_5->queue.type)
  return -VAR_0;

 VAR_3->pixelformat = VAR_5->meta_format;

 return 0;
}
