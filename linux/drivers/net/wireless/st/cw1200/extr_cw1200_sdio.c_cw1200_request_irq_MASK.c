
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct hwbus_priv {TYPE_1__* pdata; TYPE_2__* func; } ;
struct TYPE_5__ {int num; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int,char*,struct hwbus_priv*) ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct hwbus_priv *VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 VAR_7 = FUNC_4(VAR_5->func, VAR_2, &VAR_6);
 if (FUNC_1(VAR_6))
  goto err;


 VAR_7 |= FUNC_0(0);


 VAR_7 |= FUNC_0(VAR_5->func->num);

 FUNC_5(VAR_5->func, VAR_7, VAR_2, &VAR_6);
 if (FUNC_1(VAR_6))
  goto err;

 VAR_6 = FUNC_2(VAR_5->pdata->irq);
 if (FUNC_1(VAR_6))
  goto err;


 VAR_6 = FUNC_3(VAR_5->pdata->irq, VAR_3,
        VAR_4,
        VAR_1 | VAR_0,
        "cw1200_wlan_irq", VAR_5);
 if (FUNC_1(VAR_6))
  goto err;

 return 0;

err:
 return VAR_6;
}
