
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ufs_hba {scalar_t__ ahit; TYPE_1__* host; int dev; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct ufs_hba *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 if (!FUNC_3(VAR_1))
  return;

 FUNC_1(VAR_1->host->host_lock, VAR_3);
 if (VAR_1->ahit == VAR_2)
  goto out_unlock;
 VAR_1->ahit = VAR_2;
 if (!FUNC_0(VAR_1->dev))
  FUNC_4(VAR_1, VAR_1->ahit, VAR_0);
out_unlock:
 FUNC_2(VAR_1->host->host_lock, VAR_3);
}
