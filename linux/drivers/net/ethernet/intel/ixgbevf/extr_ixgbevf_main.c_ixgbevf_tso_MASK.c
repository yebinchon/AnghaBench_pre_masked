
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tcphdr {int doff; int check; } ;
struct sk_buff {scalar_t__ ip_summed; unsigned char* data; int len; } ;
struct ixgbevf_tx_buffer {int tx_flags; int bytecount; int gso_segs; int protocol; struct sk_buff* skb; } ;
struct ixgbevf_ring {int dummy; } ;
struct ixgbevf_ipsec_tx_data {int pfsa; int flags; int trailer_len; } ;
struct ipv6hdr {scalar_t__ payload_len; } ;
struct iphdr {int version; int ihl; scalar_t__ tot_len; int check; } ;
struct TYPE_2__ {int gso_type; int gso_size; int gso_segs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ixgbevf_ring*,int,int,int,int) ;
 void* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct ixgbevf_ring *VAR_12,
         struct ixgbevf_tx_buffer *VAR_13,
         u8 *VAR_14,
         struct ixgbevf_ipsec_tx_data *VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18;
 struct sk_buff *VAR_19 = VAR_13->skb;
 union {
  struct iphdr *v4;
  struct ipv6hdr *v6;
  unsigned char *hdr;
 } VAR_20;
 union {
  struct tcphdr *tcp;
  unsigned char *hdr;
 } VAR_21;
 u32 VAR_22, VAR_23;
 u32 VAR_24 = 0;
 int VAR_25;

 if (VAR_19->ip_summed != VAR_0)
  return 0;

 if (!FUNC_9(VAR_19))
  return 0;

 VAR_25 = FUNC_7(VAR_19, 0);
 if (VAR_25 < 0)
  return VAR_25;

 if (FUNC_3(VAR_13->protocol))
  VAR_20.hdr = FUNC_8(VAR_19);
 else
  VAR_20.hdr = FUNC_10(VAR_19);
 VAR_21 = FUNC_6(VAR_19);


 VAR_17 = VAR_6;


 if (VAR_20.v4->version == 4) {
  unsigned char *VAR_26 = FUNC_6(VAR_19);
  unsigned char *VAR_27 = VAR_20.hdr + (VAR_20.v4->ihl * 4);
  int VAR_28 = VAR_26 - VAR_27;





  VAR_20.v4->check = (FUNC_11(VAR_19)->gso_type & VAR_11) ?
        FUNC_0(FUNC_1(VAR_27,
          VAR_28, 0)) : 0;
  VAR_17 |= VAR_5;

  VAR_20.v4->tot_len = 0;
  VAR_13->tx_flags |= VAR_9 |
       VAR_7 |
       VAR_8;
 } else {
  VAR_20.v6->payload_len = 0;
  VAR_13->tx_flags |= VAR_9 |
       VAR_7;
 }


 VAR_23 = VAR_21 - VAR_19->data;


 *VAR_14 = (VAR_21>doff * 4) + VAR_23;


 VAR_22 = VAR_19->len - VAR_23;
 FUNC_2(&VAR_21>check, FUNC_4(VAR_22));


 VAR_13->gso_segs = FUNC_11(VAR_19)->gso_segs;
 VAR_13->bytecount += (VAR_13->gso_segs - 1) * *VAR_14;


 VAR_18 = (*VAR_14 - VAR_23) << VAR_2;
 VAR_18 |= FUNC_11(VAR_19)->gso_size << VAR_4;
 VAR_18 |= (1u << VAR_1);

 VAR_24 |= VAR_15->pfsa;
 VAR_17 |= VAR_15->flags | VAR_15->trailer_len;


 VAR_16 = VAR_21 - VAR_20.hdr;
 VAR_16 |= (VAR_20.hdr - VAR_19->data) << VAR_3;
 VAR_16 |= VAR_13->tx_flags & VAR_10;

 FUNC_5(VAR_12, VAR_16, VAR_24, VAR_17,
       VAR_18);

 return 1;
}
