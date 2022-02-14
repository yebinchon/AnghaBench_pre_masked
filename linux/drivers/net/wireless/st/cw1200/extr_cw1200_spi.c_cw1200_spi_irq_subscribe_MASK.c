
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwbus_priv {TYPE_1__* func; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct hwbus_priv*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int ,int,char*,struct hwbus_priv*) ;

__attribute__((used)) static int FUNC_5(struct hwbus_priv *VAR_3)
{
 int VAR_4;

 FUNC_3("SW IRQ subscribe\n");

 VAR_4 = FUNC_4(VAR_3->func->irq, ((void*)0),
       VAR_2,
       VAR_1 | VAR_0,
       "cw1200_wlan_irq", VAR_3);
 if (FUNC_0(VAR_4 < 0))
  goto exit;

 VAR_4 = FUNC_1(VAR_3->func->irq);
 if (FUNC_0(VAR_4))
  goto free_irq;

 return 0;

free_irq:
 FUNC_2(VAR_3->func->irq, VAR_3);
exit:
 return VAR_4;
}
