
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* spi; } ;
struct encx24j600_priv {TYPE_2__ ctx; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int ,struct encx24j600_priv*) ;
 struct encx24j600_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct encx24j600_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(VAR_1->ctx.spi->irq, VAR_1);
 return 0;
}
