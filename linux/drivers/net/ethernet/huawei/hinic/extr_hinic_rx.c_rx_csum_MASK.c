
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int ip_summed; } ;
struct net_device {int features; } ;
struct TYPE_2__ {int csum_errors; } ;
struct hinic_rxq {TYPE_1__ rxq_stats; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct hinic_rxq *VAR_6, u32 VAR_7,
      struct sk_buff *VAR_8)
{
 struct net_device *VAR_9 = VAR_6->netdev;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_2);

 if (!(VAR_9->features & VAR_5))
  return;

 if (!VAR_10) {
  VAR_8->ip_summed = VAR_1;
 } else {
  if (!(VAR_10 & (VAR_3 |
   VAR_4)))
   VAR_6->rxq_stats.csum_errors++;
  VAR_8->ip_summed = VAR_0;
 }
}
