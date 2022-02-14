
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int d_inode; } ;


 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct dentry* FUNC_3 (struct qstr*,struct dentry*,int ) ;
 int FUNC_4 (char const*,struct dentry*,int,struct qstr*) ;

struct dentry *FUNC_5(const char *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct qstr VAR_3;
 int VAR_4;

 FUNC_1(!FUNC_2(VAR_1->d_inode));

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 return FUNC_3(&VAR_3, VAR_1, 0);
}
