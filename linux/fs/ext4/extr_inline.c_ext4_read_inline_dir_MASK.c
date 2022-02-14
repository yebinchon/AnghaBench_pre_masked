
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct file {int f_version; } ;
struct ext4_iloc {int bh; } ;
struct ext4_dir_entry_2 {char* name; int name_len; int rec_len; int file_type; int inode; } ;
struct dir_context {unsigned int pos; } ;
struct TYPE_2__ {int xattr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dir_context*,char*,int,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct inode*,struct file*,struct ext4_dir_entry_2*,int ,void*,int,void*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct ext4_iloc*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,void*,int,struct ext4_iloc*) ;
 int FUNC_10 (int ,int) ;
 struct inode* FUNC_11 (struct file*) ;
 int FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (void*) ;
 void* FUNC_16 (int,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct file *VAR_4,
    struct dir_context *VAR_5,
    int *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 int VAR_9;
 struct ext4_dir_entry_2 *VAR_10;
 struct super_block *VAR_11;
 struct inode *VAR_12 = FUNC_11(VAR_4);
 int VAR_13, VAR_14 = 0;
 struct ext4_iloc VAR_15;
 void *VAR_16 = ((void*)0);
 int VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_13 = FUNC_7(VAR_12, &VAR_15);
 if (VAR_13)
  return VAR_13;

 FUNC_4(&FUNC_1(VAR_12)->xattr_sem);
 if (!FUNC_8(VAR_12)) {
  FUNC_18(&FUNC_1(VAR_12)->xattr_sem);
  *VAR_6 = 0;
  goto out;
 }

 VAR_14 = FUNC_6(VAR_12);
 VAR_16 = FUNC_16(VAR_14, VAR_3);
 if (!VAR_16) {
  VAR_13 = -VAR_1;
  FUNC_18(&FUNC_1(VAR_12)->xattr_sem);
  goto out;
 }

 VAR_13 = FUNC_9(VAR_12, VAR_16, VAR_14, &VAR_15);
 FUNC_18(&FUNC_1(VAR_12)->xattr_sem);
 if (VAR_13 < 0)
  goto out;

 VAR_13 = 0;
 VAR_11 = VAR_12->i_sb;
 VAR_8 = FUNC_17(((struct ext4_dir_entry_2 *)VAR_16)->inode);
 VAR_7 = VAR_5->pos;
 VAR_17 = FUNC_0(1);
 VAR_18 = VAR_17 + FUNC_0(2);
 VAR_19 = VAR_18 - VAR_2;
 VAR_20 = VAR_19 + VAR_14;







 if (!FUNC_13(VAR_12, VAR_4->f_version)) {
  for (VAR_9 = 0; VAR_9 < VAR_20 && VAR_9 < VAR_7;) {




   if (!VAR_9) {
    VAR_9 = VAR_17;
    continue;
   } else if (VAR_9 == VAR_17) {
    VAR_9 = VAR_18;
    continue;
   }



   VAR_10 = (struct ext4_dir_entry_2 *)
    (VAR_16 + VAR_9 - VAR_19);






   if (FUNC_10(VAR_10->rec_len, VAR_20)
    < FUNC_0(1))
    break;
   VAR_9 += FUNC_10(VAR_10->rec_len,
          VAR_20);
  }
  VAR_7 = VAR_9;
  VAR_5->pos = VAR_7;
  VAR_4->f_version = FUNC_14(VAR_12);
 }

 while (VAR_5->pos < VAR_20) {
  if (VAR_5->pos == 0) {
   if (!FUNC_3(VAR_5, ".", 1, VAR_12->i_ino, VAR_0))
    goto out;
   VAR_5->pos = VAR_17;
   continue;
  }

  if (VAR_5->pos == VAR_17) {
   if (!FUNC_3(VAR_5, "..", 2, VAR_8, VAR_0))
    goto out;
   VAR_5->pos = VAR_18;
   continue;
  }

  VAR_10 = (struct ext4_dir_entry_2 *)
   (VAR_16 + VAR_5->pos - VAR_19);
  if (FUNC_5(VAR_12, VAR_4, VAR_10, VAR_15.bh, VAR_16,
      VAR_20, VAR_5->pos))
   goto out;
  if (FUNC_17(VAR_10->inode)) {
   if (!FUNC_3(VAR_5, VAR_10->name, VAR_10->name_len,
          FUNC_17(VAR_10->inode),
          FUNC_12(VAR_11, VAR_10->file_type)))
    goto out;
  }
  VAR_5->pos += FUNC_10(VAR_10->rec_len, VAR_20);
 }
out:
 FUNC_15(VAR_16);
 FUNC_2(VAR_15.bh);
 return VAR_13;
}
