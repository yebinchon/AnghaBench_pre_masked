
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hns3_nic_priv {struct hnae3_handle* ae_handle; } ;
struct TYPE_8__ {int int_gl; } ;
struct TYPE_9__ {TYPE_3__ coal; } ;
struct TYPE_6__ {int int_gl; } ;
struct TYPE_7__ {TYPE_1__ coal; } ;
struct hns3_enet_tqp_vector {TYPE_4__ rx_group; TYPE_2__ tx_group; } ;
struct TYPE_10__ {int int_rl_setting; } ;
struct hnae3_handle {TYPE_5__ kinfo; } ;


 int FUNC_0 (struct hns3_enet_tqp_vector*,int ) ;
 int FUNC_1 (struct hns3_enet_tqp_vector*,int ) ;
 int FUNC_2 (struct hns3_enet_tqp_vector*,int ) ;

__attribute__((used)) static void FUNC_3(struct hns3_enet_tqp_vector *VAR_0,
          struct hns3_nic_priv *VAR_1)
{
 struct hnae3_handle *VAR_2 = VAR_1->ae_handle;

 FUNC_2(VAR_0,
           VAR_0->tx_group.coal.int_gl);
 FUNC_1(VAR_0,
           VAR_0->rx_group.coal.int_gl);
 FUNC_0(VAR_0, VAR_2->kinfo.int_rl_setting);
}
