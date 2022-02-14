
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgmac_extra_stats {int tx_payload_error; int tx_remote_fault; int tx_local_fault; int tx_ip_header_error; int tx_frame_flushed; int tx_jabber; } ;
struct xgmac_priv {int base; int dev; struct xgmac_extra_stats xstats; } ;
struct xgmac_dma_desc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct xgmac_priv *VAR_8, struct xgmac_dma_desc *VAR_9)
{
 struct xgmac_extra_stats *VAR_10 = &VAR_8->xstats;
 u32 VAR_11 = FUNC_0(VAR_9->flags);

 if (!(VAR_11 & VAR_0))
  return 0;

 FUNC_1(VAR_8->dev, "tx desc error = 0x%08x\n", VAR_11);
 if (VAR_11 & VAR_3)
  VAR_10->tx_jabber++;
 if (VAR_11 & VAR_1)
  VAR_10->tx_frame_flushed++;
 if (VAR_11 & VAR_7)
  FUNC_2(VAR_8->base);
 if (VAR_11 & VAR_2)
  VAR_10->tx_ip_header_error++;
 if (VAR_11 & VAR_4)
  VAR_10->tx_local_fault++;
 if (VAR_11 & VAR_6)
  VAR_10->tx_remote_fault++;
 if (VAR_11 & VAR_5)
  VAR_10->tx_payload_error++;

 return -1;
}
