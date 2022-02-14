
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct qede_dev {int arfs; } ;
struct TYPE_8__ {scalar_t__ eth_proto; scalar_t__ ip_proto; int dst_ipv6; int src_ipv6; int dst_port; int src_port; int dst_ipv4; int src_ipv4; } ;
struct qede_arfs_fltr_node {int rxq_id; scalar_t__ b_is_drop; scalar_t__ vfid; TYPE_4__ tuple; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {int ip6dst; int ip6src; int pdst; int psrc; } ;
struct TYPE_5__ {int ip4dst; int ip4src; int pdst; int psrc; } ;
struct TYPE_7__ {TYPE_2__ tcp_ip6_spec; TYPE_1__ tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {int ring_cookie; TYPE_3__ h_u; int flow_type; int location; } ;
struct ethtool_rxnfc {int data; struct ethtool_rx_flow_spec fs; } ;


 int FUNC_0 (struct qede_dev*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct qede_dev*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (struct qede_dev*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 struct qede_arfs_fltr_node* FUNC_6 (int ,int ) ;

int FUNC_7(struct qede_dev *VAR_11, struct ethtool_rxnfc *VAR_12)
{
 struct ethtool_rx_flow_spec *VAR_13 = &VAR_12->fs;
 struct qede_arfs_fltr_node *VAR_14 = ((void*)0);
 int VAR_15 = 0;

 VAR_12->data = VAR_5;

 FUNC_2(VAR_11);

 if (!VAR_11->arfs) {
  VAR_15 = -VAR_1;
  goto unlock;
 }

 VAR_14 = FUNC_6(FUNC_1(VAR_11, 0),
      VAR_13->location);
 if (!VAR_14) {
  FUNC_0(VAR_11, "Rule not found - location=0x%x\n",
     VAR_13->location);
  VAR_15 = -VAR_0;
  goto unlock;
 }

 if (VAR_14->tuple.eth_proto == FUNC_4(VAR_3)) {
  if (VAR_14->tuple.ip_proto == VAR_4)
   VAR_13->flow_type = VAR_7;
  else
   VAR_13->flow_type = VAR_9;

  VAR_13->h_u.tcp_ip4_spec.psrc = VAR_14->tuple.src_port;
  VAR_13->h_u.tcp_ip4_spec.pdst = VAR_14->tuple.dst_port;
  VAR_13->h_u.tcp_ip4_spec.ip4src = VAR_14->tuple.src_ipv4;
  VAR_13->h_u.tcp_ip4_spec.ip4dst = VAR_14->tuple.dst_ipv4;
 } else {
  if (VAR_14->tuple.ip_proto == VAR_4)
   VAR_13->flow_type = VAR_8;
  else
   VAR_13->flow_type = VAR_10;
  VAR_13->h_u.tcp_ip6_spec.psrc = VAR_14->tuple.src_port;
  VAR_13->h_u.tcp_ip6_spec.pdst = VAR_14->tuple.dst_port;
  FUNC_5(&VAR_13->h_u.tcp_ip6_spec.ip6src,
         &VAR_14->tuple.src_ipv6, sizeof(struct in6_addr));
  FUNC_5(&VAR_13->h_u.tcp_ip6_spec.ip6dst,
         &VAR_14->tuple.dst_ipv6, sizeof(struct in6_addr));
 }

 VAR_13->ring_cookie = VAR_14->rxq_id;

 if (VAR_14->vfid) {
  VAR_13->ring_cookie |= ((u64)VAR_14->vfid) <<
     VAR_2;
 }

 if (VAR_14->b_is_drop)
  VAR_13->ring_cookie = VAR_6;
unlock:
 FUNC_3(VAR_11);
 return VAR_15;
}
