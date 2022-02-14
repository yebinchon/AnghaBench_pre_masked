
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_4__ {int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct hamachi_private {scalar_t__ cur_tx; int dirty_tx; TYPE_1__* tx_ring; struct sk_buff** tx_skbuff; int pci_dev; } ;
struct TYPE_3__ {int status_n_length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct hamachi_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_5(struct net_device *VAR_4)
{
 struct hamachi_private *VAR_5 = FUNC_3(VAR_4);



 for (; VAR_5->cur_tx - VAR_5->dirty_tx > 0; VAR_5->dirty_tx++) {
  int VAR_6 = VAR_5->dirty_tx % VAR_3;
  struct sk_buff *VAR_7;

  if (VAR_5->tx_ring[VAR_6].status_n_length & FUNC_0(VAR_1))
   break;

  VAR_7 = VAR_5->tx_skbuff[VAR_6];
  if (VAR_7) {
   FUNC_4(VAR_5->pci_dev,
    FUNC_2(VAR_5->tx_ring[VAR_6].addr),
    VAR_7->len, VAR_2);
   FUNC_1(VAR_7);
   VAR_5->tx_skbuff[VAR_6] = ((void*)0);
  }
  VAR_5->tx_ring[VAR_6].status_n_length = 0;
  if (VAR_6 >= VAR_3-1)
   VAR_5->tx_ring[VAR_3-1].status_n_length |=
    FUNC_0(VAR_0);
  VAR_4->stats.tx_packets++;
 }

 return 0;
}
