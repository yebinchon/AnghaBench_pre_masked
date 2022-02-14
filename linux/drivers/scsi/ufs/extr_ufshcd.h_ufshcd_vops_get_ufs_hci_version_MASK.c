
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ufs_hba {TYPE_1__* vops; } ;
struct TYPE_2__ {int (* get_ufs_hci_version ) (struct ufs_hba*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (struct ufs_hba*,int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct ufs_hba *VAR_1)
{
 if (VAR_1->vops && VAR_1->vops->get_ufs_hci_version)
  return VAR_1->vops->get_ufs_hci_version(VAR_1);

 return FUNC_1(VAR_1, VAR_0);
}
