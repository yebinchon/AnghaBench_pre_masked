
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lis3lv02d {int * idev; int miscdev; scalar_t__ irq; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ irq2; } ;


 int FUNC_0 (scalar_t__,struct lis3lv02d*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct lis3lv02d *VAR_0)
{
 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_0);
 if (VAR_0->pdata && VAR_0->pdata->irq2)
  FUNC_0(VAR_0->pdata->irq2, VAR_0);

 if (!VAR_0->idev)
  return;

 if (VAR_0->irq)
  FUNC_3(&VAR_0->miscdev);
 FUNC_2(VAR_0->idev);
 FUNC_1(VAR_0->idev);
 VAR_0->idev = ((void*)0);
}
