
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct cred {int dummy; } ;
struct cachefiles_cache {struct cred* cache_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct cred*) ;
 int FUNC_3 (struct cachefiles_cache*,struct cred const**) ;
 int FUNC_4 (struct cachefiles_cache*,struct dentry*) ;
 int FUNC_5 (struct cachefiles_cache*,struct cred const*) ;
 int FUNC_6 (struct dentry*) ;
 struct cred* FUNC_7 () ;
 int FUNC_8 (struct cred*) ;
 int FUNC_9 (struct cred*,int ) ;

int FUNC_10(struct cachefiles_cache *VAR_2,
     struct dentry *VAR_3,
     const struct cred **VAR_4)
{
 struct cred *VAR_5;
 int VAR_6;

 FUNC_0("");



 VAR_5 = FUNC_7();
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(VAR_2, *VAR_4);



 VAR_6 = FUNC_9(VAR_5, FUNC_6(VAR_3));
 if (VAR_6 < 0) {
  FUNC_2(VAR_5);
  FUNC_3(VAR_2, VAR_4);
  FUNC_1(" = %d [cfa]", VAR_6);
  return VAR_6;
 }

 FUNC_8(VAR_2->cache_cred);
 VAR_2->cache_cred = VAR_5;

 FUNC_3(VAR_2, VAR_4);
 VAR_6 = FUNC_4(VAR_2, VAR_3);

 if (VAR_6 == -VAR_1)
  VAR_6 = 0;
 FUNC_1(" = %d", VAR_6);
 return VAR_6;
}
