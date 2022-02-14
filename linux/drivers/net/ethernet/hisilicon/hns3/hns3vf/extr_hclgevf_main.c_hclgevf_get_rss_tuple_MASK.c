
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct TYPE_4__ {int ipv4_tcp_en; int ipv4_udp_en; int ipv6_tcp_en; int ipv6_udp_en; int ipv4_sctp_en; int ipv6_sctp_en; } ;
struct hclgevf_rss_cfg {TYPE_2__ rss_tuple_sets; } ;
struct hclgevf_dev {struct hclgevf_rss_cfg rss_cfg; } ;
struct ethtool_rxnfc {int flow_type; int data; } ;
struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_10,
     struct ethtool_rxnfc *VAR_11)
{
 struct hclgevf_dev *VAR_12 = FUNC_0(VAR_10);
 struct hclgevf_rss_cfg *VAR_13 = &VAR_12->rss_cfg;
 u8 VAR_14;

 if (VAR_10->pdev->revision == 0x20)
  return -VAR_1;

 VAR_11->data = 0;

 switch (VAR_11->flow_type) {
 case 131:
  VAR_14 = VAR_13->rss_tuple_sets.ipv4_tcp_en;
  break;
 case 129:
  VAR_14 = VAR_13->rss_tuple_sets.ipv4_udp_en;
  break;
 case 130:
  VAR_14 = VAR_13->rss_tuple_sets.ipv6_tcp_en;
  break;
 case 128:
  VAR_14 = VAR_13->rss_tuple_sets.ipv6_udp_en;
  break;
 case 133:
  VAR_14 = VAR_13->rss_tuple_sets.ipv4_sctp_en;
  break;
 case 132:
  VAR_14 = VAR_13->rss_tuple_sets.ipv6_sctp_en;
  break;
 case 135:
 case 134:
  VAR_14 = VAR_4 | VAR_2;
  break;
 default:
  return -VAR_0;
 }

 if (!VAR_14)
  return 0;

 if (VAR_14 & VAR_3)
  VAR_11->data |= VAR_9;
 if (VAR_14 & VAR_5)
  VAR_11->data |= VAR_8;
 if (VAR_14 & VAR_2)
  VAR_11->data |= VAR_6;
 if (VAR_14 & VAR_4)
  VAR_11->data |= VAR_7;

 return 0;
}
