
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_pf {int * irq_tracker; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ice_pf*) ;

__attribute__((used)) static void FUNC_2(struct ice_pf *VAR_0)
{
 FUNC_1(VAR_0);

 if (VAR_0->irq_tracker) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->irq_tracker);
  VAR_0->irq_tracker = ((void*)0);
 }
}
