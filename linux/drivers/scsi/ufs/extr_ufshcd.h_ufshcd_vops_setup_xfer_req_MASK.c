
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* vops; } ;
struct TYPE_2__ {void (* setup_xfer_req ) (struct ufs_hba*,int,int) ;} ;


 void FUNC_0 (struct ufs_hba*,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct ufs_hba *VAR_0, int VAR_1,
     bool VAR_2)
{
 if (VAR_0->vops && VAR_0->vops->setup_xfer_req)
  return VAR_0->vops->setup_xfer_req(VAR_0, VAR_1, VAR_2);
}
