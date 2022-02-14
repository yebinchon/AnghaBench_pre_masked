
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; scalar_t__ i_size; TYPE_1__* i_sb; } ;
struct ext4_dir_entry_tail {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {unsigned int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (int *,struct inode*,int *) ;
 int FUNC_5 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*,struct ext4_dir_entry_2*,unsigned int,int,int ,int ) ;
 int FUNC_8 (struct buffer_head*,unsigned int) ;
 scalar_t__ FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int *,struct inode*,struct inode*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct inode*,int) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_2, struct inode *VAR_3,
        struct inode *VAR_4)
{
 struct buffer_head *VAR_5 = ((void*)0);
 struct ext4_dir_entry_2 *VAR_6;
 ext4_lblk_t VAR_7 = 0;
 unsigned int VAR_8 = VAR_3->i_sb->s_blocksize;
 int VAR_9 = 0;
 int VAR_10;

 if (FUNC_6(VAR_3->i_sb))
  VAR_9 = sizeof(struct ext4_dir_entry_tail);

 if (FUNC_9(VAR_4, VAR_1)) {
  VAR_10 = FUNC_10(VAR_2, VAR_3, VAR_4);
  if (VAR_10 < 0 && VAR_10 != -VAR_0)
   goto out;
  if (!VAR_10)
   goto out;
 }

 VAR_4->i_size = 0;
 VAR_5 = FUNC_4(VAR_2, VAR_4, &VAR_7);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);
 VAR_6 = (struct ext4_dir_entry_2 *)VAR_5->b_data;
 FUNC_7(VAR_4, VAR_6, VAR_8, VAR_9, VAR_3->i_ino, 0);
 FUNC_12(VAR_4, 2);
 if (VAR_9)
  FUNC_8(VAR_5, VAR_8);

 FUNC_0(VAR_5, "call ext4_handle_dirty_metadata");
 VAR_10 = FUNC_5(VAR_2, VAR_4, VAR_5);
 if (VAR_10)
  goto out;
 FUNC_11(VAR_5);
out:
 FUNC_3(VAR_5);
 return VAR_10;
}
