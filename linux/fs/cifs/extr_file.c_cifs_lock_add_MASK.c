
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifsLockInfo {int llist; } ;
struct cifsInodeInfo {int lock_sem; } ;
struct cifsFileInfo {TYPE_1__* llist; int dentry; } ;
struct TYPE_2__ {int locks; } ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct cifsFileInfo *VAR_0, struct cifsLockInfo *VAR_1)
{
 struct cifsInodeInfo *VAR_2 = FUNC_0(FUNC_2(VAR_0->dentry));
 FUNC_1(&VAR_2->lock_sem);
 FUNC_3(&VAR_1->llist, &VAR_0->llist->locks);
 FUNC_4(&VAR_2->lock_sem);
}
