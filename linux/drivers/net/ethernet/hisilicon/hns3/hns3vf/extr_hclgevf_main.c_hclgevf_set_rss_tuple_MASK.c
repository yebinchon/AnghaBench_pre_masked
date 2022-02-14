
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct hclgevf_rss_input_tuple_cmd {void* ipv6_fragment_en; void* ipv6_sctp_en; void* ipv6_udp_en; void* ipv6_tcp_en; void* ipv4_fragment_en; void* ipv4_sctp_en; void* ipv4_udp_en; void* ipv4_tcp_en; } ;
struct TYPE_6__ {void* ipv6_fragment_en; void* ipv6_sctp_en; void* ipv6_udp_en; void* ipv6_tcp_en; void* ipv4_fragment_en; void* ipv4_sctp_en; void* ipv4_udp_en; void* ipv4_tcp_en; } ;
struct hclgevf_rss_cfg {TYPE_3__ rss_tuple_sets; } ;
struct hclgevf_dev {TYPE_2__* pdev; int hw; struct hclgevf_rss_cfg rss_cfg; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (int *,char*,int) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (int *,struct hclgevf_desc*,int) ;
 int FUNC_3 (struct hclgevf_desc*,int ,int) ;
 void* FUNC_4 (struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_8,
     struct ethtool_rxnfc *VAR_9)
{
 struct hclgevf_dev *VAR_10 = FUNC_1(VAR_8);
 struct hclgevf_rss_cfg *VAR_11 = &VAR_10->rss_cfg;
 struct hclgevf_rss_input_tuple_cmd *VAR_12;
 struct hclgevf_desc VAR_13;
 u8 VAR_14;
 int VAR_15;

 if (VAR_8->pdev->revision == 0x20)
  return -VAR_1;

 if (VAR_9->data &
     ~(VAR_5 | VAR_4 | VAR_6 | VAR_7))
  return -VAR_0;

 VAR_12 = (struct hclgevf_rss_input_tuple_cmd *)VAR_13.data;
 FUNC_3(&VAR_13, VAR_2, 0);

 VAR_12->ipv4_tcp_en = VAR_11->rss_tuple_sets.ipv4_tcp_en;
 VAR_12->ipv4_udp_en = VAR_11->rss_tuple_sets.ipv4_udp_en;
 VAR_12->ipv4_sctp_en = VAR_11->rss_tuple_sets.ipv4_sctp_en;
 VAR_12->ipv4_fragment_en = VAR_11->rss_tuple_sets.ipv4_fragment_en;
 VAR_12->ipv6_tcp_en = VAR_11->rss_tuple_sets.ipv6_tcp_en;
 VAR_12->ipv6_udp_en = VAR_11->rss_tuple_sets.ipv6_udp_en;
 VAR_12->ipv6_sctp_en = VAR_11->rss_tuple_sets.ipv6_sctp_en;
 VAR_12->ipv6_fragment_en = VAR_11->rss_tuple_sets.ipv6_fragment_en;

 VAR_14 = FUNC_4(VAR_9);
 switch (VAR_9->flow_type) {
 case 131:
  VAR_12->ipv4_tcp_en = VAR_14;
  break;
 case 130:
  VAR_12->ipv6_tcp_en = VAR_14;
  break;
 case 129:
  VAR_12->ipv4_udp_en = VAR_14;
  break;
 case 128:
  VAR_12->ipv6_udp_en = VAR_14;
  break;
 case 133:
  VAR_12->ipv4_sctp_en = VAR_14;
  break;
 case 132:
  if ((VAR_9->data & VAR_6) ||
      (VAR_9->data & VAR_7))
   return -VAR_0;

  VAR_12->ipv6_sctp_en = VAR_14;
  break;
 case 135:
  VAR_12->ipv4_fragment_en = VAR_3;
  break;
 case 134:
  VAR_12->ipv6_fragment_en = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = FUNC_2(&VAR_10->hw, &VAR_13, 1);
 if (VAR_15) {
  FUNC_0(&VAR_10->pdev->dev,
   "Set rss tuple fail, status = %d\n", VAR_15);
  return VAR_15;
 }

 VAR_11->rss_tuple_sets.ipv4_tcp_en = VAR_12->ipv4_tcp_en;
 VAR_11->rss_tuple_sets.ipv4_udp_en = VAR_12->ipv4_udp_en;
 VAR_11->rss_tuple_sets.ipv4_sctp_en = VAR_12->ipv4_sctp_en;
 VAR_11->rss_tuple_sets.ipv4_fragment_en = VAR_12->ipv4_fragment_en;
 VAR_11->rss_tuple_sets.ipv6_tcp_en = VAR_12->ipv6_tcp_en;
 VAR_11->rss_tuple_sets.ipv6_udp_en = VAR_12->ipv6_udp_en;
 VAR_11->rss_tuple_sets.ipv6_sctp_en = VAR_12->ipv6_sctp_en;
 VAR_11->rss_tuple_sets.ipv6_fragment_en = VAR_12->ipv6_fragment_en;
 return 0;
}
