
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int) ;
 struct dentry* FUNC_1 (struct qstr*,struct dentry*,int ) ;
 int FUNC_2 (char const*,struct dentry*,int,struct qstr*) ;
 struct dentry* FUNC_3 (struct qstr*,struct dentry*,int ) ;

struct dentry *FUNC_4(const char *VAR_0,
           struct dentry *VAR_1, int VAR_2)
{
 struct qstr VAR_3;
 int VAR_4;
 struct dentry *VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_1(&VAR_3, VAR_1, 0);
 if (!VAR_5)
  VAR_5 = FUNC_3(&VAR_3, VAR_1, 0);
 return VAR_5;
}
