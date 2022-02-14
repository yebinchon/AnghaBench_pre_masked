
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,struct dentry*,char const*,int ,void const*,size_t,int,int) ;
 int FUNC_2 (struct dentry*,char const*,void const*,size_t,int) ;

__attribute__((used)) static inline int FUNC_3(struct dentry *VAR_0, const char *VAR_1,
      const void *VAR_2, size_t VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1("setxattr(%pd2, \"%s\", \"%*pE\", %zu, 0x%x) = %i\n",
   VAR_0, VAR_1, FUNC_0((int)VAR_3, 48), VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_5;
}
