
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct temac_local {int tx_bd_p; TYPE_2__* tx_bd_v; int rx_bd_p; TYPE_2__* rx_bd_v; int * rx_skb; int (* dma_out ) (struct temac_local*,int ,int ) ;} ;
struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct temac_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct temac_local*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct temac_local *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;


 VAR_7->dma_out(VAR_7, VAR_0, VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (!VAR_7->rx_skb[VAR_8])
   break;
  else {
   FUNC_2(VAR_6->dev.parent, VAR_7->rx_bd_v[VAR_8].phys,
     VAR_5, VAR_2);
   FUNC_0(VAR_7->rx_skb[VAR_8]);
  }
 }
 if (VAR_7->rx_bd_v)
  FUNC_1(VAR_6->dev.parent,
    sizeof(*VAR_7->rx_bd_v) * VAR_3,
    VAR_7->rx_bd_v, VAR_7->rx_bd_p);
 if (VAR_7->tx_bd_v)
  FUNC_1(VAR_6->dev.parent,
    sizeof(*VAR_7->tx_bd_v) * VAR_4,
    VAR_7->tx_bd_v, VAR_7->tx_bd_p);
}
