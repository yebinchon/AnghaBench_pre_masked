
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct cachefiles_xattr {scalar_t__ type; int data; } ;
struct TYPE_6__ {TYPE_2__* cookie; } ;
struct cachefiles_object {TYPE_3__ fscache; struct dentry* dentry; } ;
typedef int ssize_t ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
struct TYPE_5__ {TYPE_1__* def; } ;
struct TYPE_4__ {scalar_t__ type; struct dentry* check_aux; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (TYPE_3__*,int *,int,int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct cachefiles_xattr*) ;
 struct cachefiles_xattr* FUNC_5 (int,int ) ;
 int FUNC_6 (struct dentry*,int ,scalar_t__*,int) ;

int FUNC_7(struct cachefiles_object *VAR_5)
{
 struct cachefiles_xattr *VAR_6;
 enum fscache_checkaux VAR_7;
 struct dentry *VAR_8 = VAR_5->dentry;
 ssize_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_8);
 FUNC_0(FUNC_1(VAR_8));
 FUNC_0(VAR_5->fscache.cookie->def->check_aux);

 VAR_6 = FUNC_5(sizeof(struct cachefiles_xattr) + 512, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_8, VAR_4,
       &VAR_6->type, 512 + 1);
 VAR_10 = -VAR_1;
 if (VAR_9 < 1 ||
     VAR_6->type != VAR_5->fscache.cookie->def->type)
  goto error;

 VAR_9--;
 VAR_7 = FUNC_2(&VAR_5->fscache, &VAR_6->data, VAR_9,
         FUNC_3(FUNC_1(VAR_8)));
 if (VAR_7 != VAR_2)
  goto error;

 VAR_10 = 0;
error:
 FUNC_4(VAR_6);
 return VAR_10;
}
