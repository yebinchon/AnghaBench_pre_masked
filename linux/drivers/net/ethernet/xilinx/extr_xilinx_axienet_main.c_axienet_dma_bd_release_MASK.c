
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct axienet_local {int rx_bd_num; int tx_bd_num; int tx_bd_p; TYPE_2__* tx_bd_v; int rx_bd_p; TYPE_2__* rx_bd_v; int max_frm_size; } ;
struct TYPE_4__ {int skb; int phys; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct axienet_local* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 int VAR_2;
 struct axienet_local *VAR_3 = FUNC_3(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_3->rx_bd_num; VAR_2++) {
  FUNC_2(VAR_1->dev.parent, VAR_3->rx_bd_v[VAR_2].phys,
     VAR_3->max_frm_size, VAR_0);
  FUNC_0(VAR_3->rx_bd_v[VAR_2].skb);
 }

 if (VAR_3->rx_bd_v) {
  FUNC_1(VAR_1->dev.parent,
      sizeof(*VAR_3->rx_bd_v) * VAR_3->rx_bd_num,
      VAR_3->rx_bd_v,
      VAR_3->rx_bd_p);
 }
 if (VAR_3->tx_bd_v) {
  FUNC_1(VAR_1->dev.parent,
      sizeof(*VAR_3->tx_bd_v) * VAR_3->tx_bd_num,
      VAR_3->tx_bd_v,
      VAR_3->tx_bd_p);
 }
}
