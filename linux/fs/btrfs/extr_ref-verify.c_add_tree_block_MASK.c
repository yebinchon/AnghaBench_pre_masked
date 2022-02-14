
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct root_entry* u64 ;
struct root_entry {int num_refs; } ;
struct ref_entry {int owner; int num_refs; scalar_t__ offset; struct root_entry* parent; struct root_entry* root_objectid; } ;
struct btrfs_fs_info {int ref_verify_lock; int nodesize; } ;
struct block_entry {int from_disk; int metadata; int refs; int roots; int num_refs; } ;


 int FUNC_0 (struct root_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct block_entry*) ;
 int FUNC_2 (struct block_entry*) ;
 struct block_entry* FUNC_3 (struct btrfs_fs_info*,struct root_entry*,int ,struct root_entry*) ;
 struct ref_entry* FUNC_4 (int *,struct ref_entry*) ;
 int FUNC_5 (struct ref_entry*) ;
 struct ref_entry* FUNC_6 (int,int ) ;
 struct root_entry* FUNC_7 (int *,struct root_entry*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct btrfs_fs_info *VAR_2, u64 VAR_3,
     u64 VAR_4, u64 VAR_5, int VAR_6)
{
 struct block_entry *VAR_7;
 struct root_entry *VAR_8;
 struct ref_entry *VAR_9 = ((void*)0), *VAR_10;

 VAR_9 = FUNC_6(sizeof(struct ref_entry), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_4)
  VAR_9->root_objectid = 0;
 else
  VAR_9->root_objectid = VAR_3;
 VAR_9->parent = VAR_4;
 VAR_9->owner = VAR_6;
 VAR_9->offset = 0;
 VAR_9->num_refs = 1;

 VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_2->nodesize, VAR_3);
 if (FUNC_1(VAR_7)) {
  FUNC_5(VAR_9);
  return FUNC_2(VAR_7);
 }
 VAR_7->num_refs++;
 VAR_7->from_disk = 1;
 VAR_7->metadata = 1;

 if (!VAR_4) {
  FUNC_0(VAR_3);
  VAR_8 = FUNC_7(&VAR_7->roots, VAR_3);
  FUNC_0(VAR_8);
  VAR_8->num_refs++;
 }
 VAR_10 = FUNC_4(&VAR_7->refs, VAR_9);
 if (VAR_10) {
  VAR_10->num_refs++;
  FUNC_5(VAR_9);
 }
 FUNC_8(&VAR_2->ref_verify_lock);

 return 0;
}
