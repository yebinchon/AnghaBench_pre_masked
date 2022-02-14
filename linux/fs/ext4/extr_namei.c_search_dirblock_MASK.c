
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int b_data; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,int ,int ,struct inode*,struct ext4_filename*,unsigned int,struct ext4_dir_entry_2**) ;

__attribute__((used)) static inline int FUNC_1(struct buffer_head *VAR_0,
      struct inode *VAR_1,
      struct ext4_filename *VAR_2,
      unsigned int VAR_3,
      struct ext4_dir_entry_2 **VAR_4)
{
 return FUNC_0(VAR_0, VAR_0->b_data, VAR_1->i_sb->s_blocksize, VAR_1,
          VAR_2, VAR_3, VAR_4);
}
