
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_dir_entry_tail {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
struct TYPE_3__ {int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*,int*) ;
 int FUNC_2 (int *,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*,int ,int ,int) ;
 int FUNC_3 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_1,
        struct inode *VAR_2,
        struct ext4_dir_entry_2 *VAR_3,
        struct buffer_head *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (FUNC_4(VAR_2)) {
  int VAR_7 = 1;
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
            &VAR_7);
  if (VAR_7)
   return VAR_5;
 }

 if (FUNC_5(VAR_2->i_sb))
  VAR_6 = sizeof(struct ext4_dir_entry_tail);

 FUNC_0(VAR_4, "get_write_access");
 VAR_5 = FUNC_6(VAR_1, VAR_4);
 if (FUNC_8(VAR_5))
  goto out;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_4->b_data,
     VAR_2->i_sb->s_blocksize, VAR_6);
 if (VAR_5)
  goto out;

 FUNC_0(VAR_4, "call ext4_handle_dirty_metadata");
 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
 if (FUNC_8(VAR_5))
  goto out;

 return 0;
out:
 if (VAR_5 != -VAR_0)
  FUNC_7(VAR_2->i_sb, VAR_5);
 return VAR_5;
}
