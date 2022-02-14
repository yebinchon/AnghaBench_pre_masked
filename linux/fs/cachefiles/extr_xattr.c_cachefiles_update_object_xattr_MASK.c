
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,struct cachefiles_object*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct cachefiles_object*,char*,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dentry*,int ,int *,int ,int ) ;

int FUNC_6(struct cachefiles_object *VAR_5,
       struct cachefiles_xattr *VAR_6)
{
 struct dentry *VAR_7 = VAR_5->dentry;
 int VAR_8;

 if (!VAR_7)
  return -VAR_1;

 FUNC_1("%p,#%d", VAR_5, VAR_6->len);


 FUNC_0("SET #%u", VAR_6->len);

 FUNC_4(VAR_2, &VAR_5->fscache.cookie->flags);
 VAR_8 = FUNC_5(VAR_7, VAR_4,
      &VAR_6->type, VAR_6->len,
      VAR_3);
 if (VAR_8 < 0 && VAR_8 != -VAR_0)
  FUNC_3(
   VAR_5,
   "Failed to update xattr with error %d", VAR_8);

 FUNC_2(" = %d", VAR_8);
 return VAR_8;
}
