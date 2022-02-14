
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_cattr {int mode; int hardlink; } ;
struct inode {int i_gid; int i_uid; } ;
struct dentry {int d_name; int d_sb; struct dentry* d_parent; } ;
struct cred {int fsgid; int fsuid; } ;


 int VAR_0 ;
 struct cred* FUNC_0 (struct cred*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct inode*,struct ovl_cattr*) ;
 int FUNC_3 (struct dentry*,struct inode*,struct ovl_cattr*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 struct cred* FUNC_6 (int ) ;
 int FUNC_7 (struct dentry*,int ) ;
 struct cred* FUNC_8 () ;
 int FUNC_9 (struct cred*) ;
 int FUNC_10 (struct cred const*) ;
 int FUNC_11 (struct dentry*,int ,int *,struct cred const*,struct cred*) ;

__attribute__((used)) static int FUNC_12(struct dentry *VAR_1, struct inode *VAR_2,
         struct ovl_cattr *VAR_3, bool VAR_4)
{
 int VAR_5;
 const struct cred *VAR_6;
 struct cred *VAR_7;
 struct dentry *VAR_8 = VAR_1->d_parent;

 VAR_5 = FUNC_1(VAR_8);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_6(VAR_1->d_sb);





 if (VAR_4) {
  VAR_5 = FUNC_7(VAR_8, FUNC_5(VAR_8));
  if (VAR_5)
   goto out_revert_creds;
 }

 VAR_5 = -VAR_0;
 VAR_7 = FUNC_8();
 if (VAR_7) {
  VAR_7->fsuid = VAR_2->i_uid;
  VAR_7->fsgid = VAR_2->i_gid;
  if (!VAR_3->hardlink) {
   VAR_5 = FUNC_11(VAR_1,
     VAR_3->mode, &VAR_1->d_name, VAR_6,
     VAR_7);
   if (VAR_5) {
    FUNC_9(VAR_7);
    goto out_revert_creds;
   }
  }
  FUNC_9(FUNC_0(VAR_7));
  FUNC_9(VAR_7);

  if (!FUNC_4(VAR_1))
   VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
  else
   VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 }
out_revert_creds:
 FUNC_10(VAR_6);
 return VAR_5;
}
