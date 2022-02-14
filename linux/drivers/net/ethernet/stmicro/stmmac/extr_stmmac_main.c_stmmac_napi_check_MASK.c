
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_priv {TYPE_1__* plat; int ioaddr; struct stmmac_channel* channel; int xstats; } ;
struct stmmac_channel {int tx_napi; int rx_napi; } ;
struct TYPE_2__ {size_t rx_queues_to_use; size_t tx_queues_to_use; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct stmmac_priv*,int ,size_t) ;
 int FUNC_4 (struct stmmac_priv*,int ,int *,size_t) ;

__attribute__((used)) static int FUNC_5(struct stmmac_priv *VAR_2, u32 VAR_3)
{
 int VAR_4 = FUNC_4(VAR_2, VAR_2->ioaddr,
       &VAR_2->xstats, VAR_3);
 struct stmmac_channel *VAR_5 = &VAR_2->channel[VAR_3];

 if ((VAR_4 & VAR_0) && (VAR_3 < VAR_2->plat->rx_queues_to_use)) {
  if (FUNC_2(&VAR_5->rx_napi)) {
   FUNC_3(VAR_2, VAR_2->ioaddr, VAR_3);
   FUNC_0(&VAR_5->rx_napi);
   VAR_4 |= VAR_1;
  }
 }

 if ((VAR_4 & VAR_1) && (VAR_3 < VAR_2->plat->tx_queues_to_use))
  FUNC_1(&VAR_5->tx_napi);

 return VAR_4;
}
