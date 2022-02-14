
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tc35815_local {TYPE_3__* tfd_base; TYPE_1__* tx_skbs; int pci_dev; } ;
struct sk_buff {int len; } ;
struct net_device {int name; } ;
struct TYPE_5__ {int FDSystem; } ;
struct TYPE_6__ {TYPE_2__ fd; } ;
struct TYPE_4__ {scalar_t__ skb_dma; struct sk_buff* skb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 struct tc35815_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,scalar_t__,int ,int ) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void
FUNC_9(struct net_device *VAR_2)
{
 struct tc35815_local *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u32 VAR_5 = FUNC_3(VAR_3->tfd_base[VAR_4].fd.FDSystem);
  struct sk_buff *VAR_6 =
   VAR_5 != 0xffffffff ?
   VAR_3->tx_skbs[VAR_5].skb : ((void*)0);






  FUNC_0(VAR_3->tx_skbs[VAR_4].skb != VAR_6);

  if (VAR_6) {
   FUNC_6(VAR_3->pci_dev, VAR_3->tx_skbs[VAR_4].skb_dma, VAR_6->len, VAR_0);
   VAR_3->tx_skbs[VAR_4].skb = ((void*)0);
   VAR_3->tx_skbs[VAR_4].skb_dma = 0;
   FUNC_2(VAR_6);
  }
  VAR_3->tfd_base[VAR_4].fd.FDSystem = FUNC_1(0xffffffff);
 }

 FUNC_8(VAR_2);
}
