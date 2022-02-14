
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_mdp_ctx {int m2m_ctx; TYPE_2__* mdp_dev; int vpu; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 struct mtk_mdp_ctx* FUNC_2 (void*) ;
 int FUNC_3 (struct mtk_mdp_ctx*,int ) ;
 int FUNC_4 (struct mtk_mdp_ctx*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, void *VAR_5,
    enum v4l2_buf_type VAR_6)
{
 struct mtk_mdp_ctx *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;


 if (FUNC_0(VAR_6)) {
  if (!FUNC_3(VAR_7, VAR_2))
   return -VAR_0;
 } else if (!FUNC_3(VAR_7, VAR_1)) {
  return -VAR_0;
 }

 if (!FUNC_3(VAR_7, VAR_3)) {
  VAR_8 = FUNC_5(&VAR_7->vpu);
  if (VAR_8 < 0) {
   FUNC_1(&VAR_7->mdp_dev->pdev->dev,
    "vpu init failed %d\n",
    VAR_8);
   return -VAR_0;
  }
  FUNC_4(VAR_7, VAR_3);
 }

 return FUNC_6(VAR_4, VAR_7->m2m_ctx, VAR_6);
}
