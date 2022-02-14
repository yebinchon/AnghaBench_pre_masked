
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* vops; } ;
typedef enum ufs_notify_change_status { ____Placeholder_ufs_notify_change_status } ufs_notify_change_status ;
struct TYPE_2__ {int (* clk_scale_notify ) (struct ufs_hba*,int,int) ;} ;


 int FUNC_0 (struct ufs_hba*,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct ufs_hba *VAR_0,
   bool VAR_1, enum ufs_notify_change_status VAR_2)
{
 if (VAR_0->vops && VAR_0->vops->clk_scale_notify)
  return VAR_0->vops->clk_scale_notify(VAR_0, VAR_1, VAR_2);
 return 0;
}
