
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_cache {TYPE_1__* ops; int flags; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct fscache_cache *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->flags))
  FUNC_0("Cache '%s' stopped due to I/O error\n",
         VAR_1->ops->name);
}
