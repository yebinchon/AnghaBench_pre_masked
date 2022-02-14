
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; int name; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ,int ,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(const struct dentry *VAR_0, unsigned int VAR_1,
   const char *VAR_2, const struct qstr *VAR_3)
{
 return FUNC_0(VAR_3->name, VAR_3->len, VAR_2, VAR_1);
}
