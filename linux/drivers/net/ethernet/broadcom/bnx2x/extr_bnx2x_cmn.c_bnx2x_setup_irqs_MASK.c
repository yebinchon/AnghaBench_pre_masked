
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x {int flags; TYPE_3__* dev; TYPE_2__* msix_table; TYPE_1__* pdev; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_3)
{
 int VAR_4 = 0;
 if (VAR_3->flags & VAR_0 &&
     !(VAR_3->flags & VAR_2)) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   return VAR_4;
 } else {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4) {
   FUNC_0("IRQ request failed  rc %d, aborting\n", VAR_4);
   return VAR_4;
  }
  if (VAR_3->flags & VAR_1) {
   VAR_3->dev->irq = VAR_3->pdev->irq;
   FUNC_3(VAR_3->dev, "using MSI IRQ %d\n",
        VAR_3->dev->irq);
  }
  if (VAR_3->flags & VAR_0) {
   VAR_3->dev->irq = VAR_3->msix_table[0].vector;
   FUNC_3(VAR_3->dev, "using MSIX IRQ %d\n",
        VAR_3->dev->irq);
  }
 }

 return 0;
}
