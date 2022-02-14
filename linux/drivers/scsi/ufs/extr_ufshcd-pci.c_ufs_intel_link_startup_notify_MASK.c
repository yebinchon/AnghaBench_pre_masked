
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dummy; } ;
typedef enum ufs_notify_change_status { ____Placeholder_ufs_notify_change_status } ufs_notify_change_status ;




 int FUNC_0 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_0,
      enum ufs_notify_change_status VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 128:
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 129:
  break;
 default:
  break;
 }

 return VAR_2;
}
