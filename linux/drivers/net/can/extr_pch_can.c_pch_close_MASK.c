
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct pch_can_priv {TYPE_2__ can; TYPE_1__* dev; int napi; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *) ;
 struct pch_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pch_can_priv*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct pch_can_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_1);
 FUNC_2(&VAR_2->napi);
 FUNC_5(VAR_2);
 FUNC_1(VAR_2->dev->irq, VAR_1);
 FUNC_0(VAR_1);
 VAR_2->can.state = VAR_0;
 return 0;
}
