
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qstr {int len; char* name; int hash; } ;
struct nfs_entry {int label; TYPE_1__* fattr; TYPE_3__* fh; int len; int name; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_8__ {int fsid; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int valid; int fsid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (int ) ;
 struct qstr FUNC_3 (int ,int ) ;
 struct dentry* FUNC_4 (struct dentry*,struct qstr*,int *) ;
 int FUNC_5 (struct dentry*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 struct dentry* FUNC_8 (struct dentry*,struct qstr*) ;
 int FUNC_9 (struct dentry*) ;
 struct dentry* FUNC_10 (struct inode*,struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*,char*,int) ;
 struct inode* FUNC_13 (int ,TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (struct inode*,TYPE_1__*) ;
 scalar_t__ FUNC_16 (struct dentry*,struct nfs_entry*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct dentry*,int ) ;
 int FUNC_19 (struct inode*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_20 (char*,int,char) ;
 int FUNC_21 (char*,int) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_22(struct dentry *VAR_3, struct nfs_entry *VAR_4)
{
 struct qstr VAR_5 = FUNC_3(VAR_4->name, VAR_4->len);
 FUNC_0(VAR_2);
 struct dentry *VAR_6;
 struct dentry *VAR_7;
 struct inode *VAR_8 = FUNC_6(VAR_3);
 struct inode *VAR_9;
 int VAR_10;

 if (!(VAR_4->fattr->valid & VAR_0))
  return;
 if (!(VAR_4->fattr->valid & VAR_1))
  return;
 if (VAR_5.len == 0)
  return;

 if (FUNC_21(VAR_5.name, VAR_5.len) != VAR_5.len)
  return;

 if (FUNC_20(VAR_5.name, VAR_5.len, '/'))
  return;
 if (VAR_5.name[0] == '.') {
  if (VAR_5.len == 1)
   return;
  if (VAR_5.len == 2 && VAR_5.name[1] == '.')
   return;
 }
 VAR_5.hash = FUNC_12(VAR_3, VAR_5.name, VAR_5.len);

 VAR_6 = FUNC_8(VAR_3, &VAR_5);
again:
 if (!VAR_6) {
  VAR_6 = FUNC_4(VAR_3, &VAR_5, &VAR_2);
  if (FUNC_1(VAR_6))
   return;
 }
 if (!FUNC_5(VAR_6)) {

  if (!FUNC_14(&FUNC_2(VAR_6->d_sb)->fsid,
     &VAR_4->fattr->fsid))
   goto out;
  if (FUNC_16(VAR_6, VAR_4)) {
   if (!VAR_4->fh->size)
    goto out;
   FUNC_18(VAR_6, FUNC_17(VAR_8));
   VAR_10 = FUNC_15(FUNC_6(VAR_6), VAR_4->fattr);
   if (!VAR_10)
    FUNC_19(FUNC_6(VAR_6), VAR_4->fattr, VAR_4->label);
   goto out;
  } else {
   FUNC_7(VAR_6);
   FUNC_11(VAR_6);
   VAR_6 = ((void*)0);
   goto again;
  }
 }
 if (!VAR_4->fh->size) {
  FUNC_9(VAR_6);
  goto out;
 }

 VAR_9 = FUNC_13(VAR_6->d_sb, VAR_4->fh, VAR_4->fattr, VAR_4->label);
 VAR_7 = FUNC_10(VAR_9, VAR_6);
 FUNC_9(VAR_6);
 if (VAR_7) {
  if (FUNC_1(VAR_7))
   goto out;
  FUNC_11(VAR_6);
  VAR_6 = VAR_7;
 }
 FUNC_18(VAR_6, FUNC_17(VAR_8));
out:
 FUNC_11(VAR_6);
}
