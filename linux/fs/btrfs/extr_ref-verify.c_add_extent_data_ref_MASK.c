
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef scalar_t__ u32 ;
struct root_entry {int num_refs; } ;
struct ref_entry {scalar_t__ num_refs; void* offset; void* root_objectid; void* owner; scalar_t__ parent; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int ref_verify_lock; } ;
struct btrfs_extent_data_ref {int dummy; } ;
struct block_entry {int roots; int refs; int num_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct block_entry*) ;
 int FUNC_1 (struct block_entry*) ;
 struct block_entry* FUNC_2 (struct btrfs_fs_info*,void*,void*,void*) ;
 int FUNC_3 (struct btrfs_fs_info*,char*) ;
 scalar_t__ FUNC_4 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 void* FUNC_5 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 void* FUNC_6 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 void* FUNC_7 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 scalar_t__ FUNC_8 (int *,struct ref_entry*) ;
 int FUNC_9 (struct ref_entry*) ;
 struct ref_entry* FUNC_10 (int,int ) ;
 struct root_entry* FUNC_11 (int *,void*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct btrfs_fs_info *VAR_3,
          struct extent_buffer *VAR_4,
          struct btrfs_extent_data_ref *VAR_5,
          u64 VAR_6, u64 VAR_7)
{
 struct block_entry *VAR_8;
 struct ref_entry *VAR_9;
 struct root_entry *VAR_10;
 u64 VAR_11 = FUNC_7(VAR_4, VAR_5);
 u64 VAR_12 = FUNC_5(VAR_4, VAR_5);
 u64 VAR_13 = FUNC_6(VAR_4, VAR_5);
 u32 VAR_14 = FUNC_4(VAR_4, VAR_5);

 VAR_9 = FUNC_10(sizeof(struct ref_entry), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_8 = FUNC_2(VAR_3, VAR_6, VAR_7, VAR_11);
 if (FUNC_0(VAR_8)) {
  FUNC_9(VAR_9);
  return FUNC_1(VAR_8);
 }
 VAR_8->num_refs += VAR_14;

 VAR_9->parent = 0;
 VAR_9->owner = VAR_12;
 VAR_9->root_objectid = VAR_11;
 VAR_9->offset = VAR_13;
 VAR_9->num_refs = VAR_14;
 if (FUNC_8(&VAR_8->refs, VAR_9)) {
  FUNC_12(&VAR_3->ref_verify_lock);
  FUNC_3(VAR_3, "existing ref when reading from disk?");
  FUNC_9(VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_11(&VAR_8->roots, VAR_11);
 if (!VAR_10) {
  FUNC_12(&VAR_3->ref_verify_lock);
  FUNC_3(VAR_3, "missing root in new block entry?");
  return -VAR_0;
 }
 VAR_10->num_refs += VAR_14;
 FUNC_12(&VAR_3->ref_verify_lock);
 return 0;
}
