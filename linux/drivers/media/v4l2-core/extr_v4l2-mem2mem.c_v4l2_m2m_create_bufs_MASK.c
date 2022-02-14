
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct v4l2_create_buffers {TYPE_1__ format; } ;
struct file {int dummy; } ;


 struct vb2_queue* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_1 (struct vb2_queue*,struct v4l2_create_buffers*) ;

int FUNC_2(struct file *VAR_0, struct v4l2_m2m_ctx *VAR_1,
    struct v4l2_create_buffers *VAR_2)
{
 struct vb2_queue *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2->format.type);
 return FUNC_1(VAR_3, VAR_2);
}
