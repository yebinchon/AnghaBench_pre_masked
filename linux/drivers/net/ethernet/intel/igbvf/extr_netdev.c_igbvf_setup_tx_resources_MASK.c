
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_tx_desc {int dummy; } e1000_adv_tx_desc ;
struct pci_dev {int dev; } ;
struct igbvf_ring {int count; int size; int buffer_info; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct igbvf_adapter* adapter; int desc; int dma; } ;
struct igbvf_buffer {int dummy; } ;
struct igbvf_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

int FUNC_5(struct igbvf_adapter *VAR_2,
        struct igbvf_ring *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->pdev;
 int VAR_5;

 VAR_5 = sizeof(struct igbvf_buffer) * VAR_3->count;
 VAR_3->buffer_info = FUNC_4(VAR_5);
 if (!VAR_3->buffer_info)
  goto err;


 VAR_3->size = VAR_3->count * sizeof(union e1000_adv_tx_desc);
 VAR_3->size = FUNC_0(VAR_3->size, 4096);

 VAR_3->desc = FUNC_2(&VAR_4->dev, VAR_3->size,
        &VAR_3->dma, VAR_1);
 if (!VAR_3->desc)
  goto err;

 VAR_3->adapter = VAR_2;
 VAR_3->next_to_use = 0;
 VAR_3->next_to_clean = 0;

 return 0;
err:
 FUNC_3(VAR_3->buffer_info);
 FUNC_1(&VAR_2->pdev->dev,
  "Unable to allocate memory for the transmit descriptor ring\n");
 return -VAR_0;
}
