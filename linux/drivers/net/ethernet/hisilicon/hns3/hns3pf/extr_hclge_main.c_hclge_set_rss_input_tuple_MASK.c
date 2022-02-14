
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hclge_rss_input_tuple_cmd {int ipv6_fragment_en; int ipv6_sctp_en; int ipv6_udp_en; int ipv6_tcp_en; int ipv4_fragment_en; int ipv4_sctp_en; int ipv4_udp_en; int ipv4_tcp_en; } ;
struct hclge_dev {TYPE_2__* pdev; int hw; TYPE_3__* vport; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_4__ {int ipv6_fragment_en; int ipv6_sctp_en; int ipv6_udp_en; int ipv6_tcp_en; int ipv4_fragment_en; int ipv4_sctp_en; int ipv4_udp_en; int ipv4_tcp_en; } ;
struct TYPE_6__ {TYPE_1__ rss_tuple_sets; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_1)
{
 struct hclge_rss_input_tuple_cmd *VAR_2;
 struct hclge_desc VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, VAR_0, 0);

 VAR_2 = (struct hclge_rss_input_tuple_cmd *)VAR_3.data;


 VAR_2->ipv4_tcp_en = VAR_1->vport[0].rss_tuple_sets.ipv4_tcp_en;
 VAR_2->ipv4_udp_en = VAR_1->vport[0].rss_tuple_sets.ipv4_udp_en;
 VAR_2->ipv4_sctp_en = VAR_1->vport[0].rss_tuple_sets.ipv4_sctp_en;
 VAR_2->ipv4_fragment_en = VAR_1->vport[0].rss_tuple_sets.ipv4_fragment_en;
 VAR_2->ipv6_tcp_en = VAR_1->vport[0].rss_tuple_sets.ipv6_tcp_en;
 VAR_2->ipv6_udp_en = VAR_1->vport[0].rss_tuple_sets.ipv6_udp_en;
 VAR_2->ipv6_sctp_en = VAR_1->vport[0].rss_tuple_sets.ipv6_sctp_en;
 VAR_2->ipv6_fragment_en = VAR_1->vport[0].rss_tuple_sets.ipv6_fragment_en;
 FUNC_3(&VAR_1->vport[0]);
 VAR_4 = FUNC_1(&VAR_1->hw, &VAR_3, 1);
 if (VAR_4)
  FUNC_0(&VAR_1->pdev->dev,
   "Configure rss input fail, status = %d\n", VAR_4);
 return VAR_4;
}
