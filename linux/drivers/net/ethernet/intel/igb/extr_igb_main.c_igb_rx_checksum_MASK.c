
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int status_error; } ;
struct TYPE_8__ {TYPE_3__ upper; } ;
union e1000_adv_rx_desc {TYPE_4__ wb; } ;
struct sk_buff {int len; int ip_summed; } ;
struct TYPE_6__ {int csum_err; } ;
struct igb_ring {int dev; int rx_syncp; TYPE_2__ rx_stats; int flags; TYPE_1__* netdev; } ;
struct TYPE_5__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (union e1000_adv_rx_desc*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct igb_ring *VAR_8,
       union e1000_adv_rx_desc *VAR_9,
       struct sk_buff *VAR_10)
{
 FUNC_3(VAR_10);


 if (FUNC_1(VAR_9, VAR_3))
  return;


 if (!(VAR_8->netdev->features & VAR_7))
  return;


 if (FUNC_1(VAR_9,
        VAR_2 |
        VAR_1)) {




  if (!((VAR_10->len == 60) &&
        FUNC_4(VAR_6, &VAR_8->flags))) {
   FUNC_5(&VAR_8->rx_syncp);
   VAR_8->rx_stats.csum_err++;
   FUNC_6(&VAR_8->rx_syncp);
  }

  return;
 }

 if (FUNC_1(VAR_9, VAR_4 |
          VAR_5))
  VAR_10->ip_summed = VAR_0;

 FUNC_0(VAR_8->dev, "cksum success: bits %08X\n",
  FUNC_2(VAR_9->wb.upper.status_error));
}
