
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_iter {int page; int kaddr; int blkaddr; int ofs; } ;
struct inode {int i_sb; } ;
struct erofs_sb_info {int dummy; } ;
struct erofs_inode {unsigned int xattr_isize; unsigned int inode_isize; int nid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct erofs_inode* FUNC_1 (struct inode*) ;
 struct erofs_sb_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct erofs_sb_info* const,int ) ;
 unsigned int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct xattr_iter *VAR_1,
       struct inode *VAR_2)
{
 struct erofs_inode *const VAR_3 = FUNC_1(VAR_2);
 struct erofs_sb_info *const VAR_4 = FUNC_2(VAR_2->i_sb);
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_9(VAR_2);
 if (VAR_5 >= VAR_3->xattr_isize) {
  FUNC_0(VAR_5 > VAR_3->xattr_isize);
  return -VAR_0;
 }

 VAR_6 = VAR_3->inode_isize + VAR_5;

 VAR_1->blkaddr = FUNC_5(FUNC_8(VAR_4, VAR_3->nid) + VAR_6);
 VAR_1->ofs = FUNC_6(FUNC_8(VAR_4, VAR_3->nid) + VAR_6);

 VAR_1->page = FUNC_7(VAR_2->i_sb, VAR_1->blkaddr);
 if (FUNC_3(VAR_1->page))
  return FUNC_4(VAR_1->page);

 VAR_1->kaddr = FUNC_10(VAR_1->page);
 return VAR_3->xattr_isize - VAR_5;
}
