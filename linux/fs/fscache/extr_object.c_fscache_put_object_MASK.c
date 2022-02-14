
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fscache_object {TYPE_2__* cache; } ;
typedef enum fscache_obj_ref_trace { ____Placeholder_fscache_obj_ref_trace } fscache_obj_ref_trace ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* put_object ) (struct fscache_object*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fscache_object*,int) ;

__attribute__((used)) static void FUNC_3(struct fscache_object *VAR_1,
          enum fscache_obj_ref_trace VAR_2)
{
 FUNC_0(&VAR_0);
 VAR_1->cache->ops->put_object(VAR_1, VAR_2);
 FUNC_1(&VAR_0);
}
