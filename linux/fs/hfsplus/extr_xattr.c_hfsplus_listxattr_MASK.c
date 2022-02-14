
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct inode {scalar_t__ i_ino; int i_sb; int i_mode; } ;
struct hfsplus_unistr {int dummy; } ;
struct hfsplus_attr_key {int cnid; } ;
struct hfs_find_data {TYPE_3__* key; int keyoffset; int bnode; TYPE_1__* tree; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;
typedef int key_len ;
struct TYPE_8__ {int attr_tree; } ;
struct TYPE_6__ {int key_name; } ;
struct TYPE_7__ {TYPE_2__ attr; } ;
struct TYPE_5__ {scalar_t__ max_key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 struct inode* FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,struct hfsplus_attr_key*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct hfs_find_data*,int) ;
 int FUNC_11 (struct hfs_find_data*) ;
 int FUNC_12 (int ,struct hfs_find_data*) ;
 int FUNC_13 (int ,scalar_t__,int *,struct hfs_find_data*) ;
 int FUNC_14 (struct dentry*,char*,size_t) ;
 scalar_t__ FUNC_15 (int ,struct hfsplus_unistr const*,char*,int*) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (char*,...) ;

ssize_t FUNC_20(struct dentry *VAR_10, char *VAR_11, size_t VAR_12)
{
 ssize_t VAR_13;
 ssize_t VAR_14 = 0;
 struct inode *VAR_15 = FUNC_7(VAR_10);
 struct hfs_find_data VAR_16;
 u16 VAR_17 = 0;
 struct hfsplus_attr_key VAR_18;
 char *VAR_19;
 int VAR_20;

 if ((!FUNC_3(VAR_15->i_mode) &&
   !FUNC_2(VAR_15->i_mode)) ||
    FUNC_0(VAR_15))
  return -VAR_4;

 VAR_14 = FUNC_14(VAR_10, VAR_11, VAR_12);
 if (VAR_14 < 0)
  return VAR_14;
 else if (!FUNC_1(VAR_15->i_sb)->attr_tree)
  return (VAR_14 == 0) ? -VAR_4 : VAR_14;

 VAR_13 = FUNC_12(FUNC_1(VAR_15->i_sb)->attr_tree, &VAR_16);
 if (VAR_13) {
  FUNC_19("can't init xattr find struct\n");
  return VAR_13;
 }

 VAR_19 = FUNC_17(VAR_8 * VAR_7 +
   VAR_9 + 1, VAR_6);
 if (!VAR_19) {
  VAR_14 = -VAR_3;
  goto out;
 }

 VAR_13 = FUNC_13(VAR_15->i_sb, VAR_15->i_ino, ((void*)0), &VAR_16);
 if (VAR_13) {
  if (VAR_13 == -VAR_2) {
   if (VAR_14 == 0)
    VAR_14 = -VAR_1;
   goto end_listxattr;
  } else {
   VAR_14 = VAR_13;
   goto end_listxattr;
  }
 }

 for (;;) {
  VAR_17 = FUNC_9(VAR_16.bnode, VAR_16.keyoffset);
  if (VAR_17 == 0 || VAR_17 > VAR_16.tree->max_key_len) {
   FUNC_19("invalid xattr key length: %d\n", VAR_17);
   VAR_14 = -VAR_0;
   goto end_listxattr;
  }

  FUNC_8(VAR_16.bnode, &VAR_18,
    VAR_16.keyoffset, VAR_17 + sizeof(VAR_17));

  if (FUNC_4(VAR_18.cnid) != VAR_15->i_ino)
   goto end_listxattr;

  VAR_20 = VAR_8 * VAR_7;
  if (FUNC_15(VAR_15->i_sb,
   (const struct hfsplus_unistr *)&VAR_16.key->attr.key_name,
     VAR_19, &VAR_20)) {
   FUNC_19("unicode conversion failed\n");
   VAR_14 = -VAR_0;
   goto end_listxattr;
  }

  if (!VAR_11 || !VAR_12) {
   if (FUNC_5(VAR_19))
    VAR_14 += FUNC_18(VAR_19, VAR_20);
  } else if (FUNC_5(VAR_19)) {
   if (VAR_12 < (VAR_14 + FUNC_18(VAR_19, VAR_20))) {
    VAR_14 = -VAR_5;
    goto end_listxattr;
   } else
    VAR_14 += FUNC_6(VAR_11 + VAR_14,
      VAR_19, VAR_20);
  }

  if (FUNC_10(&VAR_16, 1))
   goto end_listxattr;
 }

end_listxattr:
 FUNC_16(VAR_19);
out:
 FUNC_11(&VAR_16);
 return VAR_14;
}
