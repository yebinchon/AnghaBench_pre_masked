
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ravb_private {scalar_t__ avb_link_active_low; scalar_t__ no_avb_link; TYPE_2__* pdev; } ;
struct TYPE_3__ {int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct ravb_private *VAR_7 = FUNC_0(VAR_6);
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_4(VAR_6, VAR_0);
 FUNC_5(VAR_6, VAR_8, VAR_0);

 if (VAR_8 & VAR_3)
  FUNC_1(&VAR_7->pdev->dev, 0);
 if (VAR_8 & VAR_1)
  VAR_6->stats.tx_carrier_errors++;
 if (VAR_8 & VAR_2) {

  if (VAR_7->no_avb_link)
   return;
  VAR_9 = FUNC_4(VAR_6, VAR_4);
  if (VAR_7->avb_link_active_low)
   VAR_9 ^= VAR_5;
  if (!(VAR_9 & VAR_5)) {

   FUNC_2(VAR_6);
  } else {

   FUNC_3(VAR_6);
  }
 }
}
