
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__* data; scalar_t__ vlan_tci; scalar_t__ vlan_etype; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_1__ h_ext; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct qede_dev *VAR_3,
       struct ethtool_rx_flow_spec *VAR_4)
{
 if (VAR_4->flow_type & VAR_2) {
  FUNC_0(VAR_3, "Don't support MAC extensions\n");
  return -VAR_0;
 }

 if ((VAR_4->flow_type & VAR_1) &&
     (VAR_4->h_ext.vlan_etype || VAR_4->h_ext.vlan_tci)) {
  FUNC_0(VAR_3, "Don't support vlan-based classification\n");
  return -VAR_0;
 }

 if ((VAR_4->flow_type & VAR_1) &&
     (VAR_4->h_ext.data[0] || VAR_4->h_ext.data[1])) {
  FUNC_0(VAR_3, "Don't support user defined data\n");
  return -VAR_0;
 }

 return 0;
}
