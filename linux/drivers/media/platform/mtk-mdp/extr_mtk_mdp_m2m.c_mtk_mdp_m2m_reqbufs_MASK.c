
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ count; scalar_t__ type; } ;
struct mtk_mdp_ctx {int m2m_ctx; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mtk_mdp_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct mtk_mdp_ctx*,int ) ;
 int FUNC_2 (struct file*,int ,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
          struct v4l2_requestbuffers *VAR_5)
{
 struct mtk_mdp_ctx *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->count == 0) {
  if (VAR_5->type == VAR_2)
   FUNC_1(VAR_6, VAR_1);
  else
   FUNC_1(VAR_6, VAR_0);
 }

 return FUNC_2(VAR_3, VAR_6->m2m_ctx, VAR_5);
}
