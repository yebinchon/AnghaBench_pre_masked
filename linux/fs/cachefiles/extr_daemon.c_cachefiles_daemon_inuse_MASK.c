
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
 int FUNC_0 (struct cachefiles_cache*,struct cred const**) ;
 int FUNC_1 (struct cachefiles_cache*,int ,char*) ;
 int FUNC_2 (struct cachefiles_cache*,struct cred const*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct path*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct cachefiles_cache *VAR_6, char *VAR_7)
{
 struct path VAR_8;
 const struct cred *VAR_9;
 int VAR_10;



 if (FUNC_7(VAR_7, '/'))
  goto inval;

 if (!FUNC_8(VAR_1, &VAR_6->flags)) {
  FUNC_6("inuse applied to unready cache\n");
  return -VAR_3;
 }

 if (FUNC_8(VAR_0, &VAR_6->flags)) {
  FUNC_6("inuse applied to dead cache\n");
  return -VAR_3;
 }


 FUNC_4(VAR_5->fs, &VAR_8);

 if (!FUNC_3(VAR_8.dentry))
  goto notdir;

 FUNC_0(VAR_6, &VAR_9);
 VAR_10 = FUNC_1(VAR_6, VAR_8.dentry, VAR_7);
 FUNC_2(VAR_6, VAR_9);

 FUNC_5(&VAR_8);

 return VAR_10;

notdir:
 FUNC_5(&VAR_8);
 FUNC_6("inuse command requires dirfd to be a directory\n");
 return -VAR_4;

inval:
 FUNC_6("inuse command requires dirfd and filename\n");
 return -VAR_2;
}
