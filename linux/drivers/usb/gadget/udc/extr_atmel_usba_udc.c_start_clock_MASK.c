
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usba_udc {int clocked; int pclk; int hclk; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct usba_udc *VAR_0)
{
 int VAR_1;

 if (VAR_0->clocked)
  return 0;

 FUNC_2(&VAR_0->pdev->dev);

 VAR_1 = FUNC_1(VAR_0->pclk);
 if (VAR_1)
  return VAR_1;
 VAR_1 = FUNC_1(VAR_0->hclk);
 if (VAR_1) {
  FUNC_0(VAR_0->pclk);
  return VAR_1;
 }

 VAR_0->clocked = 1;
 return 0;
}
