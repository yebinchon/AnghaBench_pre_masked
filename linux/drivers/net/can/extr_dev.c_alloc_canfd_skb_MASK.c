
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ip_summed; int pkt_type; int protocol; } ;
struct net_device {int ifindex; } ;
struct canfd_frame {int dummy; } ;
struct can_skb_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ skbcnt; int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct net_device*,int) ;
 struct canfd_frame* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

struct sk_buff *FUNC_9(struct net_device *VAR_3,
    struct canfd_frame **VAR_4)
{
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_3, sizeof(struct can_skb_priv) +
          sizeof(struct canfd_frame));
 if (FUNC_8(!VAR_5))
  return ((void*)0);

 VAR_5->protocol = FUNC_2(VAR_1);
 VAR_5->pkt_type = VAR_2;
 VAR_5->ip_summed = VAR_0;

 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 FUNC_7(VAR_5);

 FUNC_1(VAR_5);
 FUNC_0(VAR_5)->ifindex = VAR_3->ifindex;
 FUNC_0(VAR_5)->skbcnt = 0;

 *VAR_4 = FUNC_4(VAR_5, sizeof(struct canfd_frame));

 return VAR_5;
}
