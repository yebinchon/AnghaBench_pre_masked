
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct cachefiles_cache {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,struct dentry*,int ) ;
 int FUNC_3 (int ,struct dentry*,int ) ;

__attribute__((used)) static int FUNC_4(struct cachefiles_cache *VAR_0,
          struct dentry *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(FUNC_0(VAR_1), VAR_1, 0);
 if (VAR_2 < 0) {
  FUNC_1("Security denies permission to make dirs: error %d",
         VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_2(FUNC_0(VAR_1), VAR_1, 0);
 if (VAR_2 < 0)
  FUNC_1("Security denies permission to create files: error %d",
         VAR_2);

 return VAR_2;
}
