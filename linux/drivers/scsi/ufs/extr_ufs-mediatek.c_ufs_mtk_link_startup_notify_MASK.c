
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dummy; } ;
typedef enum ufs_notify_change_status { ____Placeholder_ufs_notify_change_status } ufs_notify_change_status ;


 int VAR_0 ;


 int FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_2(struct ufs_hba *VAR_1,
           enum ufs_notify_change_status VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
 case 128:
  VAR_3 = FUNC_1(VAR_1);
  break;
 case 129:
  VAR_3 = FUNC_0(VAR_1);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
