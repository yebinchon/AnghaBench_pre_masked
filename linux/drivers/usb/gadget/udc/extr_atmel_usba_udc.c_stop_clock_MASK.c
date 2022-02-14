
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usba_udc {int clocked; TYPE_1__* pdev; int pclk; int hclk; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct usba_udc *VAR_0)
{
 if (!VAR_0->clocked)
  return;

 FUNC_0(VAR_0->hclk);
 FUNC_0(VAR_0->pclk);

 VAR_0->clocked = 0;

 FUNC_1(&VAR_0->pdev->dev);
}
