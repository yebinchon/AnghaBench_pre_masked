
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int is_sys_suspended; int uic_link_state; int curr_dev_pwr_mode; int dev; int spm_lvl; int is_powered; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ufs_hba*) ;
 int FUNC_9 (struct ufs_hba*,int ) ;

int FUNC_10(struct ufs_hba *VAR_1)
{
 int VAR_2 = 0;
 ktime_t VAR_3 = FUNC_1();

 if (!VAR_1 || !VAR_1->is_powered)
  return 0;

 if ((FUNC_6(VAR_1->spm_lvl) ==
      VAR_1->curr_dev_pwr_mode) &&
     (FUNC_7(VAR_1->spm_lvl) ==
      VAR_1->uic_link_state))
  goto out;

 if (FUNC_4(VAR_1->dev)) {
  VAR_2 = FUNC_8(VAR_1);
  if (VAR_2)
   goto out;
 }

 VAR_2 = FUNC_9(VAR_1, VAR_0);
out:
 FUNC_5(FUNC_0(VAR_1->dev), VAR_2,
  FUNC_3(FUNC_2(FUNC_1(), VAR_3)),
  VAR_1->curr_dev_pwr_mode, VAR_1->uic_link_state);
 if (!VAR_2)
  VAR_1->is_sys_suspended = 1;
 return VAR_2;
}
