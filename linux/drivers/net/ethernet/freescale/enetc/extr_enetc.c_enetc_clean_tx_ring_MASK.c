
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union enetc_tx_bd {int flags; } ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct enetc_tx_swbd {int check_wb; scalar_t__ len; int * skb; int dma; scalar_t__ do_tstamp; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
struct TYPE_4__ {int packets; int bytes; } ;
struct enetc_bdr {int next_to_clean; int bd_count; int index; TYPE_2__ stats; int idr; struct enetc_tx_swbd* tx_swbd; struct net_device* ndev; } ;
struct TYPE_3__ {int hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 union enetc_tx_bd* FUNC_1 (struct enetc_bdr,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct enetc_bdr*,int) ;
 scalar_t__ FUNC_4 (struct enetc_bdr*) ;
 int FUNC_5 (int *,union enetc_tx_bd*,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct enetc_bdr*,struct enetc_tx_swbd*) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int) ;
 struct enetc_ndev_priv* FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static bool FUNC_15(struct enetc_bdr *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->ndev;
 int VAR_6 = 0, VAR_7 = 0;
 struct enetc_tx_swbd *VAR_8;
 int VAR_9, VAR_10;
 bool VAR_11;
 u64 VAR_12 = 0;

 VAR_9 = VAR_3->next_to_clean;
 VAR_8 = &VAR_3->tx_swbd[VAR_9];
 VAR_10 = FUNC_3(VAR_3, VAR_9);

 VAR_11 = 0;

 while (VAR_10 && VAR_6 < VAR_0) {
  bool VAR_13 = !!VAR_8->skb;

  if (FUNC_14(VAR_8->check_wb)) {
   struct enetc_ndev_priv *VAR_14 = FUNC_11(VAR_5);
   union enetc_tx_bd *VAR_15;

   VAR_15 = FUNC_1(*VAR_3, VAR_9);

   if (VAR_15->flags & VAR_2 &&
       VAR_8->do_tstamp) {
    FUNC_5(&VAR_14->si->hw, VAR_15,
          &VAR_12);
    VAR_11 = 1;
   }
  }

  if (FUNC_9(VAR_8->dma))
   FUNC_7(VAR_3, VAR_8);

  if (VAR_13) {
   if (FUNC_14(VAR_11)) {
    FUNC_6(VAR_8->skb, VAR_12);
    VAR_11 = 0;
   }
   FUNC_10(VAR_8->skb, VAR_4);
   VAR_8->skb = ((void*)0);
  }

  VAR_7 += VAR_8->len;

  VAR_10--;
  VAR_8++;
  VAR_9++;
  if (FUNC_14(VAR_9 == VAR_3->bd_count)) {
   VAR_9 = 0;
   VAR_8 = VAR_3->tx_swbd;
  }


  if (VAR_13) {
   VAR_6++;

   FUNC_8(VAR_3->idr, FUNC_0(VAR_3->index) |
         FUNC_0(16 + VAR_3->index));
  }

  if (FUNC_14(!VAR_10))
   VAR_10 = FUNC_3(VAR_3, VAR_9);
 }

 VAR_3->next_to_clean = VAR_9;
 VAR_3->stats.packets += VAR_6;
 VAR_3->stats.bytes += VAR_7;

 if (FUNC_14(VAR_6 && FUNC_12(VAR_5) &&
       FUNC_2(VAR_5, VAR_3->index) &&
       (FUNC_4(VAR_3) >= VAR_1))) {
  FUNC_13(VAR_5, VAR_3->index);
 }

 return VAR_6 != VAR_0;
}
