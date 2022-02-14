
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcm_enet_priv {int napi; int tx_chan; int rx_chan; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_enet_priv*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4;
 struct bcm_enet_priv *VAR_5;

 VAR_4 = VAR_3;
 VAR_5 = FUNC_2(VAR_4);


 FUNC_0(VAR_5, 0, VAR_0, VAR_5->rx_chan);
 FUNC_0(VAR_5, 0, VAR_0, VAR_5->tx_chan);

 FUNC_1(&VAR_5->napi);

 return VAR_1;
}
