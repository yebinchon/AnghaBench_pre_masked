
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nixge_priv {int rx_irq; int tx_irq; int dma_err_tasklet; int napi; } ;
struct net_device {scalar_t__ phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct nixge_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nixge_priv*,int ) ;
 int FUNC_5 (struct nixge_priv*,int ,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3)
{
 struct nixge_priv *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5;

 FUNC_3(VAR_3);
 FUNC_1(&VAR_4->napi);

 if (VAR_3->phydev) {
  FUNC_8(VAR_3->phydev);
  FUNC_7(VAR_3->phydev);
 }

 VAR_5 = FUNC_4(VAR_4, VAR_1);
 FUNC_5(VAR_4, VAR_1,
       VAR_5 & (~VAR_0));
 VAR_5 = FUNC_4(VAR_4, VAR_2);
 FUNC_5(VAR_4, VAR_2,
       VAR_5 & (~VAR_0));

 FUNC_9(&VAR_4->dma_err_tasklet);

 FUNC_0(VAR_4->tx_irq, VAR_3);
 FUNC_0(VAR_4->rx_irq, VAR_3);

 FUNC_6(VAR_3);

 return 0;
}
