
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct qede_arfs_fltr_node {int b_is_drop; scalar_t__ vfid; int rxq_id; int next_rxq_id; } ;
struct ethtool_rx_flow_spec {scalar_t__ ring_cookie; } ;


 int FUNC_0 (struct qede_dev*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct qede_dev *VAR_2,
          struct qede_arfs_fltr_node *VAR_3,
          struct ethtool_rx_flow_spec *VAR_4)
{
 if (VAR_4->ring_cookie == VAR_1) {
  VAR_3->b_is_drop = 1;
  return;
 }

 VAR_3->vfid = FUNC_2(VAR_4->ring_cookie);
 VAR_3->rxq_id = FUNC_1(VAR_4->ring_cookie);
 VAR_3->next_rxq_id = VAR_3->rxq_id;

 if (VAR_3->vfid)
  FUNC_0(VAR_2, VAR_0,
      "Configuring N-tuple for VF 0x%02x\n", VAR_3->vfid - 1);
}
