
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hisi_host {int in_suspend; } ;
struct ufs_hba {int dummy; } ;
typedef enum ufs_pm_op { ____Placeholder_ufs_pm_op } ufs_pm_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ufs_hisi_host*,int ,int ) ;
 int FUNC_2 (struct ufs_hisi_host*,int,int ) ;
 struct ufs_hisi_host* FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_4(struct ufs_hba *VAR_3, enum ufs_pm_op VAR_4)
{
 struct ufs_hisi_host *VAR_5 = FUNC_3(VAR_3);

 if (!VAR_5->in_suspend)
  return 0;


 FUNC_2(VAR_5, 0x00100010, VAR_2);
 FUNC_0(10);
 FUNC_1(VAR_5, VAR_0, VAR_1);

 VAR_5->in_suspend = 0;
 return 0;
}
