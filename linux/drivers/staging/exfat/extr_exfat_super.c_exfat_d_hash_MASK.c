
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int name; int hash; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct qstr*) ;
 int FUNC_1 (struct dentry const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct dentry *VAR_0, struct qstr *VAR_1)
{
 VAR_1->hash = FUNC_1(VAR_0, VAR_1->name,
        FUNC_0(VAR_1));
 return 0;
}
