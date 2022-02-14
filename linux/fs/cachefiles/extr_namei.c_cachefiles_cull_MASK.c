
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct cachefiles_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,struct dentry*,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct cachefiles_cache*,int *,struct dentry*,struct dentry*,int,int ) ;
 struct dentry* FUNC_6 (struct cachefiles_cache*,struct dentry*,char*) ;
 int FUNC_7 (struct cachefiles_cache*,struct dentry*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;

int FUNC_13(struct cachefiles_cache *VAR_5, struct dentry *VAR_6,
      char *VAR_7)
{
 struct dentry *VAR_8;
 int VAR_9;

 FUNC_3(",%pd/,%s", VAR_6, VAR_7);

 VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_2("victim -> %p %s",
        VAR_8, FUNC_8(VAR_8) ? "positive" : "negative");




 FUNC_2("victim is cullable");

 VAR_9 = FUNC_7(VAR_5, VAR_8);
 if (VAR_9 < 0)
  goto error_unlock;


 FUNC_2("bury");

 VAR_9 = FUNC_5(VAR_5, ((void*)0), VAR_6, VAR_8, 0,
         VAR_4);
 if (VAR_9 < 0)
  goto error;

 FUNC_10(VAR_8);
 FUNC_4(" = 0");
 return 0;

error_unlock:
 FUNC_11(FUNC_9(VAR_6));
error:
 FUNC_10(VAR_8);
 if (VAR_9 == -VAR_1) {

  FUNC_4(" = -ESTALE [absent]");
  return -VAR_3;
 }

 if (VAR_9 != -VAR_2) {
  FUNC_12("Internal error: %d\n", VAR_9);
  VAR_9 = -VAR_0;
 }

 FUNC_4(" = %d", VAR_9);
 return VAR_9;
}
