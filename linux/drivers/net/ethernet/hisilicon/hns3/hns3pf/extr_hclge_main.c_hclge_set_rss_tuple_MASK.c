
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct hnae3_handle {int dummy; } ;
struct TYPE_4__ {void* ipv6_fragment_en; void* ipv6_sctp_en; void* ipv6_udp_en; void* ipv6_tcp_en; void* ipv4_fragment_en; void* ipv4_sctp_en; void* ipv4_udp_en; void* ipv4_tcp_en; } ;
struct hclge_vport {TYPE_2__ rss_tuple_sets; struct hclge_dev* back; } ;
struct hclge_rss_input_tuple_cmd {void* ipv6_fragment_en; void* ipv6_sctp_en; void* ipv6_udp_en; void* ipv6_tcp_en; void* ipv4_fragment_en; void* ipv4_sctp_en; void* ipv4_udp_en; void* ipv4_tcp_en; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 void* FUNC_3 (struct ethtool_rxnfc*) ;
 int FUNC_4 (struct hclge_vport*) ;
 struct hclge_vport* FUNC_5 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_6(struct hnae3_handle *VAR_7,
          struct ethtool_rxnfc *VAR_8)
{
 struct hclge_vport *VAR_9 = FUNC_5(VAR_7);
 struct hclge_dev *VAR_10 = VAR_9->back;
 struct hclge_rss_input_tuple_cmd *VAR_11;
 struct hclge_desc VAR_12;
 u8 VAR_13;
 int VAR_14;

 if (VAR_8->data & ~(VAR_4 | VAR_3 |
     VAR_5 | VAR_6))
  return -VAR_0;

 VAR_11 = (struct hclge_rss_input_tuple_cmd *)VAR_12.data;
 FUNC_2(&VAR_12, VAR_1, 0);

 VAR_11->ipv4_tcp_en = VAR_9->rss_tuple_sets.ipv4_tcp_en;
 VAR_11->ipv4_udp_en = VAR_9->rss_tuple_sets.ipv4_udp_en;
 VAR_11->ipv4_sctp_en = VAR_9->rss_tuple_sets.ipv4_sctp_en;
 VAR_11->ipv4_fragment_en = VAR_9->rss_tuple_sets.ipv4_fragment_en;
 VAR_11->ipv6_tcp_en = VAR_9->rss_tuple_sets.ipv6_tcp_en;
 VAR_11->ipv6_udp_en = VAR_9->rss_tuple_sets.ipv6_udp_en;
 VAR_11->ipv6_sctp_en = VAR_9->rss_tuple_sets.ipv6_sctp_en;
 VAR_11->ipv6_fragment_en = VAR_9->rss_tuple_sets.ipv6_fragment_en;

 VAR_13 = FUNC_3(VAR_8);
 switch (VAR_8->flow_type) {
 case 131:
  VAR_11->ipv4_tcp_en = VAR_13;
  break;
 case 130:
  VAR_11->ipv6_tcp_en = VAR_13;
  break;
 case 129:
  VAR_11->ipv4_udp_en = VAR_13;
  break;
 case 128:
  VAR_11->ipv6_udp_en = VAR_13;
  break;
 case 133:
  VAR_11->ipv4_sctp_en = VAR_13;
  break;
 case 132:
  if ((VAR_8->data & VAR_5) ||
      (VAR_8->data & VAR_6))
   return -VAR_0;

  VAR_11->ipv6_sctp_en = VAR_13;
  break;
 case 135:
  VAR_11->ipv4_fragment_en = VAR_2;
  break;
 case 134:
  VAR_11->ipv6_fragment_en = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_1(&VAR_10->hw, &VAR_12, 1);
 if (VAR_14) {
  FUNC_0(&VAR_10->pdev->dev,
   "Set rss tuple fail, status = %d\n", VAR_14);
  return VAR_14;
 }

 VAR_9->rss_tuple_sets.ipv4_tcp_en = VAR_11->ipv4_tcp_en;
 VAR_9->rss_tuple_sets.ipv4_udp_en = VAR_11->ipv4_udp_en;
 VAR_9->rss_tuple_sets.ipv4_sctp_en = VAR_11->ipv4_sctp_en;
 VAR_9->rss_tuple_sets.ipv4_fragment_en = VAR_11->ipv4_fragment_en;
 VAR_9->rss_tuple_sets.ipv6_tcp_en = VAR_11->ipv6_tcp_en;
 VAR_9->rss_tuple_sets.ipv6_udp_en = VAR_11->ipv6_udp_en;
 VAR_9->rss_tuple_sets.ipv6_sctp_en = VAR_11->ipv6_sctp_en;
 VAR_9->rss_tuple_sets.ipv6_fragment_en = VAR_11->ipv6_fragment_en;
 FUNC_4(VAR_9);
 return 0;
}
