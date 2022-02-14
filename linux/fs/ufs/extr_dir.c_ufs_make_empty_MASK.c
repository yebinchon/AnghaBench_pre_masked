
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ufs_dir_entry {int d_name; void* d_reclen; void* d_ino; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_mode; int i_ino; struct address_space* i_mapping; struct super_block* i_sb; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s_uspi; } ;
struct TYPE_3__ {unsigned int s_dirblksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 void* FUNC_2 (struct super_block*,scalar_t__) ;
 void* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,void*) ;
 struct page* FUNC_5 (struct address_space*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (char*,int ,int ) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct page*,int ,unsigned int const) ;
 int FUNC_13 (struct page*,int ,unsigned int const) ;
 int FUNC_14 (struct super_block*,struct ufs_dir_entry*,int) ;
 int FUNC_15 (struct super_block*,struct ufs_dir_entry*,int ) ;
 int FUNC_16 (struct page*) ;

int FUNC_17(struct inode * VAR_2, struct inode *VAR_3)
{
 struct super_block * VAR_4 = VAR_3->i_sb;
 struct address_space *VAR_5 = VAR_2->i_mapping;
 struct page *VAR_6 = FUNC_5(VAR_5, 0);
 const unsigned int VAR_7 = FUNC_1(VAR_4)->s_uspi->s_dirblksize;
 struct ufs_dir_entry * VAR_8;
 char *VAR_9;
 int VAR_10;

 if (!VAR_6)
  return -VAR_0;

 VAR_10 = FUNC_13(VAR_6, 0, VAR_7);
 if (VAR_10) {
  FUNC_16(VAR_6);
  goto fail;
 }

 FUNC_6(VAR_6);
 VAR_9 = (char*)FUNC_9(VAR_6);
 FUNC_8(VAR_9, 0, VAR_1);

 VAR_8 = (struct ufs_dir_entry *) VAR_9;

 VAR_8->d_ino = FUNC_3(VAR_4, VAR_2->i_ino);
 FUNC_15(VAR_4, VAR_8, VAR_2->i_mode);
 FUNC_14(VAR_4, VAR_8, 1);
 VAR_8->d_reclen = FUNC_2(VAR_4, FUNC_0(1));
 FUNC_11 (VAR_8->d_name, ".");
 VAR_8 = (struct ufs_dir_entry *)
  ((char *)VAR_8 + FUNC_4(VAR_4, VAR_8->d_reclen));
 VAR_8->d_ino = FUNC_3(VAR_4, VAR_3->i_ino);
 FUNC_15(VAR_4, VAR_8, VAR_3->i_mode);
 VAR_8->d_reclen = FUNC_2(VAR_4, VAR_7 - FUNC_0(1));
 FUNC_14(VAR_4, VAR_8, 2);
 FUNC_11 (VAR_8->d_name, "..");
 FUNC_7(VAR_6);

 VAR_10 = FUNC_12(VAR_6, 0, VAR_7);
fail:
 FUNC_10(VAR_6);
 return VAR_10;
}
