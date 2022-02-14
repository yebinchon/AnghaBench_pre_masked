
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct cred {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,struct inode*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (struct inode*) ;
 struct cred* FUNC_8 (int ) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct cred const*) ;
 int FUNC_11 (struct dentry*,char const*,int *,int ) ;
 int FUNC_12 (struct dentry*,char const*) ;
 int FUNC_13 (struct dentry*,char const*,void const*,size_t,int) ;

int FUNC_14(struct dentry *VAR_1, struct inode *VAR_2, const char *VAR_3,
    const void *VAR_4, size_t VAR_5, int VAR_6)
{
 int VAR_7;
 struct dentry *VAR_8 = FUNC_7(VAR_2);
 struct dentry *VAR_9 = VAR_8 ?: FUNC_4(VAR_1);
 const struct cred *VAR_10;

 VAR_7 = FUNC_9(VAR_1);
 if (VAR_7)
  goto out;

 if (!VAR_4 && !VAR_8) {
  VAR_7 = FUNC_11(VAR_9, VAR_3, ((void*)0), 0);
  if (VAR_7 < 0)
   goto out_drop_write;
 }

 if (!VAR_8) {
  VAR_7 = FUNC_2(VAR_1);
  if (VAR_7)
   goto out_drop_write;

  VAR_9 = FUNC_5(VAR_1);
 }

 VAR_10 = FUNC_8(VAR_1->d_sb);
 if (VAR_4)
  VAR_7 = FUNC_13(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
 else {
  FUNC_0(VAR_6 != VAR_0);
  VAR_7 = FUNC_12(VAR_9, VAR_3);
 }
 FUNC_10(VAR_10);


 FUNC_3(FUNC_1(VAR_9), VAR_2);

out_drop_write:
 FUNC_6(VAR_1);
out:
 return VAR_7;
}
