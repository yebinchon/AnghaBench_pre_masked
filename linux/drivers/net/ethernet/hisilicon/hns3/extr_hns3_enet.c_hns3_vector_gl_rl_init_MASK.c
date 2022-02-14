
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hns3_nic_priv {int dummy; } ;
struct TYPE_7__ {int gl_adapt_enable; void* flow_level; void* int_gl; } ;
struct TYPE_8__ {TYPE_3__ coal; } ;
struct TYPE_5__ {int gl_adapt_enable; void* flow_level; void* int_gl; } ;
struct TYPE_6__ {TYPE_1__ coal; } ;
struct hns3_enet_tqp_vector {TYPE_4__ tx_group; TYPE_2__ rx_group; } ;


 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hns3_enet_tqp_vector *VAR_2,
       struct hns3_nic_priv *VAR_3)
{






 VAR_2->tx_group.coal.gl_adapt_enable = 1;
 VAR_2->rx_group.coal.gl_adapt_enable = 1;

 VAR_2->tx_group.coal.int_gl = VAR_1;
 VAR_2->rx_group.coal.int_gl = VAR_1;

 VAR_2->rx_group.coal.flow_level = VAR_0;
 VAR_2->tx_group.coal.flow_level = VAR_0;
}
