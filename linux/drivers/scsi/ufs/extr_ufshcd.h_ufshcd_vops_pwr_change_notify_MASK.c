
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_pa_layer_attr {int dummy; } ;
struct ufs_hba {TYPE_1__* vops; } ;
struct TYPE_2__ {int (* pwr_change_notify ) (struct ufs_hba*,int,struct ufs_pa_layer_attr*,struct ufs_pa_layer_attr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*,int,struct ufs_pa_layer_attr*,struct ufs_pa_layer_attr*) ;

__attribute__((used)) static inline int FUNC_1(struct ufs_hba *VAR_1,
      bool VAR_2,
      struct ufs_pa_layer_attr *VAR_3,
      struct ufs_pa_layer_attr *VAR_4)
{
 if (VAR_1->vops && VAR_1->vops->pwr_change_notify)
  return VAR_1->vops->pwr_change_notify(VAR_1, VAR_2,
     VAR_3, VAR_4);

 return -VAR_0;
}
