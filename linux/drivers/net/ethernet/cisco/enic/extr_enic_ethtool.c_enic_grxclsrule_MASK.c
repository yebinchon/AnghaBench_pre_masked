
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct ethtool_rxnfc {int fs; } ;
struct TYPE_13__ {void* pdst; void* psrc; void* ip4dst; void* ip4src; } ;
struct TYPE_14__ {TYPE_5__ tcp_ip4_spec; } ;
struct TYPE_10__ {int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_11__ {TYPE_2__ tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {int ring_cookie; TYPE_6__ m_u; TYPE_3__ h_u; int flow_type; scalar_t__ location; } ;
struct TYPE_12__ {int dst; int src; } ;
struct TYPE_9__ {int ip_proto; } ;
struct TYPE_15__ {TYPE_4__ ports; TYPE_1__ basic; } ;
struct enic_rfs_fltr_node {int rq_id; TYPE_7__ keys; } ;
struct enic {int dummy; } ;
typedef void* __u32 ;
typedef void* __u16 ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 struct enic_rfs_fltr_node* FUNC_2 (struct enic*,int ) ;

__attribute__((used)) static int FUNC_3(struct enic *VAR_3, struct ethtool_rxnfc *VAR_4)
{
 struct ethtool_rx_flow_spec *VAR_5 =
    (struct ethtool_rx_flow_spec *)&VAR_4->fs;
 struct enic_rfs_fltr_node *VAR_6;

 VAR_6 = FUNC_2(VAR_3, (u16)VAR_5->location);
 if (!VAR_6)
  return -VAR_0;
 switch (VAR_6->keys.basic.ip_proto) {
 case 129:
  VAR_5->flow_type = VAR_1;
  break;
 case 128:
  VAR_5->flow_type = VAR_2;
  break;
 default:
  return -VAR_0;
  break;
 }

 VAR_5->h_u.tcp_ip4_spec.ip4src = FUNC_1(&VAR_6->keys);
 VAR_5->m_u.tcp_ip4_spec.ip4src = (__u32)~0;

 VAR_5->h_u.tcp_ip4_spec.ip4dst = FUNC_0(&VAR_6->keys);
 VAR_5->m_u.tcp_ip4_spec.ip4dst = (__u32)~0;

 VAR_5->h_u.tcp_ip4_spec.psrc = VAR_6->keys.ports.src;
 VAR_5->m_u.tcp_ip4_spec.psrc = (__u16)~0;

 VAR_5->h_u.tcp_ip4_spec.pdst = VAR_6->keys.ports.dst;
 VAR_5->m_u.tcp_ip4_spec.pdst = (__u16)~0;

 VAR_5->ring_cookie = VAR_6->rq_id;

 return 0;
}
