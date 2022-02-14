
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_netfs {int name; struct fscache_cookie* primary_index; int version; } ;
struct fscache_cookie {int flags; TYPE_1__* parent; } ;
struct TYPE_2__ {int n_children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 struct fscache_cookie* FUNC_3 (int *,int *,int ,int ,int *,int,struct fscache_netfs*,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct fscache_cookie*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct fscache_cookie*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct fscache_cookie* FUNC_7 (struct fscache_cookie*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct fscache_cookie*,int ,int) ;
 int FUNC_11 (struct fscache_netfs*) ;

int FUNC_12(struct fscache_netfs *VAR_8)
{
 struct fscache_cookie *VAR_9, *VAR_10;

 FUNC_0("{%s}", VAR_8->name);


 VAR_9 = FUNC_3(&VAR_6,
      &VAR_7,
      VAR_8->name, FUNC_9(VAR_8->name),
      &VAR_8->version, sizeof(VAR_8->version),
      VAR_8, 0);
 if (!VAR_9) {
  FUNC_1(" = -ENOMEM");
  return -VAR_1;
 }

 VAR_9->flags = 1 << VAR_2;


 VAR_10 = FUNC_7(VAR_9);
 if (!VAR_10)
  goto already_registered;
 if (VAR_10 != VAR_9) {
  FUNC_10(VAR_9, VAR_3, 1);
  FUNC_6(VAR_9);
 }

 FUNC_4(VAR_10->parent, VAR_4);
 FUNC_2(&VAR_10->parent->n_children);

 VAR_8->primary_index = VAR_10;

 FUNC_8("Netfs '%s' registered for caching\n", VAR_8->name);
 FUNC_11(VAR_8);
 FUNC_1(" = 0");
 return 0;

already_registered:
 FUNC_5(VAR_9, VAR_5);
 FUNC_1(" = -EEXIST");
 return -VAR_0;
}
