
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct cred {int dummy; } ;
typedef int ssize_t ;


 struct dentry* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct cred* FUNC_2 (int ) ;
 int FUNC_3 (struct cred const*) ;
 int FUNC_4 (struct dentry*,char const*,void*,size_t) ;

int FUNC_5(struct dentry *VAR_0, struct inode *VAR_1, const char *VAR_2,
    void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 const struct cred *VAR_6;
 struct dentry *VAR_7 =
  FUNC_1(VAR_1) ?: FUNC_0(VAR_0);

 VAR_6 = FUNC_2(VAR_0->d_sb);
 VAR_5 = FUNC_4(VAR_7, VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_6);
 return VAR_5;
}
