
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int addrlo; } ;
struct rx_desc {TYPE_1__ addr; scalar_t__ size; } ;
struct rr_private {struct sk_buff** rx_skbuff; int pci_dev; struct rx_desc* rx_ring; } ;
struct net_device {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct rr_private *VAR_3,
        struct net_device *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct sk_buff *VAR_6 = VAR_3->rx_skbuff[VAR_5];

  if (VAR_6) {
   struct rx_desc *VAR_7 = &(VAR_3->rx_ring[VAR_5]);

          FUNC_1(VAR_3->pci_dev, VAR_7->addr.addrlo,
    VAR_4->mtu + VAR_0, VAR_1);
   VAR_7->size = 0;
   FUNC_2(&VAR_7->addr, 0);
   FUNC_0(VAR_6);
   VAR_3->rx_skbuff[VAR_5] = ((void*)0);
  }
 }
}
