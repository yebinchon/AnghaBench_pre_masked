
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct sonic_local {TYPE_1__ stats; int ** tx_skb; scalar_t__* tx_laddr; int * tx_len; int device; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 struct sonic_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_6)
{
 struct sonic_local *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;




 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_4, 0x7fff);
 FUNC_0(VAR_1, VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  if(VAR_7->tx_laddr[VAR_8]) {
   FUNC_2(VAR_7->device, VAR_7->tx_laddr[VAR_8], VAR_7->tx_len[VAR_8], VAR_0);
   VAR_7->tx_laddr[VAR_8] = (dma_addr_t)0;
  }
  if(VAR_7->tx_skb[VAR_8]) {
   FUNC_1(VAR_7->tx_skb[VAR_8]);
   VAR_7->tx_skb[VAR_8] = ((void*)0);
  }
 }

 FUNC_6(VAR_6);
 VAR_7->stats.tx_errors++;
 FUNC_4(VAR_6);
 FUNC_5(VAR_6);
}
