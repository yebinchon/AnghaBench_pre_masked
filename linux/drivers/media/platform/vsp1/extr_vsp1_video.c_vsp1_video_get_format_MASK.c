
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct vsp1_video {int lock; TYPE_1__* rwpf; TYPE_2__ queue; } ;
struct TYPE_6__ {int pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_3__ fmt; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_4__ {int format; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_video* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct vsp1_video *VAR_5 = FUNC_2(VAR_4->vdev);

 if (VAR_3->type != VAR_5->queue.type)
  return -VAR_0;

 FUNC_0(&VAR_5->lock);
 VAR_3->fmt.pix_mp = VAR_5->rwpf->format;
 FUNC_1(&VAR_5->lock);

 return 0;
}
