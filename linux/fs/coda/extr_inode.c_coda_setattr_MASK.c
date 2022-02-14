
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vattr ;
struct inode {int i_sb; int i_ctime; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;
struct coda_vattr {int va_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct iattr*,struct coda_vattr*) ;
 int FUNC_3 (struct inode*,struct coda_vattr*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct coda_vattr*,int ,int) ;
 int FUNC_7 (int ,int ,struct coda_vattr*) ;

int FUNC_8(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct inode *VAR_3 = FUNC_5(VAR_1);
 struct coda_vattr VAR_4;
 int VAR_5;

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));

 VAR_3->i_ctime = FUNC_4(VAR_3);
 FUNC_2(VAR_2, &VAR_4);
 VAR_4.va_type = VAR_0;


 VAR_5 = FUNC_7(VAR_3->i_sb, FUNC_1(VAR_3), &VAR_4);

 if (!VAR_5) {
         FUNC_3(VAR_3, &VAR_4);
  FUNC_0(VAR_3);
 }
 return VAR_5;
}
