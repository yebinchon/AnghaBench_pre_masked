
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int rename_sem; int uname; } ;
struct p9_wstat {int name; int muid; } ;
struct p9_fid {int dummy; } ;
struct inode {int i_mode; } ;
struct TYPE_2__ {int name; } ;
struct dentry {scalar_t__ d_parent; TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct p9_fid*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 struct p9_fid* FUNC_4 (int ) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,struct dentry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct p9_fid*) ;
 int FUNC_10 (struct p9_fid*,struct p9_fid*,int ) ;
 int FUNC_11 (struct p9_fid*,int ,struct p9_fid*,int ) ;
 int FUNC_12 (struct p9_fid*,struct p9_wstat*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct p9_wstat*) ;
 int FUNC_16 (struct inode*) ;
 struct p9_fid* FUNC_17 (struct dentry*) ;
 struct v9fs_session_info* FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct dentry*) ;
 scalar_t__ FUNC_21 (struct v9fs_session_info*) ;

int
FUNC_22(struct inode *VAR_5, struct dentry *VAR_6,
  struct inode *VAR_7, struct dentry *VAR_8,
  unsigned int VAR_9)
{
 int VAR_10;
 struct inode *VAR_11;
 struct inode *VAR_12;
 struct v9fs_session_info *VAR_13;
 struct p9_fid *VAR_14;
 struct p9_fid *VAR_15;
 struct p9_fid *VAR_16;
 struct p9_wstat VAR_17;

 if (VAR_9)
  return -VAR_0;

 FUNC_13(VAR_4, "\n");
 VAR_10 = 0;
 VAR_11 = FUNC_5(VAR_6);
 VAR_12 = FUNC_5(VAR_8);
 VAR_13 = FUNC_18(VAR_11);
 VAR_14 = FUNC_17(VAR_6);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_15 = FUNC_4(FUNC_20(VAR_6));
 if (FUNC_0(VAR_15)) {
  VAR_10 = FUNC_1(VAR_15);
  goto done;
 }

 VAR_16 = FUNC_4(FUNC_20(VAR_8));
 if (FUNC_0(VAR_16)) {
  VAR_10 = FUNC_1(VAR_16);
  goto clunk_olddir;
 }

 FUNC_7(&VAR_13->rename_sem);
 if (FUNC_21(VAR_13)) {
  VAR_10 = FUNC_11(VAR_15, VAR_6->d_name.name,
         VAR_16, VAR_8->d_name.name);
  if (VAR_10 == -VAR_1)
   VAR_10 = FUNC_10(VAR_14, VAR_16,
        VAR_8->d_name.name);
  if (VAR_10 != -VAR_1)
   goto clunk_newdir;
 }
 if (VAR_6->d_parent != VAR_8->d_parent) {




  FUNC_13(VAR_3, "old dir and new dir are different\n");
  VAR_10 = -VAR_2;
  goto clunk_newdir;
 }
 FUNC_15(&VAR_17);
 VAR_17.muid = VAR_13->uname;
 VAR_17.name = VAR_8->d_name.name;
 VAR_10 = FUNC_12(VAR_14, &VAR_17);

clunk_newdir:
 if (!VAR_10) {
  if (VAR_12) {
   if (FUNC_2(VAR_12->i_mode))
    FUNC_3(VAR_12);
   else
    FUNC_16(VAR_12);
  }
  if (FUNC_2(VAR_11->i_mode)) {
   if (!VAR_12)
    FUNC_8(VAR_7);
   FUNC_16(VAR_5);
  }
  FUNC_19(VAR_11);
  FUNC_19(VAR_5);
  FUNC_19(VAR_7);


  FUNC_6(VAR_6, VAR_8);
 }
 FUNC_14(&VAR_13->rename_sem);
 FUNC_9(VAR_16);

clunk_olddir:
 FUNC_9(VAR_15);

done:
 return VAR_10;
}
