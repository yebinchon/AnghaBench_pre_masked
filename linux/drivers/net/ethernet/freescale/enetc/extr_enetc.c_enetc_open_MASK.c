
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ phydev; } ;
struct enetc_ndev_priv {int bdr_int_num; TYPE_1__** int_vector; int num_rx_rings; int num_tx_rings; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (struct enetc_ndev_priv*) ;
 int FUNC_1 (struct enetc_ndev_priv*) ;
 int FUNC_2 (struct enetc_ndev_priv*) ;
 int FUNC_3 (struct enetc_ndev_priv*) ;
 int FUNC_4 (struct enetc_ndev_priv*) ;
 int FUNC_5 (struct enetc_ndev_priv*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct enetc_ndev_priv*) ;
 int FUNC_8 (struct enetc_ndev_priv*) ;
 int FUNC_9 (int *) ;
 struct enetc_ndev_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int ) ;
 int FUNC_13 (struct net_device*,int ) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;

int FUNC_17(struct net_device *VAR_0)
{
 struct enetc_ndev_priv *VAR_1 = FUNC_10(VAR_0);
 int VAR_2, VAR_3;

 VAR_3 = FUNC_8(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3)
  goto err_phy_connect;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  goto err_alloc_tx;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto err_alloc_rx;

 FUNC_7(VAR_1);

 VAR_3 = FUNC_13(VAR_0, VAR_1->num_tx_rings);
 if (VAR_3)
  goto err_set_queues;

 VAR_3 = FUNC_12(VAR_0, VAR_1->num_rx_rings);
 if (VAR_3)
  goto err_set_queues;

 for (VAR_2 = 0; VAR_2 < VAR_1->bdr_int_num; VAR_2++)
  FUNC_9(&VAR_1->int_vector[VAR_2]->napi);

 FUNC_2(VAR_1);

 if (VAR_0->phydev)
  FUNC_16(VAR_0->phydev);
 else
  FUNC_11(VAR_0);

 FUNC_14(VAR_0);

 return 0;

err_set_queues:
 FUNC_4(VAR_1);
err_alloc_rx:
 FUNC_5(VAR_1);
err_alloc_tx:
 if (VAR_0->phydev)
  FUNC_15(VAR_0->phydev);
err_phy_connect:
 FUNC_3(VAR_1);

 return VAR_3;
}
