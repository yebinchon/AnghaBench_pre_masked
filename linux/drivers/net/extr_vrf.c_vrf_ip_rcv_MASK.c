
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; int mac_len; int len; int skb_iif; struct net_device* dev; } ;
struct net_device {int ptype_all; int ifindex; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int daddr; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_7 (int ,int ,struct sk_buff*,struct net_device*) ;
 int FUNC_8 (struct net_device*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct net_device *VAR_5,
      struct sk_buff *VAR_6)
{
 VAR_6->dev = VAR_5;
 VAR_6->skb_iif = VAR_5->ifindex;
 FUNC_0(VAR_6)->flags |= VAR_0;

 if (FUNC_3(FUNC_2(VAR_6)->daddr))
  goto out;




 if (VAR_6->pkt_type == VAR_4) {
  VAR_6->pkt_type = VAR_3;
  goto out;
 }

 FUNC_8(VAR_5, VAR_6->len);

 if (!FUNC_4(&VAR_5->ptype_all)) {
  FUNC_6(VAR_6, VAR_6->mac_len);
  FUNC_1(VAR_6, VAR_5);
  FUNC_5(VAR_6, VAR_6->mac_len);
 }

 VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_6, VAR_5);
out:
 return VAR_6;
}
