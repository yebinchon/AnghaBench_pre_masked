
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct squashfs_cache_entry {scalar_t__ block; scalar_t__ refcount; int pending; scalar_t__ error; scalar_t__ length; int wait_queue; scalar_t__ num_waiters; int actor; int next_index; } ;
struct squashfs_cache {int curr_blk; int entries; scalar_t__ unused; int next_blk; int name; int lock; struct squashfs_cache_entry* entry; int num_waiters; int wait_queue; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*,int ,int,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct super_block*,scalar_t__,int,int *,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

struct squashfs_cache_entry *FUNC_7(struct super_block *VAR_0,
 struct squashfs_cache *VAR_1, u64 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct squashfs_cache_entry *VAR_6;

 FUNC_2(&VAR_1->lock);

 while (1) {
  for (VAR_4 = VAR_1->curr_blk, VAR_5 = 0; VAR_5 < VAR_1->entries; VAR_5++) {
   if (VAR_1->entry[VAR_4].block == VAR_2) {
    VAR_1->curr_blk = VAR_4;
    break;
   }
   VAR_4 = (VAR_4 + 1) % VAR_1->entries;
  }

  if (VAR_5 == VAR_1->entries) {




   if (VAR_1->unused == 0) {
    VAR_1->num_waiters++;
    FUNC_3(&VAR_1->lock);
    FUNC_5(VAR_1->wait_queue, VAR_1->unused);
    FUNC_2(&VAR_1->lock);
    VAR_1->num_waiters--;
    continue;
   }






   VAR_4 = VAR_1->next_blk;
   for (VAR_5 = 0; VAR_5 < VAR_1->entries; VAR_5++) {
    if (VAR_1->entry[VAR_4].refcount == 0)
     break;
    VAR_4 = (VAR_4 + 1) % VAR_1->entries;
   }

   VAR_1->next_blk = (VAR_4 + 1) % VAR_1->entries;
   VAR_6 = &VAR_1->entry[VAR_4];





   VAR_1->unused--;
   VAR_6->block = VAR_2;
   VAR_6->refcount = 1;
   VAR_6->pending = 1;
   VAR_6->num_waiters = 0;
   VAR_6->error = 0;
   FUNC_3(&VAR_1->lock);

   VAR_6->length = FUNC_4(VAR_0, VAR_2, VAR_3,
    &VAR_6->next_index, VAR_6->actor);

   FUNC_2(&VAR_1->lock);

   if (VAR_6->length < 0)
    VAR_6->error = VAR_6->length;

   VAR_6->pending = 0;






   if (VAR_6->num_waiters) {
    FUNC_3(&VAR_1->lock);
    FUNC_6(&VAR_6->wait_queue);
   } else
    FUNC_3(&VAR_1->lock);

   goto out;
  }







  VAR_6 = &VAR_1->entry[VAR_4];
  if (VAR_6->refcount == 0)
   VAR_1->unused--;
  VAR_6->refcount++;





  if (VAR_6->pending) {
   VAR_6->num_waiters++;
   FUNC_3(&VAR_1->lock);
   FUNC_5(VAR_6->wait_queue, !VAR_6->pending);
  } else
   FUNC_3(&VAR_1->lock);

  goto out;
 }

out:
 FUNC_1("Got %s %d, start block %lld, refcount %d, error %d\n",
  VAR_1->name, VAR_4, VAR_6->block, VAR_6->refcount, VAR_6->error);

 if (VAR_6->error)
  FUNC_0("Unable to read %s cache entry [%llx]\n", VAR_1->name,
       VAR_2);
 return VAR_6;
}
