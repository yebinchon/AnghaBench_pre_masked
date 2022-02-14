
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct cachefiles_xattr {int len; int type; } ;
struct TYPE_4__ {TYPE_1__* cookie; } ;
struct cachefiles_object {TYPE_2__ fscache; struct dentry* dentry; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,struct cachefiles_object*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct cachefiles_object*,char*,int) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct dentry*,int ,int *,int ,int ) ;

int FUNC_7(struct cachefiles_object *VAR_4,
    struct cachefiles_xattr *VAR_5)
{
 struct dentry *VAR_6 = VAR_4->dentry;
 int VAR_7;

 FUNC_0(VAR_6);

 FUNC_2("%p,#%d", VAR_4, VAR_5->len);


 FUNC_1("SET #%u", VAR_5->len);

 FUNC_5(VAR_1, &VAR_4->fscache.cookie->flags);
 VAR_7 = FUNC_6(VAR_6, VAR_3,
      &VAR_5->type, VAR_5->len,
      VAR_2);
 if (VAR_7 < 0 && VAR_7 != -VAR_0)
  FUNC_4(
   VAR_4,
   "Failed to set xattr with error %d", VAR_7);

 FUNC_3(" = %d", VAR_7);
 return VAR_7;
}
