
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; int mark; struct net_device* dev; } ;
struct rtable {scalar_t__ rt_type; int dst; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int ifindex; } ;
struct net {int dummy; } ;
struct iphdr {int saddr; int daddr; int tos; } ;
struct flowi4 {int saddr; int daddr; int flowi4_mark; int flowi4_flags; int flowi4_tos; int flowi4_oif; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 struct net* FUNC_2 (struct net_device*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net*,int ,struct sk_buff*) ;
 struct rtable* FUNC_5 (struct net*,struct flowi4*,int *) ;
 int FUNC_6 (struct rtable*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5)
{
 const struct iphdr *VAR_6 = FUNC_3(VAR_5);
 struct net_device *VAR_7 = VAR_5->dev;
 struct net *VAR_8 = FUNC_2(VAR_7);
 struct rtable *VAR_9;
 int VAR_10, VAR_11 = VAR_1;
 struct flowi4 VAR_12 = {
  .flowi4_oif = VAR_7->ifindex,
  .flowi4_tos = FUNC_1(VAR_6->tos),
  .flowi4_flags = VAR_0,
  .flowi4_mark = VAR_5->mark,
  .daddr = VAR_6->daddr,
  .saddr = VAR_6->saddr,
 };

 VAR_9 = FUNC_5(VAR_8, &VAR_12, ((void*)0));
 if (FUNC_0(VAR_9))
  goto err;

 if (VAR_9->rt_type != VAR_4 && VAR_9->rt_type != VAR_3) {
  FUNC_6(VAR_9);
  goto err;
 }
 FUNC_9(VAR_5, &VAR_9->dst);
 VAR_10 = FUNC_4(VAR_8, VAR_5->sk, VAR_5);
 if (FUNC_10(FUNC_8(VAR_10)))
  VAR_7->stats.tx_errors++;
 else
  VAR_11 = VAR_2;
 goto out;
err:
 VAR_7->stats.tx_errors++;
 FUNC_7(VAR_5);
out:
 return VAR_11;
}
