
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; } ;
struct cifsLockInfo {TYPE_2__ blist; int block_q; TYPE_2__ llist; int flags; int type; int length; int offset; } ;
struct cifsInodeInfo {int lock_sem; scalar_t__ can_cache_brlcks; } ;
struct cifsFileInfo {TYPE_1__* llist; int dentry; } ;
struct TYPE_5__ {TYPE_2__ locks; } ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cifsFileInfo*,int ,int ,int ,int ,struct cifsLockInfo**,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(struct cifsFileInfo *VAR_2, struct cifsLockInfo *VAR_3,
   bool VAR_4)
{
 struct cifsLockInfo *VAR_5;
 struct cifsInodeInfo *VAR_6 = FUNC_0(FUNC_3(VAR_2->dentry));
 bool VAR_7;
 int VAR_8 = 0;

try_again:
 VAR_7 = 0;
 FUNC_1(&VAR_6->lock_sem);

 VAR_7 = FUNC_2(VAR_2, VAR_3->offset, VAR_3->length,
     VAR_3->type, VAR_3->flags, &VAR_5,
     VAR_0);
 if (!VAR_7 && VAR_6->can_cache_brlcks) {
  FUNC_4(&VAR_3->llist, &VAR_2->llist->locks);
  FUNC_6(&VAR_6->lock_sem);
  return VAR_8;
 }

 if (!VAR_7)
  VAR_8 = 1;
 else if (!VAR_4)
  VAR_8 = -VAR_1;
 else {
  FUNC_4(&VAR_3->blist, &VAR_5->blist);
  FUNC_6(&VAR_6->lock_sem);
  VAR_8 = FUNC_7(VAR_3->block_q,
     (VAR_3->blist.prev == &VAR_3->blist) &&
     (VAR_3->blist.next == &VAR_3->blist));
  if (!VAR_8)
   goto try_again;
  FUNC_1(&VAR_6->lock_sem);
  FUNC_5(&VAR_3->blist);
 }

 FUNC_6(&VAR_6->lock_sem);
 return VAR_8;
}
