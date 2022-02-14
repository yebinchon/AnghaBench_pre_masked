
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_exportbuffer {scalar_t__ type; } ;
struct s5p_mfc_ctx {int vq_dst; int vq_src; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int *,struct v4l2_exportbuffer*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
 struct v4l2_exportbuffer *VAR_5)
{
 struct s5p_mfc_ctx *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->type == VAR_2)
  return FUNC_1(&VAR_6->vq_src, VAR_5);
 if (VAR_5->type == VAR_1)
  return FUNC_1(&VAR_6->vq_dst, VAR_5);
 return -VAR_0;
}
