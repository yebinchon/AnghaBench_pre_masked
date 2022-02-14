
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgmac_extra_stats {int fatal_bus_error; int tx_process_stopped; int tx_early; int rx_process_stopped; int rx_buf_unav; int tx_jabber; } ;
struct xgmac_priv {int napi; scalar_t__ base; int dev; int tx_timeout_work; struct xgmac_extra_stats xstats; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 struct xgmac_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_14, void *VAR_15)
{
 u32 VAR_16;
 struct net_device *VAR_17 = (struct net_device *)VAR_15;
 struct xgmac_priv *VAR_18 = FUNC_4(VAR_17);
 struct xgmac_extra_stats *VAR_19 = &VAR_18->xstats;


 VAR_16 = FUNC_0(VAR_18->base + VAR_13);
 VAR_16 &= FUNC_0(VAR_18->base + VAR_12);
 FUNC_1(VAR_16, VAR_18->base + VAR_13);



 if (FUNC_6(VAR_16 & VAR_1)) {
  if (VAR_16 & VAR_8) {
   FUNC_3(VAR_18->dev, "transmit jabber\n");
   VAR_19->tx_jabber++;
  }
  if (VAR_16 & VAR_6)
   VAR_19->rx_buf_unav++;
  if (VAR_16 & VAR_5) {
   FUNC_3(VAR_18->dev, "receive process stopped\n");
   VAR_19->rx_process_stopped++;
  }
  if (VAR_16 & VAR_2) {
   FUNC_3(VAR_18->dev, "transmit early interrupt\n");
   VAR_19->tx_early++;
  }
  if (VAR_16 & VAR_9) {
   FUNC_3(VAR_18->dev, "transmit process stopped\n");
   VAR_19->tx_process_stopped++;
   FUNC_5(&VAR_18->tx_timeout_work);
  }
  if (VAR_16 & VAR_3) {
   FUNC_3(VAR_18->dev, "fatal bus error\n");
   VAR_19->fatal_bus_error++;
  }
 }


 if (VAR_16 & (VAR_4 | VAR_10 | VAR_7)) {
  FUNC_1(VAR_0, VAR_18->base + VAR_12);
  FUNC_2(&VAR_18->napi);
 }

 return VAR_11;
}
