
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct v4l2_m2m_queue_ctx {struct vb2_queue q; } ;
struct v4l2_m2m_ctx {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 struct v4l2_m2m_queue_ctx* FUNC_0 (struct v4l2_m2m_ctx*,int) ;

struct vb2_queue *FUNC_1(struct v4l2_m2m_ctx *VAR_0,
           enum v4l2_buf_type VAR_1)
{
 struct v4l2_m2m_queue_ctx *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 return &VAR_2->q;
}
