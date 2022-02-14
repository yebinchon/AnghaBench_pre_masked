
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disc_evt; } ;
struct esas2r_adapter {int mem_lock; TYPE_1__ disc_ctx; } ;


 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct esas2r_adapter *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->mem_lock, VAR_1);

 if (VAR_0->disc_ctx.disc_evt)
  FUNC_0(VAR_0);

 FUNC_2(&VAR_0->mem_lock, VAR_1);
}
