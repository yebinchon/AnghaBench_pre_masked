
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_mtk_host {int mphy; } ;
struct ufs_hba {int dummy; } ;
typedef enum ufs_pm_op { ____Placeholder_ufs_pm_op } ufs_pm_op ;


 int FUNC_0 (int ) ;
 struct ufs_mtk_host* FUNC_1 (struct ufs_hba*) ;
 scalar_t__ FUNC_2 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_3(struct ufs_hba *VAR_0, enum ufs_pm_op VAR_1)
{
 struct ufs_mtk_host *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_0))
  FUNC_0(VAR_2->mphy);

 return 0;
}
