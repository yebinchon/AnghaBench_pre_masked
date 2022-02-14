
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ref_entry {scalar_t__ num_refs; int parent; } ;
struct btrfs_fs_info {int ref_verify_lock; } ;
struct block_entry {int refs; int num_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct block_entry*) ;
 int FUNC_1 (struct block_entry*) ;
 struct block_entry* FUNC_2 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,char*) ;
 scalar_t__ FUNC_4 (int *,struct ref_entry*) ;
 int FUNC_5 (struct ref_entry*) ;
 struct ref_entry* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct btrfs_fs_info *VAR_3,
          u64 VAR_4, u32 VAR_5, u64 VAR_6,
          u64 VAR_7)
{
 struct block_entry *VAR_8;
 struct ref_entry *VAR_9;

 VAR_9 = FUNC_6(sizeof(struct ref_entry), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_8 = FUNC_2(VAR_3, VAR_6, VAR_7, 0);
 if (FUNC_0(VAR_8)) {
  FUNC_5(VAR_9);
  return FUNC_1(VAR_8);
 }
 VAR_8->num_refs += VAR_5;

 VAR_9->parent = VAR_4;
 VAR_9->num_refs = VAR_5;
 if (FUNC_4(&VAR_8->refs, VAR_9)) {
  FUNC_7(&VAR_3->ref_verify_lock);
  FUNC_3(VAR_3, "existing shared ref when reading from disk?");
  FUNC_5(VAR_9);
  return -VAR_0;
 }
 FUNC_7(&VAR_3->ref_verify_lock);
 return 0;
}
