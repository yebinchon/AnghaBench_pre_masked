
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct nfs42_layoutstat_devinfo {TYPE_2__ ld_private; } ;
struct TYPE_3__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(struct nfs42_layoutstat_devinfo *VAR_0,
  unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!VAR_0[VAR_2].ld_private.ops)
   continue;
  if (!VAR_0[VAR_2].ld_private.ops->free)
   continue;
  VAR_0[VAR_2].ld_private.ops->free(&VAR_0[VAR_2].ld_private);
 }
}
