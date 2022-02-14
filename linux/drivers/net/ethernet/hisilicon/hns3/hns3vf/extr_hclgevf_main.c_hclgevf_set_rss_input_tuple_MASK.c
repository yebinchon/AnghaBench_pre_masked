
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclgevf_rss_input_tuple_cmd {int ipv6_fragment_en; int ipv6_sctp_en; int ipv6_udp_en; int ipv6_tcp_en; int ipv4_fragment_en; int ipv4_sctp_en; int ipv4_udp_en; int ipv4_tcp_en; } ;
struct TYPE_3__ {int ipv6_fragment_en; int ipv6_sctp_en; int ipv6_udp_en; int ipv6_tcp_en; int ipv4_fragment_en; int ipv4_sctp_en; int ipv4_udp_en; int ipv4_tcp_en; } ;
struct hclgevf_rss_cfg {TYPE_1__ rss_tuple_sets; } ;
struct hclgevf_dev {TYPE_2__* pdev; int hw; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclgevf_desc*,int) ;
 int FUNC_2 (struct hclgevf_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_dev *VAR_1,
           struct hclgevf_rss_cfg *VAR_2)
{
 struct hclgevf_rss_input_tuple_cmd *VAR_3;
 struct hclgevf_desc VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, VAR_0, 0);

 VAR_3 = (struct hclgevf_rss_input_tuple_cmd *)VAR_4.data;

 VAR_3->ipv4_tcp_en = VAR_2->rss_tuple_sets.ipv4_tcp_en;
 VAR_3->ipv4_udp_en = VAR_2->rss_tuple_sets.ipv4_udp_en;
 VAR_3->ipv4_sctp_en = VAR_2->rss_tuple_sets.ipv4_sctp_en;
 VAR_3->ipv4_fragment_en = VAR_2->rss_tuple_sets.ipv4_fragment_en;
 VAR_3->ipv6_tcp_en = VAR_2->rss_tuple_sets.ipv6_tcp_en;
 VAR_3->ipv6_udp_en = VAR_2->rss_tuple_sets.ipv6_udp_en;
 VAR_3->ipv6_sctp_en = VAR_2->rss_tuple_sets.ipv6_sctp_en;
 VAR_3->ipv6_fragment_en = VAR_2->rss_tuple_sets.ipv6_fragment_en;

 VAR_5 = FUNC_1(&VAR_1->hw, &VAR_4, 1);
 if (VAR_5)
  FUNC_0(&VAR_1->pdev->dev,
   "Configure rss input fail, status = %d\n", VAR_5);
 return VAR_5;
}
