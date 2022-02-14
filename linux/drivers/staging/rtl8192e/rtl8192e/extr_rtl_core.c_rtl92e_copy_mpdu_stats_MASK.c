
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_rx_stats {int bFirstMPDU; int bIsAMPDU; } ;



void FUNC_0(struct rtllib_rx_stats *VAR_0,
       struct rtllib_rx_stats *VAR_1)
{
 VAR_1->bIsAMPDU = VAR_0->bIsAMPDU;
 VAR_1->bFirstMPDU = VAR_0->bFirstMPDU;
}
