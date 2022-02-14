
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {struct dentry* d_parent; } ;
struct TYPE_2__ {int flags; int debug_id; } ;
struct cachefiles_object {struct dentry* dentry; TYPE_1__ fscache; } ;
struct cachefiles_cache {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,struct dentry*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct cachefiles_cache*,struct cachefiles_object*,struct dentry*,struct dentry*,int,int ) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct cachefiles_cache *VAR_3,
        struct cachefiles_object *VAR_4)
{
 struct dentry *VAR_5;
 int VAR_6;

 FUNC_2(",OBJ%x{%p}", VAR_4->fscache.debug_id, VAR_4->dentry);

 FUNC_0(VAR_4->dentry);
 FUNC_0(FUNC_5(VAR_4->dentry));
 FUNC_0(VAR_4->dentry->d_parent);

 VAR_5 = FUNC_7(VAR_4->dentry);

 FUNC_9(FUNC_6(VAR_5), VAR_2);

 if (FUNC_11(VAR_0, &VAR_4->fscache.flags)) {


  FUNC_1("object preemptively buried");
  FUNC_10(FUNC_6(VAR_5));
  VAR_6 = 0;
 } else {


  if (VAR_5 == VAR_4->dentry->d_parent) {
   VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5,
           VAR_4->dentry, 0,
           VAR_1);
  } else {



   FUNC_10(FUNC_6(VAR_5));
   VAR_6 = 0;
  }
 }

 FUNC_8(VAR_5);
 FUNC_3(" = %d", VAR_6);
 return VAR_6;
}
