
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct root_entry {void* roots; int actions; void* refs; scalar_t__ from_disk; scalar_t__ metadata; scalar_t__ num_refs; void* root_objectid; void* len; void* bytenr; } ;
struct btrfs_fs_info {int block_tree; int ref_verify_lock; } ;
struct block_entry {void* roots; int actions; void* refs; scalar_t__ from_disk; scalar_t__ metadata; scalar_t__ num_refs; void* root_objectid; void* len; void* bytenr; } ;


 int VAR_0 ;
 struct root_entry* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 void* VAR_2 ;
 struct root_entry* FUNC_2 (int *,struct root_entry*) ;
 struct root_entry* FUNC_3 (void**,struct root_entry*) ;
 int FUNC_4 (struct root_entry*) ;
 struct root_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct block_entry *FUNC_7(struct btrfs_fs_info *VAR_3,
        u64 VAR_4, u64 VAR_5,
        u64 VAR_6)
{
 struct block_entry *VAR_7 = ((void*)0), *VAR_8;
 struct root_entry *VAR_9 = ((void*)0);

 VAR_9 = FUNC_5(sizeof(struct root_entry), VAR_1);
 VAR_7 = FUNC_5(sizeof(struct block_entry), VAR_1);
 if (!VAR_7 || !VAR_9) {
  FUNC_4(VAR_9);
  FUNC_4(VAR_7);
  return FUNC_0(-VAR_0);
 }
 VAR_7->bytenr = VAR_4;
 VAR_7->len = VAR_5;

 VAR_9->root_objectid = VAR_6;
 VAR_9->num_refs = 0;

 FUNC_6(&VAR_3->ref_verify_lock);
 VAR_8 = FUNC_2(&VAR_3->block_tree, VAR_7);
 if (VAR_8) {
  if (VAR_6) {
   struct root_entry *VAR_10;

   VAR_10 = FUNC_3(&VAR_8->roots, VAR_9);
   if (VAR_10)
    FUNC_4(VAR_9);
  }
  FUNC_4(VAR_7);
  return VAR_8;
 }

 VAR_7->num_refs = 0;
 VAR_7->metadata = 0;
 VAR_7->from_disk = 0;
 VAR_7->roots = VAR_2;
 VAR_7->refs = VAR_2;
 FUNC_1(&VAR_7->actions);
 if (VAR_6)
  FUNC_3(&VAR_7->roots, VAR_9);
 else
  FUNC_4(VAR_9);
 return VAR_7;
}
