
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct pasemi_mac {struct pci_dev* dma_pdev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct pci_dev*,int const,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int const,int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct pasemi_mac *VAR_1,
        const int VAR_2,
        struct sk_buff *VAR_3,
        const dma_addr_t *VAR_4)
{
 int VAR_5;
 struct pci_dev *VAR_6 = VAR_1->dma_pdev;

 FUNC_2(VAR_6, VAR_4[0], FUNC_4(VAR_3), VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  const skb_frag_t *VAR_7 = &FUNC_5(VAR_3)->frags[VAR_5];

  FUNC_1(VAR_6, VAR_4[VAR_5+1], FUNC_3(VAR_7), VAR_0);
 }
 FUNC_0(VAR_3);




 return (VAR_2 + 3) & ~1;
}
