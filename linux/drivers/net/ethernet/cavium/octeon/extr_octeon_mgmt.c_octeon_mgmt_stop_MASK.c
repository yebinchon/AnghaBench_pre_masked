
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_mgmt {int tx_ring; int tx_ring_handle; int dev; int rx_ring; int rx_ring_handle; int rx_list; int tx_list; int irq; int napi; } ;
struct net_device {scalar_t__ phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct octeon_mgmt* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct octeon_mgmt*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3)
{
 struct octeon_mgmt *VAR_4 = FUNC_4(VAR_3);

 FUNC_3(&VAR_4->napi);
 FUNC_6(VAR_3);

 if (VAR_3->phydev)
  FUNC_8(VAR_3->phydev);

 FUNC_5(VAR_3);

 FUNC_7(VAR_4);

 FUNC_1(VAR_4->irq, VAR_3);


 FUNC_10(&VAR_4->tx_list);
 FUNC_10(&VAR_4->rx_list);

 FUNC_0(VAR_4->dev, VAR_4->rx_ring_handle,
    FUNC_9(VAR_1),
    VAR_0);
 FUNC_2(VAR_4->rx_ring);

 FUNC_0(VAR_4->dev, VAR_4->tx_ring_handle,
    FUNC_9(VAR_2),
    VAR_0);
 FUNC_2(VAR_4->tx_ring);

 return 0;
}
