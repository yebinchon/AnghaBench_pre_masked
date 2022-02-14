
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int auto_bkops_enabled; int ee_ctrl_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (struct ufs_hba*) ;
 scalar_t__ FUNC_2 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_3(struct ufs_hba *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  VAR_1->auto_bkops_enabled = 0;
  VAR_1->ee_ctrl_mask |= VAR_0;
  FUNC_1(VAR_1);
 } else {
  VAR_1->auto_bkops_enabled = 1;
  VAR_1->ee_ctrl_mask &= ~VAR_0;
  FUNC_0(VAR_1);
 }
}
