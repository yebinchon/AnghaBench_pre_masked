
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_canfd_global {scalar_t__ fdmode; } ;
struct rcar_canfd_channel {int channel; int base; struct rcar_canfd_global* gpriv; } ;
struct net_device_stats {int rx_dropped; int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (struct net_device*,char*) ;
 struct rcar_canfd_channel* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_9)
{
 struct rcar_canfd_channel *VAR_10 = FUNC_3(VAR_9);
 struct rcar_canfd_global *VAR_11 = VAR_10->gpriv;
 struct net_device_stats *VAR_12 = &VAR_9->stats;
 u32 VAR_13 = VAR_10->channel;
 u32 VAR_14, VAR_15;
 u32 VAR_16 = VAR_13 + VAR_7;

 VAR_14 = FUNC_4(VAR_10->base, VAR_2);
 if ((VAR_14 & VAR_4) && (VAR_13 == 0)) {
  FUNC_2(VAR_9, "Ch0: ECC Error flag\n");
  VAR_12->tx_dropped++;
 }
 if ((VAR_14 & VAR_5) && (VAR_13 == 1)) {
  FUNC_2(VAR_9, "Ch1: ECC Error flag\n");
  VAR_12->tx_dropped++;
 }
 if (VAR_14 & VAR_6) {
  VAR_15 = FUNC_4(VAR_10->base,
          FUNC_0(VAR_13, VAR_0));
  if (VAR_15 & VAR_1) {
   FUNC_2(VAR_9, "Tx Message Lost flag\n");
   VAR_12->tx_dropped++;
   FUNC_5(VAR_10->base,
      FUNC_0(VAR_13, VAR_0),
      VAR_15 & ~VAR_1);
  }

  VAR_15 = FUNC_4(VAR_10->base, FUNC_1(VAR_16));
  if (VAR_15 & VAR_8) {
   FUNC_2(VAR_9, "Rx Message Lost flag\n");
   VAR_12->rx_dropped++;
   FUNC_5(VAR_10->base, FUNC_1(VAR_16),
      VAR_15 & ~VAR_8);
  }
 }
 if (VAR_11->fdmode && VAR_14 & VAR_3) {




  FUNC_2(VAR_9, "global payload overflow interrupt\n");
 }




 FUNC_5(VAR_10->base, VAR_2, 0);
}
