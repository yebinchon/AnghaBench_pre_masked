
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {int flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_1)
{



 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1->pdev->irq, VAR_1);




 FUNC_2(VAR_1);
}
