
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_pa_layer_attr {int dummy; } ;
struct ufs_hba {int dummy; } ;
typedef enum ufs_notify_change_status { ____Placeholder_ufs_notify_change_status } ufs_notify_change_status ;


 int VAR_0 ;


 int FUNC_0 (struct ufs_hba*,struct ufs_pa_layer_attr*,struct ufs_pa_layer_attr*) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_1,
         enum ufs_notify_change_status VAR_2,
         struct ufs_pa_layer_attr *VAR_3,
         struct ufs_pa_layer_attr *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_0(VAR_1, VAR_3,
          VAR_4);
  break;
 case 129:
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
