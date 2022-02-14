
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct hinic_sge {int len; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct hinic_sge*,int ,int ) ;
 int FUNC_6 (struct hinic_sge*) ;
 int FUNC_7 (int *,int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct hinic_dev *VAR_2, struct sk_buff *VAR_3,
        struct hinic_sge *VAR_4)
{
 struct hinic_hwdev *VAR_5 = VAR_2->hwdev;
 struct hinic_hwif *VAR_6 = VAR_5->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 skb_frag_t *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_1(&VAR_7->dev, VAR_3->data, FUNC_9(VAR_3),
      VAR_0);
 if (FUNC_2(&VAR_7->dev, VAR_9)) {
  FUNC_0(&VAR_7->dev, "Failed to map Tx skb data\n");
  return -VAR_1;
 }

 FUNC_5(&VAR_4[0], VAR_9, FUNC_9(VAR_3));

 for (VAR_10 = 0 ; VAR_10 < FUNC_10(VAR_3)->nr_frags; VAR_10++) {
  VAR_8 = &FUNC_10(VAR_3)->frags[VAR_10];

  VAR_9 = FUNC_7(&VAR_7->dev, VAR_8, 0,
         FUNC_8(VAR_8),
         VAR_0);
  if (FUNC_2(&VAR_7->dev, VAR_9)) {
   FUNC_0(&VAR_7->dev, "Failed to map Tx skb frag\n");
   goto err_tx_map;
  }

  FUNC_5(&VAR_4[VAR_10 + 1], VAR_9, FUNC_8(VAR_8));
 }

 return 0;

err_tx_map:
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_3(&VAR_7->dev, FUNC_6(&VAR_4[VAR_11 + 1]),
          VAR_4[VAR_11 + 1].len, VAR_0);

 FUNC_4(&VAR_7->dev, FUNC_6(&VAR_4[0]), VAR_4[0].len,
    VAR_0);
 return -VAR_1;
}
