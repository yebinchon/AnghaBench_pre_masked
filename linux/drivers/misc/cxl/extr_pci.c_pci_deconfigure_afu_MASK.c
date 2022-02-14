
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cxl_afu {TYPE_1__* adapter; int configured_state; } ;
struct TYPE_6__ {TYPE_2__* sl_ops; } ;
struct TYPE_5__ {int (* release_serr_irq ) (struct cxl_afu*) ;} ;
struct TYPE_4__ {TYPE_3__* native; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct cxl_afu*) ;

__attribute__((used)) static void FUNC_6(struct cxl_afu *VAR_0)
{




 if (FUNC_1(&VAR_0->configured_state) != -1) {
  while (FUNC_0(&VAR_0->configured_state, 0, -1) != -1)
   FUNC_4();
 }
 FUNC_2(VAR_0);
 if (VAR_0->adapter->native->sl_ops->release_serr_irq)
  VAR_0->adapter->native->sl_ops->release_serr_irq(VAR_0);
 FUNC_3(VAR_0);
}
