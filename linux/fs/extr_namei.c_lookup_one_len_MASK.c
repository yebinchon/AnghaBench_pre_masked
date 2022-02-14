
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int d_inode; } ;


 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct dentry* FUNC_2 (struct qstr*,struct dentry*,int ) ;
 int FUNC_3 (int ) ;
 struct dentry* FUNC_4 (struct qstr*,struct dentry*,int ) ;
 int FUNC_5 (char const*,struct dentry*,int,struct qstr*) ;

struct dentry *FUNC_6(const char *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct dentry *VAR_3;
 struct qstr VAR_4;
 int VAR_5;

 FUNC_1(!FUNC_3(VAR_1->d_inode));

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);

 VAR_3 = FUNC_4(&VAR_4, VAR_1, 0);
 return VAR_3 ? VAR_3 : FUNC_2(&VAR_4, VAR_1, 0);
}
