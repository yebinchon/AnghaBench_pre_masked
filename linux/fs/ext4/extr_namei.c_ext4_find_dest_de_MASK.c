
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {scalar_t__ inode; int rec_len; int name_len; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*,int *,struct ext4_dir_entry_2*,struct buffer_head*,void*,int,unsigned int) ;
 scalar_t__ FUNC_2 (struct inode*,struct ext4_filename*,struct ext4_dir_entry_2*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ext4_filename*) ;

int FUNC_5(struct inode *VAR_3, struct inode *VAR_4,
        struct buffer_head *VAR_5,
        void *VAR_6, int VAR_7,
        struct ext4_filename *VAR_8,
        struct ext4_dir_entry_2 **VAR_9)
{
 struct ext4_dir_entry_2 *VAR_10;
 unsigned short VAR_11 = FUNC_0(FUNC_4(VAR_8));
 int VAR_12, VAR_13;
 unsigned int VAR_14 = 0;
 char *VAR_15;

 VAR_10 = (struct ext4_dir_entry_2 *)VAR_6;
 VAR_15 = VAR_6 + VAR_7 - VAR_11;
 while ((char *) VAR_10 <= VAR_15) {
  if (FUNC_1(VAR_3, ((void*)0), VAR_10, VAR_5,
      VAR_6, VAR_7, VAR_14))
   return -VAR_1;
  if (FUNC_2(VAR_3, VAR_8, VAR_10))
   return -VAR_0;
  VAR_12 = FUNC_0(VAR_10->name_len);
  VAR_13 = FUNC_3(VAR_10->rec_len, VAR_7);
  if ((VAR_10->inode ? VAR_13 - VAR_12 : VAR_13) >= VAR_11)
   break;
  VAR_10 = (struct ext4_dir_entry_2 *)((char *)VAR_10 + VAR_13);
  VAR_14 += VAR_13;
 }
 if ((char *) VAR_10 > VAR_15)
  return -VAR_2;

 *VAR_9 = VAR_10;
 return 0;
}
