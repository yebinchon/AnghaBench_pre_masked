
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_sb_attn_info {int sb_phys; scalar_t__ sb_attn; } ;
struct qed_hwfn {struct qed_sb_attn_info* p_sb_attn; TYPE_2__* cdev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (struct qed_sb_attn_info*) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_0)
{
 struct qed_sb_attn_info *VAR_1 = VAR_0->p_sb_attn;

 if (!VAR_1)
  return;

 if (VAR_1->sb_attn)
  FUNC_1(&VAR_0->cdev->pdev->dev,
      FUNC_0(VAR_0),
      VAR_1->sb_attn, VAR_1->sb_phys);
 FUNC_2(VAR_1);
 VAR_0->p_sb_attn = ((void*)0);
}
