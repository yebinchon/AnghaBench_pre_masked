
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (char*,struct dentry*,char const*,int) ;
 int FUNC_1 (struct dentry*,char const*) ;

__attribute__((used)) static inline int FUNC_2(struct dentry *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0("removexattr(%pd2, \"%s\") = %i\n", VAR_0, VAR_1, VAR_2);
 return VAR_2;
}
