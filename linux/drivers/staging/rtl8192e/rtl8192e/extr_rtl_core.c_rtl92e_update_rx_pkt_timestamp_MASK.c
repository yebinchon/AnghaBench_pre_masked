
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_rx_stats {int mac_time; int bFirstMPDU; scalar_t__ bIsAMPDU; } ;
struct r8192_priv {int LastRxDescTSF; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_0,
        struct rtllib_rx_stats *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->bIsAMPDU && !VAR_1->bFirstMPDU)
  VAR_1->mac_time = VAR_2->LastRxDescTSF;
 else
  VAR_2->LastRxDescTSF = VAR_1->mac_time;
}
