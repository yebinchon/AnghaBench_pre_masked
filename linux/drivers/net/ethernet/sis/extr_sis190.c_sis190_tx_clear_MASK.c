
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sis190_private {scalar_t__ dirty_tx; scalar_t__ cur_tx; TYPE_2__* dev; struct sk_buff** Tx_skbuff; scalar_t__ TxDescRing; int pci_dev; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sis190_private *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct sk_buff *VAR_3 = VAR_1->Tx_skbuff[VAR_2];

  if (!VAR_3)
   continue;

  FUNC_1(VAR_1->pci_dev, VAR_3, VAR_1->TxDescRing + VAR_2);
  VAR_1->Tx_skbuff[VAR_2] = ((void*)0);
  FUNC_0(VAR_3);

  VAR_1->dev->stats.tx_dropped++;
 }
 VAR_1->cur_tx = VAR_1->dirty_tx = 0;
}
