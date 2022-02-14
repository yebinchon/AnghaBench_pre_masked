
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {unsigned long len; int offs; int lnum; } ;
struct ubifs_ino_node {int dummy; } ;
struct ubifs_info {int dummy; } ;
struct fsck_inode {int dummy; } ;
struct fsck_data {int dummy; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsck_inode* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fsck_inode*) ;
 unsigned long FUNC_2 (struct fsck_inode*) ;
 unsigned long VAR_4 ;
 struct fsck_inode* FUNC_3 (struct ubifs_info*,struct fsck_data*,struct ubifs_ino_node*) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key*,scalar_t__) ;
 int FUNC_5 (struct ubifs_ino_node*) ;
 struct ubifs_ino_node* FUNC_6 (unsigned long,int ) ;
 struct fsck_inode* FUNC_7 (struct fsck_data*,scalar_t__) ;
 int FUNC_8 (struct ubifs_info*,char*,unsigned long,...) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_ino_node*) ;

__attribute__((used)) static struct fsck_inode *FUNC_11(struct ubifs_info *VAR_5,
      struct fsck_data *VAR_6, ino_t VAR_7)
{
 int VAR_8, VAR_9;
 union ubifs_key VAR_10;
 struct ubifs_znode *VAR_11;
 struct ubifs_zbranch *VAR_12;
 struct ubifs_ino_node *VAR_13;
 struct fsck_inode *VAR_14;

 VAR_14 = FUNC_7(VAR_6, VAR_7);
 if (VAR_14)
  return VAR_14;

 FUNC_4(VAR_5, &VAR_10, VAR_7);
 VAR_9 = FUNC_9(VAR_5, &VAR_10, &VAR_11, &VAR_8);
 if (!VAR_9) {
  FUNC_8(VAR_5, "inode %lu not found in index", (unsigned long)VAR_7);
  return FUNC_0(-VAR_1);
 } else if (VAR_9 < 0) {
  FUNC_8(VAR_5, "error %d while looking up inode %lu",
     VAR_9, (unsigned long)VAR_7);
  return FUNC_0(VAR_9);
 }

 VAR_12 = &VAR_11->zbranch[VAR_8];
 if (VAR_12->len < VAR_4) {
  FUNC_8(VAR_5, "bad node %lu node length %d",
     (unsigned long)VAR_7, VAR_12->len);
  return FUNC_0(-VAR_0);
 }

 VAR_13 = FUNC_6(VAR_12->len, VAR_3);
 if (!VAR_13)
  return FUNC_0(-VAR_2);

 VAR_9 = FUNC_10(VAR_5, VAR_12, VAR_13);
 if (VAR_9) {
  FUNC_8(VAR_5, "cannot read inode node at LEB %d:%d, error %d",
     VAR_12->lnum, VAR_12->offs, VAR_9);
  FUNC_5(VAR_13);
  return FUNC_0(VAR_9);
 }

 VAR_14 = FUNC_3(VAR_5, VAR_6, VAR_13);
 FUNC_5(VAR_13);
 if (FUNC_1(VAR_14)) {
  FUNC_8(VAR_5, "error %ld while adding inode %lu node",
     FUNC_2(VAR_14), (unsigned long)VAR_7);
  return VAR_14;
 }

 return VAR_14;
}
