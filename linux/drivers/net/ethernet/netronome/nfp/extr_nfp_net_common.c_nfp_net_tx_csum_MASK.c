
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct nfp_net_tx_desc {int flags; } ;
struct nfp_net_tx_buf {scalar_t__ pkt_cnt; } ;
struct nfp_net_r_vector {int tx_sync; int hw_csum_tx; int hw_csum_tx_inner; } ;
struct nfp_net_dp {int ctrl; } ;
struct ipv6hdr {int version; int nexthdr; } ;
struct iphdr {int version; int protocol; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nfp_net_dp*,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct nfp_net_dp *VAR_7,
       struct nfp_net_r_vector *VAR_8,
       struct nfp_net_tx_buf *VAR_9,
       struct nfp_net_tx_desc *VAR_10, struct sk_buff *VAR_11)
{
 struct ipv6hdr *VAR_12;
 struct iphdr *VAR_13;
 u8 VAR_14;

 if (!(VAR_7->ctrl & VAR_1))
  return;

 if (VAR_11->ip_summed != VAR_0)
  return;

 VAR_10->flags |= VAR_2;
 if (VAR_11->encapsulation)
  VAR_10->flags |= VAR_3;

 VAR_13 = VAR_11->encapsulation ? FUNC_0(VAR_11) : FUNC_2(VAR_11);
 VAR_12 = VAR_11->encapsulation ? FUNC_1(VAR_11) : FUNC_3(VAR_11);

 if (VAR_13->version == 4) {
  VAR_10->flags |= VAR_4;
  VAR_14 = VAR_13->protocol;
 } else if (VAR_12->version == 6) {
  VAR_14 = VAR_12->nexthdr;
 } else {
  FUNC_4(VAR_7, "partial checksum but ipv=%x!\n", VAR_13->version);
  return;
 }

 switch (VAR_14) {
 case 129:
  VAR_10->flags |= VAR_5;
  break;
 case 128:
  VAR_10->flags |= VAR_6;
  break;
 default:
  FUNC_4(VAR_7, "partial checksum but l4 proto=%x!\n", VAR_14);
  return;
 }

 FUNC_5(&VAR_8->tx_sync);
 if (VAR_11->encapsulation)
  VAR_8->hw_csum_tx_inner += VAR_9->pkt_cnt;
 else
  VAR_8->hw_csum_tx += VAR_9->pkt_cnt;
 FUNC_6(&VAR_8->tx_sync);
}
