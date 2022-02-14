
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_test_priv {int ok; int comp; TYPE_1__* packet; } ;
struct sk_buff {int dummy; } ;
struct packet_type {struct stmmac_test_priv* af_packet_priv; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_dest; } ;
struct arphdr {scalar_t__ ar_op; } ;
struct TYPE_2__ {int src; } ;


 int VAR_0 ;
 struct arphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1,
        struct net_device *VAR_2,
        struct packet_type *VAR_3,
        struct net_device *VAR_4)
{
 struct stmmac_test_priv *VAR_5 = VAR_3->af_packet_priv;
 struct ethhdr *VAR_6;
 struct arphdr *VAR_7;

 VAR_6 = (struct ethhdr *)FUNC_5(VAR_1);
 if (!FUNC_2(VAR_6->h_dest, VAR_5->packet->src))
  goto out;

 VAR_7 = FUNC_0(VAR_1);
 if (VAR_7->ar_op != FUNC_3(VAR_0))
  goto out;

 VAR_5->ok = 1;
 FUNC_1(&VAR_5->comp);
out:
 FUNC_4(VAR_1);
 return 0;
}
