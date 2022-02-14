
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm_sysport_priv {unsigned int num_rx_bds; int netdev; struct bcm_sysport_cb* rx_cbs; TYPE_1__* pdev; } ;
struct bcm_sysport_cb {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm_sysport_cb*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct bcm_sysport_cb*,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct bcm_sysport_cb*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct bcm_sysport_priv*,int ,int ,char*) ;
 int FUNC_6 (struct bcm_sysport_priv*,int ) ;

__attribute__((used)) static void FUNC_7(struct bcm_sysport_priv *VAR_6)
{
 struct bcm_sysport_cb *VAR_7;
 unsigned int VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_6(VAR_6, VAR_2);
 if (!(VAR_9 & VAR_1))
  FUNC_4(VAR_6->netdev, "RDMA not stopped!\n");

 for (VAR_8 = 0; VAR_8 < VAR_6->num_rx_bds; VAR_8++) {
  VAR_7 = &VAR_6->rx_cbs[VAR_8];
  if (FUNC_1(VAR_7, VAR_4))
   FUNC_2(&VAR_6->pdev->dev,
      FUNC_1(VAR_7, VAR_4),
      VAR_3, VAR_0);
  FUNC_0(VAR_7);
 }

 FUNC_3(VAR_6->rx_cbs);
 VAR_6->rx_cbs = ((void*)0);

 FUNC_5(VAR_6, VAR_5, VAR_6->netdev, "RDMA fini done\n");
}
