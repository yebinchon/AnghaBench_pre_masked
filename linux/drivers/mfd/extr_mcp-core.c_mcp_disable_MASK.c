
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp {scalar_t__ use_count; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct mcp*) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct mcp*) ;

void FUNC_3(struct mcp *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->lock, VAR_1);
 if (--VAR_0->use_count == 0)
  VAR_0->ops->disable(VAR_0);
 FUNC_1(&VAR_0->lock, VAR_1);
}
