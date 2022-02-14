
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {int name_len; int rec_len; } ;
struct buffer_head {int b_size; int b_data; } ;
struct TYPE_2__ {int s_blocksize; } ;


 scalar_t__ FUNC_0 (struct inode*,int *,struct ext4_dir_entry_2*,struct buffer_head*,int ,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct inode*,struct ext4_filename*,struct ext4_dir_entry_2*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct buffer_head *VAR_0, char *VAR_1, int VAR_2,
      struct inode *VAR_3, struct ext4_filename *VAR_4,
      unsigned int VAR_5, struct ext4_dir_entry_2 **VAR_6)
{
 struct ext4_dir_entry_2 * VAR_7;
 char * VAR_8;
 int VAR_9;

 VAR_7 = (struct ext4_dir_entry_2 *)VAR_1;
 VAR_8 = VAR_1 + VAR_2;
 while ((char *) VAR_7 < VAR_8) {


  if ((char *) VAR_7 + VAR_7->name_len <= VAR_8 &&
      FUNC_1(VAR_3, VAR_4, VAR_7)) {


   if (FUNC_0(VAR_3, ((void*)0), VAR_7, VAR_0, VAR_0->b_data,
       VAR_0->b_size, VAR_5))
    return -1;
   *VAR_6 = VAR_7;
   return 1;
  }

  VAR_9 = FUNC_2(VAR_7->rec_len,
      VAR_3->i_sb->s_blocksize);
  if (VAR_9 <= 0)
   return -1;
  VAR_5 += VAR_9;
  VAR_7 = (struct ext4_dir_entry_2 *) ((char *) VAR_7 + VAR_9);
 }
 return 0;
}
