
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_pcr {int remove_pci; struct rtsx_pcr* slots; int id; int remap_addr; TYPE_1__* pci; scalar_t__ msi_en; int irq; int rtsx_resv_buf_addr; int rtsx_resv_buf; int idle_work; int carddet_work; int lock; scalar_t__ bier; struct rtsx_pcr* pcr; } ;
struct pcr_handle {int remove_pci; struct pcr_handle* slots; int id; int remap_addr; TYPE_1__* pci; scalar_t__ msi_en; int irq; int rtsx_resv_buf_addr; int rtsx_resv_buf; int idle_work; int carddet_work; int lock; scalar_t__ bier; struct pcr_handle* pcr; } ;
struct pci_dev {scalar_t__ device; scalar_t__ vendor; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rtsx_pcr*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (TYPE_1__*) ;
 struct rtsx_pcr* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (struct rtsx_pcr*,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct pci_dev *VAR_4)
{
 struct pcr_handle *VAR_5 = FUNC_10(VAR_4);
 struct rtsx_pcr *VAR_6 = VAR_5->pcr;

 VAR_6->remove_pci = 1;


 FUNC_15(&VAR_6->lock);
 FUNC_13(VAR_6, VAR_0, 0);
 VAR_6->bier = 0;
 FUNC_17(&VAR_6->lock);

 FUNC_0(&VAR_6->carddet_work);
 FUNC_0(&VAR_6->idle_work);

 FUNC_7(&VAR_4->dev);

 FUNC_2(&(VAR_6->pci->dev), VAR_1,
   VAR_6->rtsx_resv_buf, VAR_6->rtsx_resv_buf_addr);
 FUNC_3(VAR_6->irq, (void *)VAR_6);
 if (VAR_6->msi_en)
  FUNC_9(VAR_6->pci);
 FUNC_5(VAR_6->remap_addr);

 FUNC_12(VAR_4);
 FUNC_8(VAR_4);

 FUNC_14(&VAR_3);
 FUNC_4(&VAR_2, VAR_6->id);
 FUNC_16(&VAR_3);

 FUNC_6(VAR_6->slots);
 FUNC_6(VAR_6);
 FUNC_6(VAR_5);

 FUNC_1(&(VAR_4->dev),
  ": Realtek PCI-E Card Reader at %s [%04x:%04x] has been removed\n",
  FUNC_11(VAR_4), (int)VAR_4->vendor, (int)VAR_4->device);
}
