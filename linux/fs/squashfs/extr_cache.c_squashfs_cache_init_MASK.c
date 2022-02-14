
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_cache_entry {int * actor; int ** data; int block; struct squashfs_cache* cache; int wait_queue; } ;
struct squashfs_cache {int unused; int entries; int block_size; int pages; char* name; struct squashfs_cache_entry* entry; int wait_queue; int lock; scalar_t__ num_waiters; scalar_t__ next_blk; scalar_t__ curr_blk; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int,int ) ;
 int * FUNC_3 (int ,int ) ;
 struct squashfs_cache* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct squashfs_cache*) ;
 int * FUNC_7 (int **,int,int ) ;

struct squashfs_cache *FUNC_8(char *VAR_4, int VAR_5,
 int VAR_6)
{
 int VAR_7, VAR_8;
 struct squashfs_cache *VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_0);

 if (VAR_9 == ((void*)0)) {
  FUNC_0("Failed to allocate %s cache\n", VAR_4);
  return ((void*)0);
 }

 VAR_9->entry = FUNC_2(VAR_5, sizeof(*(VAR_9->entry)), VAR_0);
 if (VAR_9->entry == ((void*)0)) {
  FUNC_0("Failed to allocate %s cache\n", VAR_4);
  goto cleanup;
 }

 VAR_9->curr_blk = 0;
 VAR_9->next_blk = 0;
 VAR_9->unused = VAR_5;
 VAR_9->entries = VAR_5;
 VAR_9->block_size = VAR_6;
 VAR_9->pages = VAR_6 >> VAR_1;
 VAR_9->pages = VAR_9->pages ? VAR_9->pages : 1;
 VAR_9->name = VAR_4;
 VAR_9->num_waiters = 0;
 FUNC_5(&VAR_9->lock);
 FUNC_1(&VAR_9->wait_queue);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct squashfs_cache_entry *VAR_10 = &VAR_9->entry[VAR_7];

  FUNC_1(&VAR_9->entry[VAR_7].wait_queue);
  VAR_10->cache = VAR_9;
  VAR_10->block = VAR_3;
  VAR_10->data = FUNC_2(VAR_9->pages, sizeof(void *), VAR_0);
  if (VAR_10->data == ((void*)0)) {
   FUNC_0("Failed to allocate %s cache entry\n", VAR_4);
   goto cleanup;
  }

  for (VAR_8 = 0; VAR_8 < VAR_9->pages; VAR_8++) {
   VAR_10->data[VAR_8] = FUNC_3(VAR_2, VAR_0);
   if (VAR_10->data[VAR_8] == ((void*)0)) {
    FUNC_0("Failed to allocate %s buffer\n", VAR_4);
    goto cleanup;
   }
  }

  VAR_10->actor = FUNC_7(VAR_10->data,
      VAR_9->pages, 0);
  if (VAR_10->actor == ((void*)0)) {
   FUNC_0("Failed to allocate %s cache entry\n", VAR_4);
   goto cleanup;
  }
 }

 return VAR_9;

cleanup:
 FUNC_6(VAR_9);
 return ((void*)0);
}
