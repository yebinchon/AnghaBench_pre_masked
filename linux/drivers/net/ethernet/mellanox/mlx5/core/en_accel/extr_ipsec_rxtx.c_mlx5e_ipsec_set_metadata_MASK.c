
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_offload {int proto; } ;
struct tcphdr {int seq; int dest; int source; } ;
struct sk_buff {int dev; int len; int inner_transport_header; int inner_network_header; int transport_header; int network_header; } ;
struct TYPE_4__ {int seq; int mss_inv; int esp_next_proto; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct mlx5e_ipsec_metadata {TYPE_2__ content; int syndrome; } ;
struct ip_esp_hdr {int seq_no; } ;
struct TYPE_6__ {int gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct tcphdr* FUNC_1 (struct sk_buff*) ;
 struct ip_esp_hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_2,
         struct mlx5e_ipsec_metadata *VAR_3,
         struct xfrm_offload *VAR_4)
{
 struct ip_esp_hdr *VAR_5;
 struct tcphdr *VAR_6;

 if (FUNC_7(VAR_2)) {

  VAR_5 = FUNC_2(VAR_2);
  VAR_6 = FUNC_1(VAR_2);
  FUNC_4(VAR_2->dev, "   Offloading GSO packet outer L3 %u; L4 %u; Inner L3 %u; L4 %u\n",
      VAR_2->network_header,
      VAR_2->transport_header,
      VAR_2->inner_network_header,
      VAR_2->inner_transport_header);
  FUNC_4(VAR_2->dev, "   Offloading GSO packet of len %u; mss %u; TCP sp %u dp %u seq 0x%x ESP seq 0x%x\n",
      VAR_2->len, FUNC_8(VAR_2)->gso_size,
      FUNC_6(VAR_6->source), FUNC_6(VAR_6->dest),
      FUNC_5(VAR_6->seq), FUNC_5(VAR_5->seq_no));
  VAR_3->syndrome = VAR_1;
  VAR_3->content.tx.mss_inv = FUNC_3(VAR_2);
  VAR_3->content.tx.seq = FUNC_0(FUNC_5(VAR_6->seq) & 0xFFFF);
 } else {
  VAR_3->syndrome = VAR_0;
 }
 VAR_3->content.tx.esp_next_proto = VAR_4->proto;

 FUNC_4(VAR_2->dev, "   TX metadata syndrome %u proto %u mss_inv %04x seq %04x\n",
     VAR_3->syndrome, VAR_3->content.tx.esp_next_proto,
     FUNC_6(VAR_3->content.tx.mss_inv),
     FUNC_6(VAR_3->content.tx.seq));
}
