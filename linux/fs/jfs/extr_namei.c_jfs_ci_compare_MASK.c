
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; char const* name; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const struct dentry *VAR_0,
  unsigned int VAR_1, const char *VAR_2, const struct qstr *VAR_3)
{
 int VAR_4, VAR_5 = 1;

 if (VAR_1 != VAR_3->len)
  goto out;
 for (VAR_4=0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(VAR_2[VAR_4]) != FUNC_0(VAR_3->name[VAR_4]))
   goto out;
 }
 VAR_5 = 0;
out:
 return VAR_5;
}
