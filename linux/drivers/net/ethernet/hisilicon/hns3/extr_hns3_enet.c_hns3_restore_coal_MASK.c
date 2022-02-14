
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct hns3_nic_priv {int vector_num; int rx_coal; TYPE_3__* tqp_vector; int tx_coal; } ;
struct hns3_enet_coalesce {int dummy; } ;
struct TYPE_4__ {int coal; } ;
struct TYPE_5__ {int coal; } ;
struct TYPE_6__ {TYPE_1__ rx_group; TYPE_2__ tx_group; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct hns3_nic_priv *VAR_0)
{
 u16 VAR_1 = VAR_0->vector_num;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(&VAR_0->tqp_vector[VAR_2].tx_group.coal, &VAR_0->tx_coal,
         sizeof(struct hns3_enet_coalesce));
  FUNC_0(&VAR_0->tqp_vector[VAR_2].rx_group.coal, &VAR_0->rx_coal,
         sizeof(struct hns3_enet_coalesce));
 }
}
