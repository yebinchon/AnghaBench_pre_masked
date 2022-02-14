
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ether_type; int inner_vlan_tpid; int inner_vlan_tci; int dmac; int * smac; } ;
struct TYPE_5__ {int inner_vlan_tpid; int inner_vlan_tci; int dmac; int smac; } ;
struct TYPE_4__ {scalar_t__ ip_proto; } ;
struct bnxt_tc_flow {int flags; TYPE_3__ l2_mask; TYPE_2__ l2_key; TYPE_1__ l4_key; } ;
struct bnxt {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static bool FUNC_4(struct bnxt *VAR_3, struct bnxt_tc_flow *VAR_4)
{

 if ((VAR_4->flags & VAR_0) &&
     (VAR_4->l4_key.ip_proto != VAR_1 &&
      VAR_4->l4_key.ip_proto != VAR_2)) {
  FUNC_3(VAR_3->dev, "Cannot offload non-TCP/UDP (%d) ports",
       VAR_4->l4_key.ip_proto);
  return 0;
 }


 if (FUNC_0(&VAR_4->l2_key.smac, sizeof(VAR_4->l2_key.smac)) &&
     !FUNC_1(VAR_4->l2_mask.smac, sizeof(VAR_4->l2_mask.smac))) {
  FUNC_3(VAR_3->dev, "Wildcard match unsupported for Source MAC\n");
  return 0;
 }
 if (FUNC_0(&VAR_4->l2_key.dmac, sizeof(VAR_4->l2_key.dmac)) &&
     !FUNC_1(&VAR_4->l2_mask.dmac, sizeof(VAR_4->l2_mask.dmac))) {
  FUNC_3(VAR_3->dev, "Wildcard match unsupported for Dest MAC\n");
  return 0;
 }


 if (FUNC_0(&VAR_4->l2_key.inner_vlan_tci,
       sizeof(VAR_4->l2_key.inner_vlan_tci)) &&
     !FUNC_2(VAR_4->l2_mask.inner_vlan_tci,
     VAR_4->l2_key.inner_vlan_tci)) {
  FUNC_3(VAR_3->dev, "Unsupported VLAN TCI\n");
  return 0;
 }
 if (FUNC_0(&VAR_4->l2_key.inner_vlan_tpid,
       sizeof(VAR_4->l2_key.inner_vlan_tpid)) &&
     !FUNC_1(&VAR_4->l2_mask.inner_vlan_tpid,
      sizeof(VAR_4->l2_mask.inner_vlan_tpid))) {
  FUNC_3(VAR_3->dev, "Wildcard match unsupported for VLAN TPID\n");
  return 0;
 }


 if (!FUNC_1(&VAR_4->l2_mask.ether_type,
      sizeof(VAR_4->l2_mask.ether_type))) {
  FUNC_3(VAR_3->dev, "Wildcard match unsupported for Ethertype\n");
  return 0;
 }

 return 1;
}
