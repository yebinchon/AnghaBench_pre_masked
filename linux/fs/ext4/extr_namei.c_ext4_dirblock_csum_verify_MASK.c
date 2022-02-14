
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_dir_entry_tail {scalar_t__ det_checksum; } ;
struct buffer_head {int b_data; } ;


 scalar_t__ FUNC_0 (struct inode*,int,char*) ;
 int FUNC_1 (int ) ;
 struct ext4_dir_entry_tail* FUNC_2 (struct inode*,struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_0, struct buffer_head *VAR_1)
{
 struct ext4_dir_entry_tail *VAR_2;

 if (!FUNC_1(VAR_0->i_sb))
  return 1;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_3(VAR_0);
  return 0;
 }

 if (VAR_2->det_checksum != FUNC_0(VAR_0, VAR_1->b_data,
        (char *)VAR_2 - VAR_1->b_data))
  return 0;

 return 1;
}
