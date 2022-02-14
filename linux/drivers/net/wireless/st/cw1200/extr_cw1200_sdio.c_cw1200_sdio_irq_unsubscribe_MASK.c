
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwbus_priv {int func; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct hwbus_priv*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hwbus_priv *VAR_0)
{
 int VAR_1 = 0;

 FUNC_2("SW IRQ unsubscribe\n");

 if (VAR_0->pdata->irq) {
  FUNC_0(VAR_0->pdata->irq);
  FUNC_1(VAR_0->pdata->irq, VAR_0);
 } else {
  FUNC_3(VAR_0->func);
  VAR_1 = FUNC_5(VAR_0->func);
  FUNC_4(VAR_0->func);
 }
 return VAR_1;
}
