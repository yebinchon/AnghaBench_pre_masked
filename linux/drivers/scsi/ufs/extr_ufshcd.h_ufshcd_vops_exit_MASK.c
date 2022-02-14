
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* vops; } ;
struct TYPE_2__ {void (* exit ) (struct ufs_hba*) ;} ;


 void FUNC_0 (struct ufs_hba*) ;

__attribute__((used)) static inline void FUNC_1(struct ufs_hba *VAR_0)
{
 if (VAR_0->vops && VAR_0->vops->exit)
  return VAR_0->vops->exit(VAR_0);
}
