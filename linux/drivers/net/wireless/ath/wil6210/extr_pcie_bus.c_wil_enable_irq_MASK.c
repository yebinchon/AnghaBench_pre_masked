
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil6210_priv {int n_msi; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct wil6210_priv *VAR_0)
{
 int VAR_1 = VAR_0->pdev->irq;

 FUNC_0(VAR_1);
 if (VAR_0->n_msi == 3) {
  FUNC_0(VAR_1 + 1);
  FUNC_0(VAR_1 + 2);
 }
}
