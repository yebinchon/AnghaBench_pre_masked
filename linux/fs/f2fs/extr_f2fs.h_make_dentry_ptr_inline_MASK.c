
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_dentry_ptr {int max; int nr_bitmap; void* filename; void* dentry; void* bitmap; struct inode* inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_3(struct inode *VAR_1,
     struct f2fs_dentry_ptr *VAR_2, void *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = FUNC_1(VAR_1);

 VAR_2->inode = VAR_1;
 VAR_2->max = VAR_4;
 VAR_2->nr_bitmap = VAR_5;
 VAR_2->bitmap = VAR_3;
 VAR_2->dentry = VAR_3 + VAR_5 + VAR_6;
 VAR_2->filename = VAR_3 + VAR_5 + VAR_6 +
     VAR_0 * VAR_4;
}
