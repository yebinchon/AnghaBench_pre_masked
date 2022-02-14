
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union fm10k_rx_desc {int dummy; } fm10k_rx_desc ;
struct sk_buff {int encapsulation; int ip_summed; } ;
struct TYPE_4__ {int csum_good; int csum_err; } ;
struct fm10k_ring {TYPE_2__ rx_stats; TYPE_1__* netdev; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (union fm10k_rx_desc*,int) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct fm10k_ring *VAR_8,
         union fm10k_rx_desc *VAR_9,
         struct sk_buff *VAR_10)
{
 FUNC_1(VAR_10);


 if (!(VAR_8->netdev->features & VAR_7))
  return;


 if (FUNC_0(VAR_9,
          VAR_5 |
          VAR_6 |
          VAR_1 |
          VAR_2)) {
  VAR_8->rx_stats.csum_err++;
  return;
 }


 if (FUNC_0(VAR_9, VAR_4))
  VAR_10->encapsulation = 1;
 else if (!FUNC_0(VAR_9, VAR_3))
  return;

 VAR_10->ip_summed = VAR_0;

 VAR_8->rx_stats.csum_good++;
}
