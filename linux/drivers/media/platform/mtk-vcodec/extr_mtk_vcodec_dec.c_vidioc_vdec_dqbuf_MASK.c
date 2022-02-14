
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct mtk_vcodec_ctx {scalar_t__ state; int m2m_ctx; int id; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct file*,int ,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
        struct v4l2_buffer *VAR_4)
{
 struct mtk_vcodec_ctx *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->state == VAR_1) {
  FUNC_1("[%d] Call on DQBUF after unrecoverable error",
    VAR_5->id);
  return -VAR_0;
 }

 return FUNC_2(VAR_2, VAR_5->m2m_ctx, VAR_4);
}
