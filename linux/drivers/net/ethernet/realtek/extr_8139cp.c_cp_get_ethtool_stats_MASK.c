
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_3__ {int rx_frags; } ;
struct cp_private {TYPE_2__* pdev; TYPE_1__ cp_stats; } ;
struct cp_dma_stats {int tx_underrun; int tx_abort; int rx_ok_mcast; int rx_ok_bcast; int rx_ok_phys; int tx_ok_mcol; int tx_ok_1col; int frame_align; int rx_fifo; int rx_err; int tx_err; int rx_ok; int tx_ok; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 struct cp_dma_stats* FUNC_4 (int *,int,scalar_t__*,int ) ;
 int FUNC_5 (int *,int,struct cp_dma_stats*,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct cp_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11 (struct net_device *VAR_4,
      struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct cp_private *VAR_7 = FUNC_9(VAR_4);
 struct cp_dma_stats *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(&VAR_7->pdev->dev, sizeof(*VAR_8),
           &VAR_9, VAR_2);
 if (!VAR_8)
  return;


 FUNC_3(VAR_3 + 4, (u64)VAR_9 >> 32);
 FUNC_3(VAR_3, ((u64)VAR_9 & FUNC_1(32)) | VAR_1);
 FUNC_2(VAR_3);

 for (VAR_10 = 0; VAR_10 < 1000; VAR_10++) {
  if ((FUNC_2(VAR_3) & VAR_1) == 0)
   break;
  FUNC_10(10);
 }
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_3 + 4, 0);
 FUNC_2(VAR_3);

 VAR_10 = 0;
 VAR_6[VAR_10++] = FUNC_8(VAR_8->tx_ok);
 VAR_6[VAR_10++] = FUNC_8(VAR_8->rx_ok);
 VAR_6[VAR_10++] = FUNC_8(VAR_8->tx_err);
 VAR_6[VAR_10++] = FUNC_7(VAR_8->rx_err);
 VAR_6[VAR_10++] = FUNC_6(VAR_8->rx_fifo);
 VAR_6[VAR_10++] = FUNC_6(VAR_8->frame_align);
 VAR_6[VAR_10++] = FUNC_7(VAR_8->tx_ok_1col);
 VAR_6[VAR_10++] = FUNC_7(VAR_8->tx_ok_mcol);
 VAR_6[VAR_10++] = FUNC_8(VAR_8->rx_ok_phys);
 VAR_6[VAR_10++] = FUNC_8(VAR_8->rx_ok_bcast);
 VAR_6[VAR_10++] = FUNC_7(VAR_8->rx_ok_mcast);
 VAR_6[VAR_10++] = FUNC_6(VAR_8->tx_abort);
 VAR_6[VAR_10++] = FUNC_6(VAR_8->tx_underrun);
 VAR_6[VAR_10++] = VAR_7->cp_stats.rx_frags;
 FUNC_0(VAR_10 != VAR_0);

 FUNC_5(&VAR_7->pdev->dev, sizeof(*VAR_8), VAR_8, VAR_9);
}
