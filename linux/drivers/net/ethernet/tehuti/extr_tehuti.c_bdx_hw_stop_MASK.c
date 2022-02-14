
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdx_priv {int ndev; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bdx_priv*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bdx_priv *VAR_1)
{
 VAR_0;
 FUNC_1(VAR_1);
 FUNC_2(VAR_1->pdev->irq, VAR_1->ndev);

 FUNC_3(VAR_1->ndev);
 FUNC_4(VAR_1->ndev);

 FUNC_0();
}
