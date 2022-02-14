
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rx_ring_info {int * frag_addr; int data_addr; struct sk_buff* skb; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rx_ring_info*,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2, struct rx_ring_info *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3->skb;
 int VAR_5;

 FUNC_2(VAR_2, VAR_3->data_addr, FUNC_0(VAR_3, VAR_1),
    VAR_0);

 for (VAR_5 = 0; VAR_5 < FUNC_4(VAR_4)->nr_frags; VAR_5++)
  FUNC_1(VAR_2, VAR_3->frag_addr[VAR_5],
          FUNC_3(&FUNC_4(VAR_4)->frags[VAR_5]),
          VAR_0);
}
