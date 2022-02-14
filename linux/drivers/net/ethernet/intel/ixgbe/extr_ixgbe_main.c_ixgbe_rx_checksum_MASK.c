
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pkt_info; } ;
struct TYPE_8__ {TYPE_1__ hs_rss; } ;
struct TYPE_9__ {TYPE_2__ lo_dword; } ;
struct TYPE_10__ {TYPE_3__ lower; } ;
union ixgbe_adv_rx_desc {TYPE_4__ wb; } ;
struct sk_buff {int encapsulation; int csum_level; int ip_summed; } ;
struct TYPE_12__ {int csum_err; } ;
struct ixgbe_ring {TYPE_6__ rx_stats; int state; TYPE_5__* netdev; } ;
typedef int __le16 ;
struct TYPE_11__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static inline void FUNC_4(struct ixgbe_ring *VAR_12,
         union ixgbe_adv_rx_desc *VAR_13,
         struct sk_buff *VAR_14)
{
 __le16 VAR_15 = VAR_13->wb.lower.lo_dword.hs_rss.pkt_info;
 bool VAR_16 = 0;

 FUNC_2(VAR_14);


 if (!(VAR_12->netdev->features & VAR_10))
  return;


 if (VAR_15 & FUNC_0(VAR_6)) {
  VAR_16 = 1;
  VAR_14->encapsulation = 1;
 }


 if (FUNC_1(VAR_13, VAR_7) &&
     FUNC_1(VAR_13, VAR_2)) {
  VAR_12->rx_stats.csum_err++;
  return;
 }

 if (!FUNC_1(VAR_13, VAR_8))
  return;

 if (FUNC_1(VAR_13, VAR_4)) {




  if ((VAR_15 & FUNC_0(VAR_5)) &&
      FUNC_3(VAR_11, &VAR_12->state))
   return;

  VAR_12->rx_stats.csum_err++;
  return;
 }


 VAR_14->ip_summed = VAR_1;
 if (VAR_16) {
  if (!FUNC_1(VAR_13, VAR_9))
   return;

  if (FUNC_1(VAR_13, VAR_3)) {
   VAR_14->ip_summed = VAR_0;
   return;
  }

  VAR_14->csum_level = 1;
 }
}
