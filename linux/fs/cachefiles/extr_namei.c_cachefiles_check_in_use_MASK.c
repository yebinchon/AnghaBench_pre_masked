
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct cachefiles_cache {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct cachefiles_cache*,struct dentry*,char*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct cachefiles_cache *VAR_0, struct dentry *VAR_1,
       char *VAR_2)
{
 struct dentry *VAR_3;




 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_5(FUNC_3(VAR_1));
 FUNC_4(VAR_3);

 return 0;
}
