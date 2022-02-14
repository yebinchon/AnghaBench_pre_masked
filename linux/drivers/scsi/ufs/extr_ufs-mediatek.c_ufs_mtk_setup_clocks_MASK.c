
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_mtk_host {int mphy; } ;
struct ufs_hba {int dummy; } ;
typedef enum ufs_notify_change_status { ____Placeholder_ufs_notify_change_status } ufs_notify_change_status ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ufs_mtk_host* FUNC_2 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_3(struct ufs_hba *VAR_1, bool VAR_2,
    enum ufs_notify_change_status VAR_3)
{
 struct ufs_mtk_host *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = -VAR_0;






 if (!VAR_4)
  return 0;

 switch (VAR_3) {
 case 128:
  if (!VAR_2)
   VAR_5 = FUNC_0(VAR_4->mphy);
  break;
 case 129:
  if (VAR_2)
   VAR_5 = FUNC_1(VAR_4->mphy);
  break;
 }

 return VAR_5;
}
