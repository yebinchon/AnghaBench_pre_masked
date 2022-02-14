
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* host; int ahit; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ufs_hba *VAR_1)
{
 unsigned long VAR_2;

 if (!FUNC_2(VAR_1) || !VAR_1->ahit)
  return;

 FUNC_0(VAR_1->host->host_lock, VAR_2);
 FUNC_3(VAR_1, VAR_1->ahit, VAR_0);
 FUNC_1(VAR_1->host->host_lock, VAR_2);
}
