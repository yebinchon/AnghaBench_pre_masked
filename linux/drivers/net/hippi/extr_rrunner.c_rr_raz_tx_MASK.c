
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addrlo; } ;
struct tx_desc {TYPE_1__ addr; scalar_t__ size; } ;
struct sk_buff {int len; } ;
struct rr_private {struct sk_buff** tx_skbuff; int pci_dev; struct tx_desc* tx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct rr_private *VAR_2,
        struct net_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct sk_buff *VAR_5 = VAR_2->tx_skbuff[VAR_4];

  if (VAR_5) {
   struct tx_desc *VAR_6 = &(VAR_2->tx_ring[VAR_4]);

          FUNC_1(VAR_2->pci_dev, VAR_6->addr.addrlo,
    VAR_5->len, VAR_0);
   VAR_6->size = 0;
   FUNC_2(&VAR_6->addr, 0);
   FUNC_0(VAR_5);
   VAR_2->tx_skbuff[VAR_4] = ((void*)0);
  }
 }
}
