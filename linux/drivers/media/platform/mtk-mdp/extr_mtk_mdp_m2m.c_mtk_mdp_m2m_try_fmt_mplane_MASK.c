
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct mtk_mdp_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct mtk_mdp_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct mtk_mdp_ctx*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
          struct v4l2_format *VAR_3)
{
 struct mtk_mdp_ctx *VAR_4 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_4, VAR_3))
  return -VAR_0;
 return 0;
}
