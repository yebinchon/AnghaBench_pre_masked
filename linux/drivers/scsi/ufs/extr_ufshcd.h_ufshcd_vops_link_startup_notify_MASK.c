
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* vops; } ;
struct TYPE_2__ {int (* link_startup_notify ) (struct ufs_hba*,int) ;} ;


 int FUNC_0 (struct ufs_hba*,int) ;

__attribute__((used)) static inline int FUNC_1(struct ufs_hba *VAR_0,
      bool VAR_1)
{
 if (VAR_0->vops && VAR_0->vops->link_startup_notify)
  return VAR_0->vops->link_startup_notify(VAR_0, VAR_1);

 return 0;
}
