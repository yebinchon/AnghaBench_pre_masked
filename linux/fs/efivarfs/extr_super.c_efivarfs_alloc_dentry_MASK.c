
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char* name; int len; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 struct dentry* FUNC_1 (struct dentry*,struct qstr*) ;
 int FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct dentry *VAR_1, char *VAR_2)
{
 struct dentry *VAR_3;
 struct qstr VAR_4;
 int VAR_5;

 VAR_4.name = VAR_2;
 VAR_4.len = FUNC_3(VAR_2);

 VAR_5 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(-VAR_0);
}
