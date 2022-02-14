
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct arc_emac_priv {size_t last_rx_bd; scalar_t__ rx_missed_errors; struct arc_emac_bd* rxbd; } ;
struct arc_emac_bd {int info; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct arc_emac_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
        int VAR_2, unsigned int VAR_3)
{
 struct arc_emac_priv *VAR_4 = FUNC_2(VAR_1);
 struct arc_emac_bd *VAR_5;

 if (VAR_3)
  VAR_4->rx_missed_errors = 0;

 if (VAR_4->rx_missed_errors && VAR_2) {
  VAR_5 = &VAR_4->rxbd[VAR_4->last_rx_bd];
  if (FUNC_1(VAR_5->info) & VAR_0) {
   FUNC_0(VAR_1);
   VAR_4->rx_missed_errors = 0;
  }
 }
}
