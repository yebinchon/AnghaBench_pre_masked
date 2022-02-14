
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; int d_sb; int d_parent; } ;
struct cred {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct dentry* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 struct cred* FUNC_13 (int ) ;
 int FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*,int *) ;
 int FUNC_16 (struct dentry*,int,int *) ;
 int FUNC_17 (struct dentry*) ;
 int FUNC_18 (struct cred const*) ;

__attribute__((used)) static int FUNC_19(struct dentry *VAR_1, bool VAR_2)
{
 int VAR_3;
 const struct cred *VAR_4;
 struct dentry *VAR_5;
 bool VAR_6 = FUNC_10(VAR_1);
 FUNC_0(VAR_0);


 if (VAR_2 && (VAR_6 || !FUNC_14(VAR_1))) {
  VAR_3 = FUNC_5(VAR_1, &VAR_0);
  if (VAR_3)
   goto out;
 }

 VAR_3 = FUNC_17(VAR_1);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_6(VAR_1->d_parent);
 if (VAR_3)
  goto out_drop_write;

 VAR_3 = FUNC_12(VAR_1);
 if (VAR_3)
  goto out_drop_write;

 VAR_4 = FUNC_13(VAR_1->d_sb);
 if (!VAR_6)
  VAR_3 = FUNC_16(VAR_1, VAR_2, &VAR_0);
 else
  VAR_3 = FUNC_15(VAR_1, &VAR_0);
 FUNC_18(VAR_4);
 if (!VAR_3) {
  if (VAR_2)
   FUNC_1(VAR_1->d_inode);
  else
   FUNC_3(VAR_1->d_inode);
 }
 FUNC_11(VAR_1);







 VAR_5 = FUNC_8(VAR_1);
 if (VAR_5)
  FUNC_7(FUNC_2(VAR_5), FUNC_2(VAR_1));

out_drop_write:
 FUNC_9(VAR_1);
out:
 FUNC_4(&VAR_0);
 return VAR_3;
}
