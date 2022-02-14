
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* host; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct ufs_hba *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(VAR_0->host->host_lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->host->host_lock, VAR_1);
}
