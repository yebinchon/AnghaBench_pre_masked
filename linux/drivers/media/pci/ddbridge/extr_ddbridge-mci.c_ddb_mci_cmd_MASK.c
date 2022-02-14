
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mci_result {int dummy; } ;
struct mci_command {int dummy; } ;
struct mci {TYPE_1__* base; } ;
struct TYPE_2__ {int mci_lock; } ;


 int FUNC_0 (struct mci*,int *,int,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mci *VAR_0,
  struct mci_command *VAR_1,
  struct mci_result *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->base->mci_lock);
 VAR_3 = FUNC_0(VAR_0,
     (u32 *)VAR_1, sizeof(*VAR_1) / sizeof(u32),
     (u32 *)VAR_2, sizeof(*VAR_2) / sizeof(u32));
 FUNC_2(&VAR_0->base->mci_lock);
 return VAR_3;
}
