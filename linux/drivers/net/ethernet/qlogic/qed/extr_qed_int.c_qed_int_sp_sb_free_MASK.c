
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sb_phys; scalar_t__ sb_virt; } ;
struct qed_sb_sp_info {TYPE_3__ sb_info; } ;
struct qed_hwfn {struct qed_sb_sp_info* p_sp_sb; TYPE_2__* cdev; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (struct qed_sb_sp_info*) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_0)
{
 struct qed_sb_sp_info *VAR_1 = VAR_0->p_sp_sb;

 if (!VAR_1)
  return;

 if (VAR_1->sb_info.sb_virt)
  FUNC_1(&VAR_0->cdev->pdev->dev,
      FUNC_0(VAR_0),
      VAR_1->sb_info.sb_virt,
      VAR_1->sb_info.sb_phys);
 FUNC_2(VAR_1);
 VAR_0->p_sp_sb = ((void*)0);
}
