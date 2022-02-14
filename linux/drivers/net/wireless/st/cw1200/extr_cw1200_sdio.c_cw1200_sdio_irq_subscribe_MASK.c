
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwbus_priv {int func; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (struct hwbus_priv*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hwbus_priv *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1("SW IRQ subscribe\n");
 FUNC_2(VAR_1->func);
 if (VAR_1->pdata->irq)
  VAR_2 = FUNC_0(VAR_1);
 else
  VAR_2 = FUNC_3(VAR_1->func, VAR_0);

 FUNC_4(VAR_1->func);
 return VAR_2;
}
