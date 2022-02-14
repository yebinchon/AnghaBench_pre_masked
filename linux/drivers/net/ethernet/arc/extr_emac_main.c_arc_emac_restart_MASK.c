
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_dropped; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct arc_emac_priv {scalar_t__ last_rx_bd; struct arc_emac_bd* rxbd; int txbd; scalar_t__ txbd_dirty; scalar_t__ txbd_curr; } ;
struct arc_emac_bd {int info; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct arc_emac_priv*,int ,int) ;
 int FUNC_2 (struct arc_emac_priv*,int ,int) ;
 int FUNC_3 (struct arc_emac_priv*,int ,int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 struct arc_emac_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_10)
{
 struct arc_emac_priv *VAR_11 = FUNC_8(VAR_10);
 struct net_device_stats *VAR_12 = &VAR_10->stats;
 int VAR_13;

 if (FUNC_7())
  FUNC_9(VAR_10, "restarting stalled EMAC\n");

 FUNC_11(VAR_10);


 FUNC_1(VAR_11, VAR_7, VAR_4 | VAR_8 | VAR_2);


 FUNC_1(VAR_11, VAR_6, VAR_1);


 FUNC_0(VAR_10);


 VAR_11->txbd_curr = 0;
 VAR_11->txbd_dirty = 0;
 FUNC_6(VAR_11->txbd, 0, VAR_9);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  struct arc_emac_bd *VAR_14 = &VAR_11->rxbd[VAR_13];
  unsigned int VAR_15 = FUNC_5(VAR_14->info);

  if (!(VAR_15 & VAR_3)) {
   VAR_12->rx_errors++;
   VAR_12->rx_dropped++;
  }

  VAR_14->info = FUNC_4(VAR_3 | VAR_0);
 }
 VAR_11->last_rx_bd = 0;


 FUNC_12();


 FUNC_3(VAR_11, VAR_7, VAR_4 | VAR_8 | VAR_2);


 FUNC_2(VAR_11, VAR_6, VAR_1);

 FUNC_10(VAR_10);
}
