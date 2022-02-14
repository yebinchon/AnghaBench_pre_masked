
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {void* ip_summed; } ;
struct TYPE_3__ {int csum_unchecked; int csum_good; int bad_csum; } ;
struct ena_ring {int syncp; TYPE_1__ rx_stats; TYPE_2__* netdev; int adapter; } ;
struct ena_com_rx_ctx {scalar_t__ l3_proto; scalar_t__ l4_proto; int l4_csum_err; int l4_csum_checked; scalar_t__ l3_csum_err; scalar_t__ frag; } ;
struct TYPE_4__ {int features; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,TYPE_2__*,char*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ena_ring *VAR_7,
       struct ena_com_rx_ctx *VAR_8,
       struct sk_buff *VAR_9)
{

 if (FUNC_4(!(VAR_7->netdev->features & VAR_5))) {
  VAR_9->ip_summed = VAR_0;
  return;
 }


 if (VAR_8->frag) {
  VAR_9->ip_summed = VAR_0;
  return;
 }


 if (FUNC_4((VAR_8->l3_proto == VAR_2) &&
       (VAR_8->l3_csum_err))) {

  VAR_9->ip_summed = VAR_0;
  FUNC_2(&VAR_7->syncp);
  VAR_7->rx_stats.bad_csum++;
  FUNC_3(&VAR_7->syncp);
  FUNC_1(VAR_7->adapter, VAR_6, VAR_7->netdev,
     "RX IPv4 header checksum error\n");
  return;
 }


 if (FUNC_0((VAR_8->l4_proto == VAR_3) ||
     (VAR_8->l4_proto == VAR_4))) {
  if (FUNC_4(VAR_8->l4_csum_err)) {

   FUNC_2(&VAR_7->syncp);
   VAR_7->rx_stats.bad_csum++;
   FUNC_3(&VAR_7->syncp);
   FUNC_1(VAR_7->adapter, VAR_6, VAR_7->netdev,
      "RX L4 checksum error\n");
   VAR_9->ip_summed = VAR_0;
   return;
  }

  if (FUNC_0(VAR_8->l4_csum_checked)) {
   VAR_9->ip_summed = VAR_1;
   FUNC_2(&VAR_7->syncp);
   VAR_7->rx_stats.csum_good++;
   FUNC_3(&VAR_7->syncp);
  } else {
   FUNC_2(&VAR_7->syncp);
   VAR_7->rx_stats.csum_unchecked++;
   FUNC_3(&VAR_7->syncp);
   VAR_9->ip_summed = VAR_0;
  }
 } else {
  VAR_9->ip_summed = VAR_0;
  return;
 }

}
