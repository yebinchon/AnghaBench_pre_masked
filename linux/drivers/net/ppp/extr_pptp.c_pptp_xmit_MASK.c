
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct sock {int dummy; } ;
struct sk_buff {unsigned char* data; int len; scalar_t__ sk; int ip_summed; } ;
struct TYPE_19__ {struct net_device* dev; } ;
struct rtable {TYPE_7__ dst; } ;
struct TYPE_14__ {int s_addr; } ;
struct TYPE_17__ {int call_id; TYPE_2__ sin_addr; } ;
struct TYPE_15__ {int s_addr; } ;
struct TYPE_16__ {TYPE_3__ sin_addr; } ;
struct pptp_opt {int ppp_flags; scalar_t__ seq_recv; scalar_t__ ack_sent; scalar_t__ seq_sent; TYPE_5__ dst_addr; TYPE_4__ src_addr; } ;
struct TYPE_18__ {int flags; int protocol; } ;
struct pptp_gre_header {void* payload_len; void* ack; TYPE_6__ gre_hd; void* seq; void* call_id; } ;
struct TYPE_13__ {struct pptp_opt pptp; } ;
struct pppox_sock {TYPE_1__ proto; } ;
struct ppp_channel {scalar_t__ private; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int version; int ihl; void* tot_len; int ttl; int saddr; int daddr; scalar_t__ tos; int protocol; void* frag_off; } ;
struct flowi4 {int saddr; int daddr; } ;
typedef scalar_t__ __u32 ;
struct TYPE_20__ {int sk_state; } ;
struct TYPE_12__ {int flags; int opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_11__* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct sk_buff*) ;
 void* FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_7__*) ;
 scalar_t__ FUNC_8 (struct sock*,TYPE_7__*) ;
 struct iphdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct net*,scalar_t__,struct sk_buff*) ;
 struct rtable* FUNC_11 (struct net*,struct flowi4*,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct rtable*) ;
 int FUNC_13 (struct net*,struct sk_buff*,int *) ;
 int FUNC_14 (struct iphdr*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int *,int ,int) ;
 int FUNC_17 (struct sk_buff*) ;
 struct pppox_sock* FUNC_18 (struct sock*) ;
 TYPE_8__* FUNC_19 (struct pppox_sock*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,TYPE_7__*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,int) ;
 unsigned char* FUNC_25 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_26 (struct sk_buff*,int) ;
 int FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*) ;
 int FUNC_29 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_30 (struct sk_buff*) ;
 struct net* FUNC_31 (struct sock*) ;

__attribute__((used)) static int FUNC_32(struct ppp_channel *VAR_17, struct sk_buff *VAR_18)
{
 struct sock *VAR_19 = (struct sock *) VAR_17->private;
 struct pppox_sock *VAR_20 = FUNC_18(VAR_19);
 struct net *VAR_21 = FUNC_31(VAR_19);
 struct pptp_opt *VAR_22 = &VAR_20->proto.pptp;
 struct pptp_gre_header *VAR_23;
 unsigned int VAR_24 = sizeof(*VAR_23);
 struct flowi4 VAR_25;
 int VAR_26;
 int VAR_27;
 unsigned char *VAR_28;
 __u32 VAR_29;


 struct rtable *VAR_30;
 struct net_device *VAR_31;
 struct iphdr *VAR_32;
 int VAR_33;

 if (FUNC_19(VAR_20)->sk_state & VAR_11)
  goto tx_error;

 VAR_30 = FUNC_11(VAR_21, &VAR_25, ((void*)0),
       VAR_22->dst_addr.sin_addr.s_addr,
       VAR_22->src_addr.sin_addr.s_addr,
       0, 0, VAR_6,
       FUNC_3(0), 0);
 if (FUNC_1(VAR_30))
  goto tx_error;

 VAR_31 = VAR_30->dst.dev;

 VAR_33 = FUNC_2(VAR_31) + sizeof(*VAR_32) + sizeof(*VAR_23) + 2;

 if (FUNC_23(VAR_18) < VAR_33 || FUNC_20(VAR_18) || FUNC_30(VAR_18)) {
  struct sk_buff *VAR_34 = FUNC_26(VAR_18, VAR_33);
  if (!VAR_34) {
   FUNC_12(VAR_30);
   goto tx_error;
  }
  if (VAR_18->sk)
   FUNC_29(VAR_34, VAR_18->sk);
  FUNC_4(VAR_18);
  VAR_18 = VAR_34;
 }

 VAR_28 = VAR_18->data;
 VAR_26 = ((VAR_28[0] << 8) + VAR_28[1]) == VAR_13 && 1 <= VAR_28[2] && VAR_28[2] <= 7;


 if ((VAR_22->ppp_flags & VAR_16) && VAR_28[0] == 0 && !VAR_26)
  FUNC_24(VAR_18, 1);


 if ((VAR_22->ppp_flags & VAR_15) == 0 || VAR_26) {
  VAR_28 = FUNC_25(VAR_18, 2);
  VAR_28[0] = VAR_12;
  VAR_28[1] = VAR_14;
 }

 VAR_27 = VAR_18->len;

 VAR_29 = VAR_22->seq_recv;

 if (VAR_22->ack_sent == VAR_29)
  VAR_24 -= sizeof(VAR_23->ack);


 FUNC_25(VAR_18, VAR_24);
 VAR_23 = (struct pptp_gre_header *)(VAR_18->data);

 VAR_23->gre_hd.flags = VAR_2 | VAR_5 | VAR_4;
 VAR_23->gre_hd.protocol = VAR_3;
 VAR_23->call_id = FUNC_6(VAR_22->dst_addr.call_id);

 VAR_23->seq = FUNC_5(++VAR_22->seq_sent);
 if (VAR_22->ack_sent != VAR_29) {

  VAR_23->gre_hd.flags |= VAR_1;
  VAR_23->ack = FUNC_5(VAR_29);
  VAR_22->ack_sent = VAR_29;
 }
 VAR_23->payload_len = FUNC_6(VAR_27);



 FUNC_28(VAR_18);
 FUNC_25(VAR_18, sizeof(*VAR_32));
 FUNC_27(VAR_18);
 FUNC_16(&(FUNC_0(VAR_18)->opt), 0, sizeof(FUNC_0(VAR_18)->opt));
 FUNC_0(VAR_18)->flags &= ~(VAR_9 | VAR_8 | VAR_7);

 VAR_32 = FUNC_9(VAR_18);
 VAR_32->version = 4;
 VAR_32->ihl = sizeof(struct iphdr) >> 2;
 if (FUNC_8(VAR_19, &VAR_30->dst))
  VAR_32->frag_off = FUNC_6(VAR_10);
 else
  VAR_32->frag_off = 0;
 VAR_32->protocol = VAR_6;
 VAR_32->tos = 0;
 VAR_32->daddr = VAR_25;
 VAR_32->saddr = VAR_25;
 VAR_32->ttl = FUNC_7(&VAR_30->dst);
 VAR_32->tot_len = FUNC_6(VAR_18->len);

 FUNC_21(VAR_18);
 FUNC_22(VAR_18, &VAR_30->dst);

 FUNC_17(VAR_18);

 VAR_18->ip_summed = VAR_0;
 FUNC_13(VAR_21, VAR_18, ((void*)0));
 FUNC_14(VAR_32);

 FUNC_10(VAR_21, VAR_18->sk, VAR_18);
 return 1;

tx_error:
 FUNC_15(VAR_18);
 return 1;
}
