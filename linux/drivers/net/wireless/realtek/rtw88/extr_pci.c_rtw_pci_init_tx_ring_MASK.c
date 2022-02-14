
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* head; int len; int desc_size; scalar_t__ rp; scalar_t__ wp; int dma; } ;
struct rtw_pci_tx_ring {TYPE_1__ r; int queue; } ;
struct rtw_dev {int dev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int* FUNC_0 (struct pci_dev*,int,int *) ;
 int FUNC_1 (struct rtw_dev*,char*) ;
 int FUNC_2 (int *) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rtw_dev *VAR_1,
    struct rtw_pci_tx_ring *VAR_2,
    u8 VAR_3, u32 VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_3(VAR_1->dev);
 int VAR_6 = VAR_3 * VAR_4;
 dma_addr_t VAR_7;
 u8 *VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_6, &VAR_7);
 if (!VAR_8) {
  FUNC_1(VAR_1, "failed to allocate tx ring\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_2->queue);
 VAR_2->r.head = VAR_8;
 VAR_2->r.dma = VAR_7;
 VAR_2->r.len = VAR_4;
 VAR_2->r.desc_size = VAR_3;
 VAR_2->r.wp = 0;
 VAR_2->r.rp = 0;

 return 0;
}
