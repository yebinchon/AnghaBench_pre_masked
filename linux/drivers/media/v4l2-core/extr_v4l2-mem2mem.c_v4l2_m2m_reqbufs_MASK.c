
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int * owner; } ;
struct v4l2_requestbuffers {scalar_t__ count; int type; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct file {int * private_data; } ;


 struct vb2_queue* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_1 (struct vb2_queue*,struct v4l2_requestbuffers*) ;

int FUNC_2(struct file *VAR_0, struct v4l2_m2m_ctx *VAR_1,
       struct v4l2_requestbuffers *VAR_2)
{
 struct vb2_queue *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2->type);
 VAR_4 = FUNC_1(VAR_3, VAR_2);


 if (VAR_4 == 0)
  VAR_3->owner = VAR_2->count ? VAR_0->private_data : ((void*)0);

 return VAR_4;
}
