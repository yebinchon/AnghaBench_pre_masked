
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_failure_record {int this_mirror; int failed_mirror; int len; int logical; } ;
struct inode {int i_sb; } ;
struct btrfs_fs_info {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct btrfs_fs_info*,char*,int,int,int) ;
 int FUNC_1 (struct btrfs_fs_info*,int ,int ) ;
 struct btrfs_fs_info* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
          struct bio *VAR_1,
          struct io_failure_record *VAR_2,
          int VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_2(VAR_0->i_sb);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2->logical, VAR_2->len);
 if (VAR_5 == 1) {





  FUNC_0(VAR_4,
   "Check DIO Repairable: cannot repair, num_copies=%d, next_mirror %d, failed_mirror %d",
   VAR_5, VAR_2->this_mirror, VAR_3);
  return 0;
 }

 VAR_2->failed_mirror = VAR_3;
 VAR_2->this_mirror++;
 if (VAR_2->this_mirror == VAR_3)
  VAR_2->this_mirror++;

 if (VAR_2->this_mirror > VAR_5) {
  FUNC_0(VAR_4,
   "Check DIO Repairable: (fail) num_copies=%d, next_mirror %d, failed_mirror %d",
   VAR_5, VAR_2->this_mirror, VAR_3);
  return 0;
 }

 return 1;
}
