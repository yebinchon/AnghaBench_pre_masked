
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_snapshot_list {int dummy; } ;
struct nilfs_cpfile_header {struct nilfs_snapshot_list ch_snapshot_list; } ;
struct nilfs_checkpoint {struct nilfs_snapshot_list cp_snapshot_list; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ __u64 ;


 struct nilfs_checkpoint* FUNC_0 (struct inode const*,scalar_t__,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_1 (struct inode const*,struct buffer_head*,void*) ;

__attribute__((used)) static struct nilfs_snapshot_list *
FUNC_2(const struct inode *VAR_0,
         __u64 VAR_1,
         struct buffer_head *VAR_2,
         void *VAR_3)
{
 struct nilfs_cpfile_header *VAR_4;
 struct nilfs_checkpoint *VAR_5;
 struct nilfs_snapshot_list *VAR_6;

 if (VAR_1 != 0) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_6 = &VAR_5->cp_snapshot_list;
 } else {
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
  VAR_6 = &VAR_4->ch_snapshot_list;
 }
 return VAR_6;
}
