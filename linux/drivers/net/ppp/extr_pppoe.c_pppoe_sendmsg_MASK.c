
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_state; int sk_priority; } ;
struct sk_buff {int protocol; int priority; struct net_device* dev; } ;
struct TYPE_2__ {int remote; } ;
struct pppox_sock {TYPE_1__ pppoe_pa; struct net_device* pppoe_dev; int num; } ;
struct pppoe_hdr {int ver; int type; int length; int * tag; int sid; scalar_t__ code; } ;
struct net_device {size_t mtu; size_t hard_header_len; scalar_t__ needed_tailroom; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,int ,int *,size_t) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct pppoe_hdr*,struct pppoe_hdr*,int) ;
 int FUNC_8 (char*,struct msghdr*,size_t) ;
 struct pppox_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 struct pppoe_hdr* FUNC_11 (struct sk_buff*,size_t) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sock*,int ) ;
 struct sk_buff* FUNC_15 (struct sock*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_7, struct msghdr *VAR_8,
    size_t VAR_9)
{
 struct sk_buff *VAR_10;
 struct sock *VAR_11 = VAR_7->sk;
 struct pppox_sock *VAR_12 = FUNC_9(VAR_11);
 int VAR_13;
 struct pppoe_hdr VAR_14;
 struct pppoe_hdr *VAR_15;
 struct net_device *VAR_16;
 char *VAR_17;
 int VAR_18;

 FUNC_6(VAR_11);
 if (FUNC_14(VAR_11, VAR_6) || !(VAR_11->sk_state & VAR_5)) {
  VAR_13 = -VAR_2;
  goto end;
 }

 VAR_14.ver = 1;
 VAR_14.type = 1;
 VAR_14.code = 0;
 VAR_14.sid = VAR_12->num;

 VAR_16 = VAR_12->pppoe_dev;

 VAR_13 = -VAR_0;
 if (VAR_9 > (VAR_16->mtu + VAR_16->hard_header_len))
  goto end;

 VAR_18 = FUNC_0(VAR_16);
 VAR_10 = FUNC_15(VAR_11, VAR_18 + sizeof(*VAR_15) + VAR_9 +
      VAR_16->needed_tailroom, 0, VAR_4);
 if (!VAR_10) {
  VAR_13 = -VAR_1;
  goto end;
 }


 FUNC_12(VAR_10, VAR_18);
 FUNC_13(VAR_10);

 VAR_10->dev = VAR_16;

 VAR_10->priority = VAR_11->sk_priority;
 VAR_10->protocol = FUNC_1(VAR_3);

 VAR_15 = FUNC_11(VAR_10, VAR_9 + sizeof(struct pppoe_hdr));
 VAR_17 = (char *)&VAR_15->tag[0];

 VAR_13 = FUNC_8(VAR_17, VAR_8, VAR_9);
 if (VAR_13 < 0) {
  FUNC_5(VAR_10);
  goto end;
 }

 VAR_13 = VAR_9;
 FUNC_2(VAR_10, VAR_16, VAR_3,
   VAR_12->pppoe_pa.remote, ((void*)0), VAR_9);

 FUNC_7(VAR_15, &VAR_14, sizeof(struct pppoe_hdr));

 VAR_15->length = FUNC_4(VAR_9);

 FUNC_3(VAR_10);

end:
 FUNC_10(VAR_11);
 return VAR_13;
}
