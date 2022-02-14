
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int tx_coalesce_usecs; } ;
struct bcm_sysport_tx_ring {int index; struct bcm_sysport_priv* priv; } ;
struct bcm_sysport_priv {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ) ;
 int FUNC_3 (struct bcm_sysport_priv*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct bcm_sysport_tx_ring *VAR_3,
     struct ethtool_coalesce *VAR_4)
{
 struct bcm_sysport_priv *VAR_5 = VAR_3->priv;
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_5, FUNC_1(VAR_3->index));
 VAR_6 &= ~(VAR_0 |
   VAR_1 << VAR_2);
 VAR_6 |= VAR_4->tx_max_coalesced_frames;
 VAR_6 |= FUNC_0(VAR_4->tx_coalesce_usecs * 1000, 8192) <<
       VAR_2;
 FUNC_3(VAR_5, VAR_6, FUNC_1(VAR_3->index));
}
