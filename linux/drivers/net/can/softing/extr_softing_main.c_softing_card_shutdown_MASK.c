
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int up; int lock; } ;
struct TYPE_4__ {scalar_t__ requested; scalar_t__ nr; } ;
struct softing {TYPE_3__ fw; int pdev; TYPE_2__* pdat; TYPE_1__ irq; } ;
struct TYPE_5__ {int (* reset ) (int ,int) ;int (* enable_irq ) (int ,int ) ;} ;


 int FUNC_0 (scalar_t__,struct softing*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct softing*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct softing *VAR_0)
{
 int VAR_1 = 0;

 if (FUNC_1(&VAR_0->fw.lock))
                           ;
 VAR_1 = VAR_0->fw.up;
 VAR_0->fw.up = 0;

 if (VAR_0->irq.requested && VAR_0->irq.nr) {
  FUNC_0(VAR_0->irq.nr, VAR_0);
  VAR_0->irq.requested = 0;
 }
 if (VAR_1) {
  if (VAR_0->pdat->enable_irq)
   VAR_0->pdat->enable_irq(VAR_0->pdev, 0);
  FUNC_3(VAR_0);
  if (VAR_0->pdat->reset)
   VAR_0->pdat->reset(VAR_0->pdev, 1);
 }
 FUNC_2(&VAR_0->fw.lock);
}
