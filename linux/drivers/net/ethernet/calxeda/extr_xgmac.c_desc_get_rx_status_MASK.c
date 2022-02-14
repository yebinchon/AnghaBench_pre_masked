
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgmac_extra_stats {int rx_payload_error; int rx_ip_header_error; int rx_da_filter_fail; } ;
struct xgmac_priv {int dev; struct xgmac_extra_stats xstats; } ;
struct xgmac_dma_desc {int ext_status; int flags; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct xgmac_priv *VAR_16, struct xgmac_dma_desc *VAR_17)
{
 struct xgmac_extra_stats *VAR_18 = &VAR_16->xstats;
 int VAR_19 = VAR_1;
 u32 VAR_20 = FUNC_0(VAR_17->flags);
 u32 VAR_21 = FUNC_0(VAR_17->ext_status);

 if (VAR_20 & VAR_3) {
  FUNC_1(VAR_16->dev, "XGMAC RX : Dest Address filter fail\n");
  VAR_18->rx_da_filter_fail++;
  return -1;
 }


 if (!(VAR_20 & VAR_7) || !(VAR_20 & VAR_13))
  return -1;


 if ((VAR_20 & VAR_8) && (VAR_20 & VAR_6) &&
  !(VAR_21 & VAR_12))
  VAR_19 = VAR_0;

 FUNC_1(VAR_16->dev, "rx status - frame type=%d, csum = %d, ext stat %08x\n",
     (VAR_20 & VAR_8) ? 1 : 0, VAR_19, VAR_21);

 if (!(VAR_20 & VAR_5))
  return VAR_19;


 if (VAR_20 & (VAR_4 | VAR_15 |
  VAR_9 | VAR_14 | VAR_2))
  return -1;

 if (VAR_20 & VAR_6) {
  if (VAR_21 & VAR_10)
   VAR_18->rx_ip_header_error++;
  if (VAR_21 & VAR_11)
   VAR_18->rx_payload_error++;
  FUNC_1(VAR_16->dev, "IP checksum error - stat %08x\n",
      VAR_21);
  return VAR_0;
 }

 return VAR_19;
}
