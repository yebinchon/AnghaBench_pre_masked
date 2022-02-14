
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int napi; } ;
struct TYPE_3__ {int napi; } ;
struct xrx200_priv {int clk; TYPE_2__ chan_rx; TYPE_1__ chan_tx; struct net_device* net_dev; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 struct xrx200_priv* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct xrx200_priv*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct xrx200_priv *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2 = VAR_1->net_dev;


 FUNC_2(VAR_2);
 FUNC_1(&VAR_1->chan_tx.napi);
 FUNC_1(&VAR_1->chan_rx.napi);


 FUNC_4(VAR_2);


 FUNC_0(VAR_1->clk);


 FUNC_5(VAR_1);

 return 0;
}
