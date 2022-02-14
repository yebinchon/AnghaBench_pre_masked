
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_dentry_ptr {int filename; int dentry; int bitmap; int nr_bitmap; int max; struct inode* inode; } ;
struct f2fs_dentry_block {int filename; int dentry; int dentry_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct inode *VAR_2,
  struct f2fs_dentry_ptr *VAR_3, struct f2fs_dentry_block *VAR_4)
{
 VAR_3->inode = VAR_2;
 VAR_3->max = VAR_0;
 VAR_3->nr_bitmap = VAR_1;
 VAR_3->bitmap = VAR_4->dentry_bitmap;
 VAR_3->dentry = VAR_4->dentry;
 VAR_3->filename = VAR_4->filename;
}
