
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_dir_entry_2 {int rec_len; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*,int *,struct ext4_dir_entry_2*,struct buffer_head*,void*,int,unsigned int) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct inode *VAR_1, struct buffer_head *VAR_2, void *VAR_3,
        int VAR_4)
{
 struct ext4_dir_entry_2 *VAR_5;
 int VAR_6;
 unsigned int VAR_7 = 0;
 char *VAR_8;

 VAR_5 = (struct ext4_dir_entry_2 *)VAR_3;
 VAR_8 = VAR_3 + VAR_4;
 while ((char *) VAR_5 < VAR_8) {
  if (FUNC_0(VAR_1, ((void*)0), VAR_5, VAR_2,
      VAR_3, VAR_4, VAR_7))
   return -VAR_0;
  VAR_6 = FUNC_1(VAR_5->rec_len, VAR_4);
  VAR_5 = (struct ext4_dir_entry_2 *)((char *)VAR_5 + VAR_6);
  VAR_7 += VAR_6;
 }
 if ((char *) VAR_5 > VAR_8)
  return -VAR_0;

 return 0;
}
