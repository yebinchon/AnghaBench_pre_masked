
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fscache_operation {int debug_id; struct fscache_object* object; } ;
struct fscache_object {TYPE_1__* cache; int debug_id; } ;
struct TYPE_4__ {int (* attr_changed ) (struct fscache_object*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct fscache_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct fscache_object*) ;
 int FUNC_4 (struct fscache_operation*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fscache_object*) ;

__attribute__((used)) static void FUNC_8(struct fscache_operation *VAR_2)
{
 struct fscache_object *VAR_3 = VAR_2->object;
 int VAR_4;

 FUNC_0("{OBJ%x OP%x}", VAR_3->debug_id, VAR_2->debug_id);

 FUNC_5(&VAR_0);

 if (FUNC_3(VAR_3)) {
  FUNC_5(&VAR_1);
  VAR_4 = VAR_3->cache->ops->attr_changed(VAR_3);
  FUNC_6(&VAR_1);
  if (VAR_4 < 0)
   FUNC_2(VAR_3);
  FUNC_4(VAR_2, VAR_4 < 0);
 } else {
  FUNC_4(VAR_2, 1);
 }

 FUNC_1("");
}
