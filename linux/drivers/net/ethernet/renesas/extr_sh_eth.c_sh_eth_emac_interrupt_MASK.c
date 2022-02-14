
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sh_eth_private {scalar_t__ ether_link_active_low; scalar_t__ no_ether_link; TYPE_3__* cd; TYPE_2__* pdev; } ;
struct TYPE_4__ {int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_6__ {scalar_t__ no_psr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_9)
{
 struct sh_eth_private *VAR_10 = FUNC_0(VAR_9);
 u32 VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_5(VAR_9, VAR_1) & FUNC_5(VAR_9, VAR_0);
 FUNC_6(VAR_9, VAR_11, VAR_1);
 if (VAR_11 & VAR_2)
  VAR_9->stats.tx_carrier_errors++;
 if (VAR_11 & VAR_4)
  FUNC_1(&VAR_10->pdev->dev, 0);
 if (VAR_11 & VAR_3) {

  if (VAR_10->cd->no_psr || VAR_10->no_ether_link)
   return;
  VAR_12 = FUNC_5(VAR_9, VAR_8);
  if (VAR_10->ether_link_active_low)
   VAR_12 = ~VAR_12;
  if (!(VAR_12 & VAR_7)) {
   FUNC_3(VAR_9);
  } else {

   FUNC_2(VAR_9, VAR_5, VAR_6, 0);

   FUNC_2(VAR_9, VAR_1, 0, 0);
   FUNC_2(VAR_9, VAR_5, VAR_6, VAR_6);

   FUNC_4(VAR_9);
  }
 }
}
