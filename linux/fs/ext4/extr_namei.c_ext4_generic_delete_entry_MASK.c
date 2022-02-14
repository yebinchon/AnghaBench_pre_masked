
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_dir_entry_2 {int rec_len; scalar_t__ inode; } ;
struct buffer_head {int b_size; int b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {unsigned int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*,int *,struct ext4_dir_entry_2*,struct buffer_head*,int ,int ,int) ;
 struct ext4_dir_entry_2* FUNC_1 (struct ext4_dir_entry_2*,unsigned int) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int FUNC_4 (struct inode*) ;

int FUNC_5(handle_t *VAR_2,
         struct inode *VAR_3,
         struct ext4_dir_entry_2 *VAR_4,
         struct buffer_head *VAR_5,
         void *VAR_6,
         int VAR_7,
         int VAR_8)
{
 struct ext4_dir_entry_2 *VAR_9, *VAR_10;
 unsigned int VAR_11 = VAR_3->i_sb->s_blocksize;
 int VAR_12;

 VAR_12 = 0;
 VAR_10 = ((void*)0);
 VAR_9 = (struct ext4_dir_entry_2 *)VAR_6;
 while (VAR_12 < VAR_7 - VAR_8) {
  if (FUNC_0(VAR_3, ((void*)0), VAR_9, VAR_5,
      VAR_5->b_data, VAR_5->b_size, VAR_12))
   return -VAR_0;
  if (VAR_9 == VAR_4) {
   if (VAR_10)
    VAR_10->rec_len = FUNC_3(
     FUNC_2(VAR_10->rec_len,
              VAR_11) +
     FUNC_2(VAR_9->rec_len,
              VAR_11),
     VAR_11);
   else
    VAR_9->inode = 0;
   FUNC_4(VAR_3);
   return 0;
  }
  VAR_12 += FUNC_2(VAR_9->rec_len, VAR_11);
  VAR_10 = VAR_9;
  VAR_9 = FUNC_1(VAR_9, VAR_11);
 }
 return -VAR_1;
}
