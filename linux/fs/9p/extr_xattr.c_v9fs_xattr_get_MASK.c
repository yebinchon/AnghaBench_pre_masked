
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int dummy; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int FUNC_1 (struct p9_fid*) ;
 int FUNC_2 (int ,char*,char const*,size_t) ;
 struct p9_fid* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct p9_fid*,char const*,void*,size_t) ;

ssize_t FUNC_5(struct dentry *VAR_1, const char *VAR_2,
         void *VAR_3, size_t VAR_4)
{
 struct p9_fid *VAR_5;

 FUNC_2(VAR_0, "name = %s value_len = %zu\n",
   VAR_2, VAR_4);
 VAR_5 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 return FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4);
}
