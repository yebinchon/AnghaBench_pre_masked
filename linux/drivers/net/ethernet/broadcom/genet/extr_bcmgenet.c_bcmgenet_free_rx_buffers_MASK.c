
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct enet_cb {int dummy; } ;
struct bcmgenet_priv {int num_rx_bds; TYPE_1__* pdev; struct enet_cb* rx_cbs; } ;
struct TYPE_2__ {int dev; } ;


 struct sk_buff* FUNC_0 (int *,struct enet_cb*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct bcmgenet_priv *VAR_0)
{
 struct sk_buff *VAR_1;
 struct enet_cb *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_rx_bds; VAR_3++) {
  VAR_2 = &VAR_0->rx_cbs[VAR_3];

  VAR_1 = FUNC_0(&VAR_0->pdev->dev, VAR_2);
  if (VAR_1)
   FUNC_1(VAR_1);
 }
}
