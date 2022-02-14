
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xattr_iter {scalar_t__ ofs; scalar_t__ kaddr; void* page; int blkaddr; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct erofs_xattr_ibody_header {unsigned int h_shared_count; } ;
struct erofs_sb_info {int dummy; } ;
struct erofs_inode {int xattr_isize; unsigned int xattr_shared_count; int flags; int * xattr_shared_xattrs; scalar_t__ inode_isize; int nid; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct erofs_inode* FUNC_1 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct erofs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_9 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct super_block*,char*,int,...) ;
 void* FUNC_9 (struct super_block*,int ) ;
 scalar_t__ FUNC_10 (struct erofs_sb_info*,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (unsigned int,int,int ) ;
 scalar_t__ FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (void*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (struct xattr_iter*,int) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_10)
{
 struct erofs_inode *const VAR_11 = FUNC_1(VAR_10);
 struct xattr_iter VAR_12;
 unsigned int VAR_13;
 struct erofs_xattr_ibody_header *VAR_14;
 struct super_block *VAR_15;
 struct erofs_sb_info *VAR_16;
 bool VAR_17;
 int VAR_18 = 0;


 if (FUNC_17(VAR_7, &VAR_11->flags))
  return 0;

 if (FUNC_18(&VAR_11->flags, VAR_6, VAR_9))
  return -VAR_4;


 if (FUNC_17(VAR_7, &VAR_11->flags))
  goto out_unlock;
 if (VAR_11->xattr_isize == sizeof(struct erofs_xattr_ibody_header)) {
  FUNC_8(VAR_10->i_sb,
     "xattr_isize %d of nid %llu is not supported yet",
     VAR_11->xattr_isize, VAR_11->nid);
  VAR_18 = -VAR_3;
  goto out_unlock;
 } else if (VAR_11->xattr_isize < sizeof(struct erofs_xattr_ibody_header)) {
  if (VAR_11->xattr_isize) {
   FUNC_8(VAR_10->i_sb,
      "bogus xattr ibody @ nid %llu", VAR_11->nid);
   FUNC_0(1);
   VAR_18 = -VAR_0;
   goto out_unlock;
  }
  VAR_18 = -VAR_1;
  goto out_unlock;
 }

 VAR_15 = VAR_10->i_sb;
 VAR_16 = FUNC_2(VAR_15);
 VAR_12.blkaddr = FUNC_6(FUNC_10(VAR_16, VAR_11->nid) + VAR_11->inode_isize);
 VAR_12.ofs = FUNC_7(FUNC_10(VAR_16, VAR_11->nid) + VAR_11->inode_isize);

 VAR_12.page = FUNC_9(VAR_15, VAR_12.blkaddr);
 if (FUNC_3(VAR_12.page)) {
  VAR_18 = FUNC_4(VAR_12.page);
  goto out_unlock;
 }


 VAR_12.kaddr = FUNC_13(VAR_12.page);
 VAR_17 = 0;

 VAR_14 = (struct erofs_xattr_ibody_header *)(VAR_12.kaddr + VAR_12.ofs);

 VAR_11->xattr_shared_count = VAR_14->h_shared_count;
 VAR_11->xattr_shared_xattrs = FUNC_12(VAR_11->xattr_shared_count,
      sizeof(uint), VAR_8);
 if (!VAR_11->xattr_shared_xattrs) {
  FUNC_19(&VAR_12, VAR_17);
  VAR_18 = -VAR_2;
  goto out_unlock;
 }


 VAR_12.ofs += sizeof(struct erofs_xattr_ibody_header);

 for (VAR_13 = 0; VAR_13 < VAR_11->xattr_shared_count; ++VAR_13) {
  if (VAR_12.ofs >= VAR_5) {

   FUNC_0(VAR_12.ofs != VAR_5);
   FUNC_19(&VAR_12, VAR_17);

   VAR_12.page = FUNC_9(VAR_15, ++VAR_12.blkaddr);
   if (FUNC_3(VAR_12.page)) {
    FUNC_11(VAR_11->xattr_shared_xattrs);
    VAR_11->xattr_shared_xattrs = ((void*)0);
    VAR_18 = FUNC_4(VAR_12.page);
    goto out_unlock;
   }

   VAR_12.kaddr = FUNC_14(VAR_12.page);
   VAR_17 = 1;
   VAR_12.ofs = 0;
  }
  VAR_11->xattr_shared_xattrs[VAR_13] =
   FUNC_15(*(__le32 *)(VAR_12.kaddr + VAR_12.ofs));
  VAR_12.ofs += sizeof(__le32);
 }
 FUNC_19(&VAR_12, VAR_17);

 FUNC_16(VAR_7, &VAR_11->flags);

out_unlock:
 FUNC_5(VAR_6, &VAR_11->flags);
 return VAR_18;
}
