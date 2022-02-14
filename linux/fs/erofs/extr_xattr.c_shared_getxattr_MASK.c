
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_4__ {scalar_t__ blkaddr; int page; int kaddr; int ofs; } ;
struct getxattr_iter {int buffer_size; TYPE_1__ it; } ;
struct erofs_sb_info {int dummy; } ;
struct erofs_inode {unsigned int xattr_shared_count; int * xattr_shared_xattrs; } ;
typedef scalar_t__ erofs_blk_t ;


 int VAR_0 ;
 struct erofs_inode* FUNC_0 (struct inode*) ;
 struct erofs_sb_info* FUNC_1 (struct super_block* const) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block* const,scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct erofs_sb_info* const,int ) ;
 int FUNC_10 (struct erofs_sb_info* const,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2, struct getxattr_iter *VAR_3)
{
 struct erofs_inode *const VAR_4 = FUNC_0(VAR_2);
 struct super_block *const VAR_5 = VAR_2->i_sb;
 struct erofs_sb_info *const VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7;
 int VAR_8 = -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4->xattr_shared_count; ++VAR_7) {
  erofs_blk_t VAR_9 =
   FUNC_9(VAR_6, VAR_4->xattr_shared_xattrs[VAR_7]);

  VAR_3->it.ofs = FUNC_10(VAR_6, VAR_4->xattr_shared_xattrs[VAR_7]);

  if (!VAR_7 || VAR_9 != VAR_3->it.blkaddr) {
   if (VAR_7)
    FUNC_7(&VAR_3->it, 1);

   VAR_3->it.page = FUNC_4(VAR_5, VAR_9);
   if (FUNC_2(VAR_3->it.page))
    return FUNC_3(VAR_3->it.page);

   VAR_3->it.kaddr = FUNC_5(VAR_3->it.page);
   VAR_3->it.blkaddr = VAR_9;
  }

  VAR_8 = FUNC_6(&VAR_3->it, &VAR_1, ((void*)0));
  if (VAR_8 != -VAR_0)
   break;
 }
 if (VAR_4->xattr_shared_count)
  FUNC_8(&VAR_3->it);

 return VAR_8 ? VAR_8 : VAR_3->buffer_size;
}
