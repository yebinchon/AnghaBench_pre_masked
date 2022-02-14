
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_cache_entry {scalar_t__ refcount; struct squashfs_cache* cache; } ;
struct squashfs_cache {int lock; int wait_queue; scalar_t__ num_waiters; int unused; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct squashfs_cache_entry *VAR_0)
{
 struct squashfs_cache *VAR_1 = VAR_0->cache;

 FUNC_0(&VAR_1->lock);
 VAR_0->refcount--;
 if (VAR_0->refcount == 0) {
  VAR_1->unused++;




  if (VAR_1->num_waiters) {
   FUNC_1(&VAR_1->lock);
   FUNC_2(&VAR_1->wait_queue);
   return;
  }
 }
 FUNC_1(&VAR_1->lock);
}
