
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int base_addr; struct airo_info* ml_priv; } ;
struct airo_info {int tfm; int shared_dma; int shared; scalar_t__ pci; scalar_t__ pciaux; scalar_t__ pcimem; int flags; int SSID; int rssi; int flash; int txq; struct net_device* wifidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct airo_info*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct airo_info*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct airo_info*,int) ;
 int FUNC_6 (struct airo_info*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int ,int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int *) ;
 struct sk_buff* FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct net_device*,struct airo_info*) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (struct net_device*) ;

void FUNC_19( struct net_device *VAR_4, int VAR_5 )
{
 struct airo_info *VAR_6 = VAR_4->ml_priv;

 FUNC_13(VAR_1, &VAR_6->flags);
 FUNC_5(VAR_6, 1);
 FUNC_6(VAR_6);
 FUNC_16( VAR_4, VAR_6 );
 if (FUNC_17(VAR_2, &VAR_6->flags)) {
  FUNC_18( VAR_4 );
  if (VAR_6->wifidev) {
   FUNC_18(VAR_6->wifidev);
   FUNC_7(VAR_6->wifidev);
   VAR_6->wifidev = ((void*)0);
  }
  FUNC_1(VAR_2, &VAR_6->flags);
 }



 if (FUNC_17(VAR_0, &VAR_6->flags) && !FUNC_15(&VAR_6->txq)) {
  struct sk_buff *VAR_7 = ((void*)0);
  for (;(VAR_7 = FUNC_14(&VAR_6->txq));)
   FUNC_4(VAR_7);
 }

 FUNC_0 (VAR_6);

 FUNC_9(VAR_6->flash);
 FUNC_9(VAR_6->rssi);
 FUNC_9(VAR_6->SSID);
 if (VAR_5) {

         FUNC_12( VAR_4->base_addr, 64 );
  if (FUNC_17(VAR_0, &VAR_6->flags)) {
   if (VAR_6->pci)
    FUNC_10(VAR_6->pci);
   if (VAR_6->pcimem)
    FUNC_8(VAR_6->pcimem);
   if (VAR_6->pciaux)
    FUNC_8(VAR_6->pciaux);
   FUNC_11(VAR_6->pci, VAR_3,
    VAR_6->shared, VAR_6->shared_dma);
  }
        }
 FUNC_2(VAR_6->tfm);
 FUNC_3(VAR_6);
 FUNC_7( VAR_4 );
}
