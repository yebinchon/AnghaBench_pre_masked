
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_mport {int pwe_refcnt; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* pwenable ) (struct rio_mport*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rio_mport*,int) ;

void FUNC_3(struct rio_mport *VAR_0, int VAR_1)
{
 if (VAR_0->ops->pwenable) {
  FUNC_0(&VAR_0->lock);

  if ((VAR_1 && ++VAR_0->pwe_refcnt == 1) ||
      (!VAR_1 && VAR_0->pwe_refcnt && --VAR_0->pwe_refcnt == 0))
   VAR_0->ops->pwenable(VAR_0, VAR_1);
  FUNC_1(&VAR_0->lock);
 }
}
