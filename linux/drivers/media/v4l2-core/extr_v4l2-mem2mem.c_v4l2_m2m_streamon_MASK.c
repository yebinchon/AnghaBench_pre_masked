
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 struct vb2_queue* FUNC_0 (struct v4l2_m2m_ctx*,int) ;
 int FUNC_1 (struct v4l2_m2m_ctx*) ;
 int FUNC_2 (struct vb2_queue*,int) ;

int FUNC_3(struct file *VAR_0, struct v4l2_m2m_ctx *VAR_1,
        enum v4l2_buf_type VAR_2)
{
 struct vb2_queue *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_4)
  FUNC_1(VAR_1);

 return VAR_4;
}
