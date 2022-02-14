
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr const*) ;
 int FUNC_3 (struct dentry*,unsigned int) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct dentry *FUNC_6(const struct qstr *VAR_0,
        struct dentry *VAR_1,
        unsigned int VAR_2)
{
 struct dentry *VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (VAR_3) {
  int VAR_4 = FUNC_3(VAR_3, VAR_2);
  if (FUNC_5(VAR_4 <= 0)) {
   if (!VAR_4)
    FUNC_1(VAR_3);
   FUNC_4(VAR_3);
   return FUNC_0(VAR_4);
  }
 }
 return VAR_3;
}
