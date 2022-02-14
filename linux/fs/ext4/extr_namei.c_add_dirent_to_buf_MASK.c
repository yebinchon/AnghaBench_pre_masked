
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; int i_ctime; int i_mtime; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_tail {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
struct TYPE_3__ {unsigned int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct inode*,struct buffer_head*,int ,unsigned int,struct ext4_filename*,struct ext4_dir_entry_2**) ;
 int FUNC_3 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct inode*,struct ext4_dir_entry_2*,unsigned int,struct ext4_filename*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static int FUNC_11(handle_t *VAR_0, struct ext4_filename *VAR_1,
        struct inode *VAR_2,
        struct inode *VAR_3, struct ext4_dir_entry_2 *VAR_4,
        struct buffer_head *VAR_5)
{
 unsigned int VAR_6 = VAR_2->i_sb->s_blocksize;
 int VAR_7 = 0;
 int VAR_8;

 if (FUNC_4(VAR_3->i_sb))
  VAR_7 = sizeof(struct ext4_dir_entry_tail);

 if (!VAR_4) {
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_5->b_data,
     VAR_6 - VAR_7, VAR_1, &VAR_4);
  if (VAR_8)
   return VAR_8;
 }
 FUNC_0(VAR_5, "get_write_access");
 VAR_8 = FUNC_6(VAR_0, VAR_5);
 if (VAR_8) {
  FUNC_8(VAR_2->i_sb, VAR_8);
  return VAR_8;
 }


 FUNC_5(VAR_3, VAR_4, VAR_6, VAR_1);
 VAR_2->i_mtime = VAR_2->i_ctime = FUNC_1(VAR_2);
 FUNC_9(VAR_2);
 FUNC_10(VAR_2);
 FUNC_7(VAR_0, VAR_2);
 FUNC_0(VAR_5, "call ext4_handle_dirty_metadata");
 VAR_8 = FUNC_3(VAR_0, VAR_2, VAR_5);
 if (VAR_8)
  FUNC_8(VAR_2->i_sb, VAR_8);
 return 0;
}
