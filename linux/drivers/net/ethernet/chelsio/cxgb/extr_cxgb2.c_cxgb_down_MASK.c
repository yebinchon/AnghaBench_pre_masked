
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ has_msi; } ;
struct adapter {TYPE_2__* pdev; TYPE_1__ params; int sge; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int ,struct adapter*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_0)
{
 FUNC_3(VAR_0->sge);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->pdev->irq, VAR_0);
 if (VAR_0->params.has_msi)
  FUNC_1(VAR_0->pdev);
}
