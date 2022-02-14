
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct btrfs_io_ctl {int num_pages; int size; int * cur; int fs_info; scalar_t__ check_crcs; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (struct btrfs_io_ctl*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct btrfs_io_ctl *VAR_1, u64 VAR_2)
{
 __le64 *VAR_3;





 if (VAR_1->check_crcs) {
  VAR_1->cur += sizeof(u32) * VAR_1->num_pages;
  VAR_1->size -= sizeof(u64) +
   (sizeof(u32) * VAR_1->num_pages);
 } else {
  VAR_1->cur += sizeof(u64);
  VAR_1->size -= sizeof(u64) * 2;
 }

 VAR_3 = VAR_1->cur;
 if (FUNC_2(*VAR_3) != VAR_2) {
  FUNC_0(VAR_1->fs_info,
   "space cache generation (%llu) does not match inode (%llu)",
    *VAR_3, VAR_2);
  FUNC_1(VAR_1);
  return -VAR_0;
 }
 VAR_1->cur += sizeof(u64);
 return 0;
}
