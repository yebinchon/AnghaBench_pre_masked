
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tcphdr {int doff; int check; } ;
struct sk_buff {scalar_t__ ip_summed; unsigned char* data; int len; } ;
struct ipv6hdr {scalar_t__ payload_len; } ;
struct iphdr {int version; int ihl; scalar_t__ tot_len; int check; } ;
struct igb_tx_buffer {int tx_flags; int bytecount; int gso_segs; struct sk_buff* skb; } ;
struct igb_ring {int dummy; } ;
struct TYPE_2__ {int gso_size; int gso_segs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct igb_ring*,struct igb_tx_buffer*,int,int,int) ;
 void* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct igb_ring *VAR_10,
     struct igb_tx_buffer *VAR_11,
     u8 *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 struct sk_buff *VAR_16 = VAR_11->skb;
 union {
  struct iphdr *v4;
  struct ipv6hdr *v6;
  unsigned char *hdr;
 } VAR_17;
 union {
  struct tcphdr *tcp;
  unsigned char *hdr;
 } VAR_18;
 u32 VAR_19, VAR_20;
 int VAR_21;

 if (VAR_16->ip_summed != VAR_0)
  return 0;

 if (!FUNC_7(VAR_16))
  return 0;

 VAR_21 = FUNC_6(VAR_16, 0);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_17.hdr = FUNC_8(VAR_16);
 VAR_18 = FUNC_5(VAR_16);


 VAR_14 = VAR_5;


 if (VAR_17.v4->version == 4) {
  unsigned char *VAR_22 = FUNC_5(VAR_16);
  unsigned char *VAR_23 = VAR_17.hdr + (VAR_17.v4->ihl * 4);




  VAR_17.v4->check = FUNC_0(FUNC_1(VAR_23,
            VAR_22 - VAR_23,
            0));
  VAR_14 |= VAR_4;

  VAR_17.v4->tot_len = 0;
  VAR_11->tx_flags |= VAR_8 |
       VAR_6 |
       VAR_7;
 } else {
  VAR_17.v6->payload_len = 0;
  VAR_11->tx_flags |= VAR_8 |
       VAR_6;
 }


 VAR_20 = VAR_18 - VAR_16->data;


 *VAR_12 = (VAR_18>doff * 4) + VAR_20;


 VAR_19 = VAR_16->len - VAR_20;
 FUNC_2(&VAR_18>check, FUNC_3(VAR_19));


 VAR_11->gso_segs = FUNC_9(VAR_16)->gso_segs;
 VAR_11->bytecount += (VAR_11->gso_segs - 1) * *VAR_12;


 VAR_15 = (*VAR_12 - VAR_20) << VAR_1;
 VAR_15 |= FUNC_9(VAR_16)->gso_size << VAR_3;


 VAR_13 = VAR_18 - VAR_17.hdr;
 VAR_13 |= (VAR_17.hdr - VAR_16->data) << VAR_2;
 VAR_13 |= VAR_11->tx_flags & VAR_9;

 FUNC_4(VAR_10, VAR_11, VAR_13,
   VAR_14, VAR_15);

 return 1;
}
