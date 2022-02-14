
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {scalar_t__ blkaddr; int page; int kaddr; int ofs; } ;
struct listxattr_iter {int buffer_ofs; TYPE_1__ it; int dentry; } ;
struct inode {struct super_block* i_sb; } ;
struct erofs_sb_info {int dummy; } ;
struct erofs_inode {unsigned int xattr_shared_count; int * xattr_shared_xattrs; } ;
typedef scalar_t__ erofs_blk_t ;


 struct erofs_inode* FUNC_0 (struct inode* const) ;
 struct erofs_sb_info* FUNC_1 (struct super_block* const) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (struct super_block* const,scalar_t__) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (struct erofs_sb_info* const,int ) ;
 int FUNC_11 (struct erofs_sb_info* const,int ) ;

__attribute__((used)) static int FUNC_12(struct listxattr_iter *VAR_1)
{
 struct inode *const VAR_2 = FUNC_4(VAR_1->dentry);
 struct erofs_inode *const VAR_3 = FUNC_0(VAR_2);
 struct super_block *const VAR_4 = VAR_2->i_sb;
 struct erofs_sb_info *const VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3->xattr_shared_count; ++VAR_6) {
  erofs_blk_t VAR_8 =
   FUNC_10(VAR_5, VAR_3->xattr_shared_xattrs[VAR_6]);

  VAR_1->it.ofs = FUNC_11(VAR_5, VAR_3->xattr_shared_xattrs[VAR_6]);
  if (!VAR_6 || VAR_8 != VAR_1->it.blkaddr) {
   if (VAR_6)
    FUNC_8(&VAR_1->it, 1);

   VAR_1->it.page = FUNC_5(VAR_4, VAR_8);
   if (FUNC_2(VAR_1->it.page))
    return FUNC_3(VAR_1->it.page);

   VAR_1->it.kaddr = FUNC_6(VAR_1->it.page);
   VAR_1->it.blkaddr = VAR_8;
  }

  VAR_7 = FUNC_7(&VAR_1->it, &VAR_0, ((void*)0));
  if (VAR_7)
   break;
 }
 if (VAR_3->xattr_shared_count)
  FUNC_9(&VAR_1->it);

 return VAR_7 ? VAR_7 : VAR_1->buffer_ofs;
}
