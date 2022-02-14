
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; } ;
struct cred {int dummy; } ;
struct cachefiles_cache {int flags; } ;
struct TYPE_2__ {int fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct cachefiles_cache*,struct cred const**) ;
 int FUNC_3 (struct cachefiles_cache*,int ,char*) ;
 int FUNC_4 (struct cachefiles_cache*,struct cred const*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct path*) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct cachefiles_cache *VAR_6, char *VAR_7)
{
 struct path VAR_8;
 const struct cred *VAR_9;
 int VAR_10;

 FUNC_0(",%s", VAR_7);

 if (FUNC_9(VAR_7, '/'))
  goto inval;

 if (!FUNC_10(VAR_1, &VAR_6->flags)) {
  FUNC_8("cull applied to unready cache\n");
  return -VAR_3;
 }

 if (FUNC_10(VAR_0, &VAR_6->flags)) {
  FUNC_8("cull applied to dead cache\n");
  return -VAR_3;
 }


 FUNC_6(VAR_5->fs, &VAR_8);

 if (!FUNC_5(VAR_8.dentry))
  goto notdir;

 FUNC_2(VAR_6, &VAR_9);
 VAR_10 = FUNC_3(VAR_6, VAR_8.dentry, VAR_7);
 FUNC_4(VAR_6, VAR_9);

 FUNC_7(&VAR_8);
 FUNC_1(" = %d", VAR_10);
 return VAR_10;

notdir:
 FUNC_7(&VAR_8);
 FUNC_8("cull command requires dirfd to be a directory\n");
 return -VAR_4;

inval:
 FUNC_8("cull command requires dirfd and filename\n");
 return -VAR_2;
}
