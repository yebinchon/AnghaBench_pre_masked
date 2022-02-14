
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwbus_priv {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct hwbus_priv *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->pdata->irq)
  VAR_2 = FUNC_0(VAR_0->pdata->irq, VAR_1);
 return VAR_2;
}
