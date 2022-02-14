
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct TYPE_2__ {int ipv4_tcp_en; int ipv4_udp_en; int ipv6_tcp_en; int ipv6_udp_en; int ipv4_sctp_en; int ipv6_sctp_en; } ;
struct hclge_vport {TYPE_1__ rss_tuple_sets; } ;
struct ethtool_rxnfc {int flow_type; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_9,
          struct ethtool_rxnfc *VAR_10)
{
 struct hclge_vport *VAR_11 = FUNC_0(VAR_9);
 u8 VAR_12;

 VAR_10->data = 0;

 switch (VAR_10->flow_type) {
 case 131:
  VAR_12 = VAR_11->rss_tuple_sets.ipv4_tcp_en;
  break;
 case 129:
  VAR_12 = VAR_11->rss_tuple_sets.ipv4_udp_en;
  break;
 case 130:
  VAR_12 = VAR_11->rss_tuple_sets.ipv6_tcp_en;
  break;
 case 128:
  VAR_12 = VAR_11->rss_tuple_sets.ipv6_udp_en;
  break;
 case 133:
  VAR_12 = VAR_11->rss_tuple_sets.ipv4_sctp_en;
  break;
 case 132:
  VAR_12 = VAR_11->rss_tuple_sets.ipv6_sctp_en;
  break;
 case 135:
 case 134:
  VAR_12 = VAR_3 | VAR_1;
  break;
 default:
  return -VAR_0;
 }

 if (!VAR_12)
  return 0;

 if (VAR_12 & VAR_2)
  VAR_10->data |= VAR_8;
 if (VAR_12 & VAR_4)
  VAR_10->data |= VAR_7;
 if (VAR_12 & VAR_1)
  VAR_10->data |= VAR_5;
 if (VAR_12 & VAR_3)
  VAR_10->data |= VAR_6;

 return 0;
}
