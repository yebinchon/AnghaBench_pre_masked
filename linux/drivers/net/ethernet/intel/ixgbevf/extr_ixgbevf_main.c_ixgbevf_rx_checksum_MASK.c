
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct sk_buff {int ip_summed; } ;
struct TYPE_4__ {int csum_err; } ;
struct ixgbevf_ring {TYPE_2__ rx_stats; TYPE_1__* netdev; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct ixgbevf_ring *VAR_6,
           union ixgbe_adv_rx_desc *VAR_7,
           struct sk_buff *VAR_8)
{
 FUNC_1(VAR_8);


 if (!(VAR_6->netdev->features & VAR_5))
  return;


 if (FUNC_0(VAR_7, VAR_3) &&
     FUNC_0(VAR_7, VAR_1)) {
  VAR_6->rx_stats.csum_err++;
  return;
 }

 if (!FUNC_0(VAR_7, VAR_4))
  return;

 if (FUNC_0(VAR_7, VAR_2)) {
  VAR_6->rx_stats.csum_err++;
  return;
 }


 VAR_8->ip_summed = VAR_0;
}
