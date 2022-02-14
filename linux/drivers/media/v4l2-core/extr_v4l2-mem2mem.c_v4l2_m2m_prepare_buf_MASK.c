
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* v4l2_dev; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct v4l2_buffer {int type; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mdev; } ;


 struct vb2_queue* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_1 (struct vb2_queue*,int ,struct v4l2_buffer*) ;
 struct video_device* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_0, struct v4l2_m2m_ctx *VAR_1,
    struct v4l2_buffer *VAR_2)
{
 struct video_device *VAR_3 = FUNC_2(VAR_0);
 struct vb2_queue *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2->type);
 return FUNC_1(VAR_4, VAR_3->v4l2_dev->mdev, VAR_2);
}
