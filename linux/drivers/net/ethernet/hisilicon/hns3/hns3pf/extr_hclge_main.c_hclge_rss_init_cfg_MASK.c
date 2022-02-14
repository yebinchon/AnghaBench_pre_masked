
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* ipv6_fragment_en; void* ipv6_sctp_en; void* ipv6_udp_en; void* ipv6_tcp_en; void* ipv4_fragment_en; void* ipv4_sctp_en; void* ipv4_udp_en; void* ipv4_tcp_en; } ;
struct hclge_vport {int rss_algo; int rss_hash_key; TYPE_2__ rss_tuple_sets; } ;
struct hclge_dev {int num_vmdq_vport; TYPE_1__* pdev; struct hclge_vport* vport; } ;
struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hclge_dev *VAR_6)
{
 int VAR_7, VAR_8 = VAR_1;
 struct hclge_vport *VAR_9 = VAR_6->vport;

 if (VAR_6->pdev->revision >= 0x21)
  VAR_8 = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_vmdq_vport + 1; VAR_7++) {
  VAR_9[VAR_7].rss_tuple_sets.ipv4_tcp_en =
   VAR_2;
  VAR_9[VAR_7].rss_tuple_sets.ipv4_udp_en =
   VAR_2;
  VAR_9[VAR_7].rss_tuple_sets.ipv4_sctp_en =
   VAR_3;
  VAR_9[VAR_7].rss_tuple_sets.ipv4_fragment_en =
   VAR_2;
  VAR_9[VAR_7].rss_tuple_sets.ipv6_tcp_en =
   VAR_2;
  VAR_9[VAR_7].rss_tuple_sets.ipv6_udp_en =
   VAR_2;
  VAR_9[VAR_7].rss_tuple_sets.ipv6_sctp_en =
   VAR_3;
  VAR_9[VAR_7].rss_tuple_sets.ipv6_fragment_en =
   VAR_2;

  VAR_9[VAR_7].rss_algo = VAR_8;

  FUNC_1(VAR_9[VAR_7].rss_hash_key, VAR_5,
         VAR_4);
 }

 FUNC_0(VAR_6);
}
