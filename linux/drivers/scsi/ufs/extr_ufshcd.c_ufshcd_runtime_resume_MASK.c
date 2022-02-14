
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int uic_link_state; int curr_dev_pwr_mode; int dev; int is_powered; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ,int ) ;
 int FUNC_5 (struct ufs_hba*,int ) ;

int FUNC_6(struct ufs_hba *VAR_2)
{
 int VAR_3 = 0;
 ktime_t VAR_4 = FUNC_1();

 if (!VAR_2)
  return -VAR_0;

 if (!VAR_2->is_powered)
  goto out;
 else
  VAR_3 = FUNC_5(VAR_2, VAR_1);
out:
 FUNC_4(FUNC_0(VAR_2->dev), VAR_3,
  FUNC_3(FUNC_2(FUNC_1(), VAR_4)),
  VAR_2->curr_dev_pwr_mode, VAR_2->uic_link_state);
 return VAR_3;
}
