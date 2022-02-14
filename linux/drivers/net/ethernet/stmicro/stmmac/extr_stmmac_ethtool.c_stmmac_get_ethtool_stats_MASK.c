
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct TYPE_8__ {int phy_eee_wakeup_error_n; } ;
struct TYPE_7__ {scalar_t__ rmon; scalar_t__ asp; } ;
struct stmmac_priv {scalar_t__ synopsys_id; TYPE_3__ xstats; int ioaddr; int phylink; scalar_t__ eee_enabled; int mmc; int mmcaddr; TYPE_2__ dma_cap; int sstats; TYPE_1__* plat; } ;
struct net_device {int stats; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_10__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_9__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_6__ {unsigned long rx_queues_to_use; unsigned long tx_queues_to_use; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct stmmac_priv*,int *,void*,int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (struct stmmac_priv*,int ,void*,unsigned long,unsigned long) ;
 TYPE_4__* VAR_5 ;
 int FUNC_4 (struct stmmac_priv*,int ,int *) ;
 int FUNC_5 (struct stmmac_priv*,int *,int,unsigned long*,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6,
     struct ethtool_stats *VAR_7, u64 *VAR_8)
{
 struct stmmac_priv *VAR_9 = FUNC_0(VAR_6);
 u32 VAR_10 = VAR_9->plat->rx_queues_to_use;
 u32 VAR_11 = VAR_9->plat->tx_queues_to_use;
 unsigned long VAR_12;
 int VAR_13, VAR_14 = 0, VAR_15;

 if (VAR_9->dma_cap.asp) {
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   if (!FUNC_5(VAR_9, &VAR_9->sstats, VAR_13,
      &VAR_12, ((void*)0)))
    VAR_8[VAR_14++] = VAR_12;
  }
 }


 VAR_15 = FUNC_2(VAR_9, &VAR_6->stats, (void *) &VAR_9->xstats,
   VAR_9->ioaddr);
 if (VAR_15) {

  if (VAR_9->dma_cap.rmon) {
   FUNC_4(VAR_9, VAR_9->mmcaddr, &VAR_9->mmc);

   for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
    char *VAR_16;
    VAR_16 = (char *)VAR_9 + VAR_5[VAR_13].stat_offset;

    VAR_8[VAR_14++] = (VAR_5[VAR_13].sizeof_stat ==
          sizeof(u64)) ? (*(u64 *)VAR_16) :
          (*(u32 *)VAR_16);
   }
  }
  if (VAR_9->eee_enabled) {
   int VAR_17 = FUNC_1(VAR_9->phylink);
   if (VAR_17)
    VAR_9->xstats.phy_eee_wakeup_error_n = VAR_17;
  }

  if (VAR_9->synopsys_id >= VAR_0)
   FUNC_3(VAR_9, VAR_9->ioaddr,
     (void *)&VAR_9->xstats,
     VAR_10, VAR_11);
 }
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  char *VAR_18 = (char *)VAR_9 + VAR_4[VAR_13].stat_offset;
  VAR_8[VAR_14++] = (VAR_4[VAR_13].sizeof_stat ==
        sizeof(u64)) ? (*(u64 *)VAR_18) : (*(u32 *)VAR_18);
 }
}
