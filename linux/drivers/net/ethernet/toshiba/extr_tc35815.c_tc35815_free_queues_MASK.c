
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tc35815_local {int * fd_buf; int fd_buf_dma; int pci_dev; TYPE_4__* rx_skbs; int * fbl_ptr; int * rfd_cur; int * rfd_limit; int * rfd_base; TYPE_3__* tfd_base; TYPE_1__* tx_skbs; } ;
struct sk_buff {int len; } ;
struct net_device {int name; } ;
struct TYPE_8__ {int * skb; int skb_dma; } ;
struct TYPE_6__ {int FDSystem; } ;
struct TYPE_7__ {TYPE_2__ fd; } ;
struct TYPE_5__ {scalar_t__ skb_dma; struct sk_buff* skb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;
 struct tc35815_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int,int *,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,int ) ;
 int FUNC_9 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct net_device *VAR_5)
{
 struct tc35815_local *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 if (VAR_6->tfd_base) {
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   u32 VAR_8 = FUNC_4(VAR_6->tfd_base[VAR_7].fd.FDSystem);
   struct sk_buff *VAR_9 =
    VAR_8 != 0xffffffff ?
    VAR_6->tx_skbs[VAR_8].skb : ((void*)0);






   FUNC_0(VAR_6->tx_skbs[VAR_7].skb != VAR_9);

   if (VAR_9) {
    FUNC_8(VAR_6->pci_dev, VAR_6->tx_skbs[VAR_7].skb_dma, VAR_9->len, VAR_2);
    FUNC_2(VAR_9);
    VAR_6->tx_skbs[VAR_7].skb = ((void*)0);
    VAR_6->tx_skbs[VAR_7].skb_dma = 0;
   }
   VAR_6->tfd_base[VAR_7].fd.FDSystem = FUNC_1(0xffffffff);
  }
 }

 VAR_6->rfd_base = ((void*)0);
 VAR_6->rfd_limit = ((void*)0);
 VAR_6->rfd_cur = ((void*)0);
 VAR_6->fbl_ptr = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_6->rx_skbs[VAR_7].skb) {
   FUNC_3(VAR_6->pci_dev, VAR_6->rx_skbs[VAR_7].skb,
           VAR_6->rx_skbs[VAR_7].skb_dma);
   VAR_6->rx_skbs[VAR_7].skb = ((void*)0);
  }
 }
 if (VAR_6->fd_buf) {
  FUNC_7(VAR_6->pci_dev, VAR_1 * VAR_0,
        VAR_6->fd_buf, VAR_6->fd_buf_dma);
  VAR_6->fd_buf = ((void*)0);
 }
}
