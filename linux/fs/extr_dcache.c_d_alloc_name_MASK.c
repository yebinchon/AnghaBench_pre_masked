
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char const* name; int hash_len; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct dentry*,struct qstr*) ;
 int FUNC_1 (struct dentry*,char const*) ;

struct dentry *FUNC_2(struct dentry *VAR_0, const char *VAR_1)
{
 struct qstr VAR_2;

 VAR_2.name = VAR_1;
 VAR_2.hash_len = FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_0, &VAR_2);
}
