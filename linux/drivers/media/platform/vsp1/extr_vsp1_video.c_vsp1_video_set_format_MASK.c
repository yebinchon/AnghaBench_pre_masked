
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct vsp1_video {int lock; TYPE_2__* rwpf; TYPE_3__ queue; } ;
struct vsp1_format_info {int dummy; } ;
struct TYPE_4__ {int pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_5__ {struct vsp1_format_info const* fmtinfo; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vsp1_video*,int *,struct vsp1_format_info const**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vsp1_video* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct v4l2_fh *VAR_5 = VAR_2->private_data;
 struct vsp1_video *VAR_6 = FUNC_3(VAR_5->vdev);
 const struct vsp1_format_info *VAR_7;
 int VAR_8;

 if (VAR_4->type != VAR_6->queue.type)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_6, &VAR_4->fmt.pix_mp, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(&VAR_6->lock);

 if (FUNC_4(&VAR_6->queue)) {
  VAR_8 = -VAR_0;
  goto done;
 }

 VAR_6->rwpf->format = VAR_4->fmt.pix_mp;
 VAR_6->rwpf->fmtinfo = VAR_7;

done:
 FUNC_2(&VAR_6->lock);
 return VAR_8;
}
