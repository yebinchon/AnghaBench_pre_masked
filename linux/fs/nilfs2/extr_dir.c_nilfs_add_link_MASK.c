
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int mapping; } ;
struct nilfs_dir_entry {scalar_t__ rec_len; int name_len; scalar_t__ inode; int name; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; int i_sb; } ;
struct TYPE_2__ {unsigned char* name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 void* FUNC_2 (int) ;
 unsigned int VAR_3 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (int ) ;
 unsigned long FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,unsigned char const*,int) ;
 unsigned int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*,int ,unsigned int,unsigned int) ;
 int FUNC_12 (int ,char*) ;
 struct page* FUNC_13 (struct inode*,unsigned long) ;
 int FUNC_14 (struct inode*,unsigned long) ;
 int FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (int,unsigned char const*,struct nilfs_dir_entry*) ;
 int FUNC_17 (struct page*,unsigned int,unsigned int) ;
 int FUNC_18 (struct page*) ;
 unsigned short FUNC_19 (scalar_t__) ;
 void* FUNC_20 (unsigned short) ;
 int FUNC_21 (struct nilfs_dir_entry*,struct inode*) ;
 char* FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;

int FUNC_24(struct dentry *VAR_4, struct inode *VAR_5)
{
 struct inode *VAR_6 = FUNC_6(VAR_4->d_parent);
 const unsigned char *VAR_7 = VAR_4->d_name.name;
 int VAR_8 = VAR_4->d_name.len;
 unsigned int VAR_9 = FUNC_10(VAR_6);
 unsigned int VAR_10 = FUNC_2(VAR_8);
 unsigned short VAR_11, VAR_12;
 struct page *VAR_13 = ((void*)0);
 struct nilfs_dir_entry *VAR_14;
 unsigned long VAR_15 = FUNC_7(VAR_6);
 unsigned long VAR_16;
 char *VAR_17;
 unsigned int VAR_18, VAR_19;
 int VAR_20;






 for (VAR_16 = 0; VAR_16 <= VAR_15; VAR_16++) {
  char *VAR_21;

  VAR_13 = FUNC_13(VAR_6, VAR_16);
  VAR_20 = FUNC_3(VAR_13);
  if (FUNC_1(VAR_13))
   goto out;
  FUNC_8(VAR_13);
  VAR_17 = FUNC_22(VAR_13);
  VAR_21 = VAR_17 + FUNC_14(VAR_6, VAR_16);
  VAR_14 = (struct nilfs_dir_entry *)VAR_17;
  VAR_17 += VAR_3 - VAR_10;
  while ((char *)VAR_14 <= VAR_17) {
   if ((char *)VAR_14 == VAR_21) {

    VAR_12 = 0;
    VAR_11 = VAR_9;
    VAR_14->rec_len = FUNC_20(VAR_9);
    VAR_14->inode = 0;
    goto got_it;
   }
   if (VAR_14->rec_len == 0) {
    FUNC_12(VAR_6->i_sb,
         "zero-length directory entry");
    VAR_20 = -VAR_2;
    goto out_unlock;
   }
   VAR_20 = -VAR_0;
   if (FUNC_16(VAR_8, VAR_7, VAR_14))
    goto out_unlock;
   VAR_12 = FUNC_2(VAR_14->name_len);
   VAR_11 = FUNC_19(VAR_14->rec_len);
   if (!VAR_14->inode && VAR_11 >= VAR_10)
    goto got_it;
   if (VAR_11 >= VAR_12 + VAR_10)
    goto got_it;
   VAR_14 = (struct nilfs_dir_entry *)((char *)VAR_14 + VAR_11);
  }
  FUNC_23(VAR_13);
  FUNC_18(VAR_13);
 }
 FUNC_0();
 return -VAR_1;

got_it:
 VAR_18 = (char *)VAR_14 - (char *)FUNC_22(VAR_13);
 VAR_19 = VAR_18 + VAR_11;
 VAR_20 = FUNC_17(VAR_13, VAR_18, VAR_19);
 if (VAR_20)
  goto out_unlock;
 if (VAR_14->inode) {
  struct nilfs_dir_entry *VAR_22;

  VAR_22 = (struct nilfs_dir_entry *)((char *)VAR_14 + VAR_12);
  VAR_22->rec_len = FUNC_20(VAR_11 - VAR_12);
  VAR_14->rec_len = FUNC_20(VAR_12);
  VAR_14 = VAR_22;
 }
 VAR_14->name_len = VAR_8;
 FUNC_9(VAR_14->name, VAR_7, VAR_8);
 VAR_14->inode = FUNC_4(VAR_5->i_ino);
 FUNC_21(VAR_14, VAR_5);
 FUNC_11(VAR_13, VAR_13->mapping, VAR_18, VAR_19);
 VAR_6->i_mtime = VAR_6->i_ctime = FUNC_5(VAR_6);
 FUNC_15(VAR_6);

out_put:
 FUNC_18(VAR_13);
out:
 return VAR_20;
out_unlock:
 FUNC_23(VAR_13);
 goto out_put;
}
