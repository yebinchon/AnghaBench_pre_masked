
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int pf_srn; int trs; } ;
struct octeon_device {int num_msix_irqs; char* irq_name_storage; char* msix_entries; int octeon_id; int pf_num; int vf_num; int flags; TYPE_2__* pci_dev; int affinity_mask; struct octeon_device* ioq_vector; int vector; TYPE_1__ sriov_info; scalar_t__ msix_on; } ;
struct msix_entry {int entry; int vector; } ;
struct TYPE_7__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,struct octeon_device*) ;
 int FUNC_7 (int ,int *) ;
 void* FUNC_8 (int,int,int ) ;
 int FUNC_9 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,struct msix_entry*,int,int) ;
 int FUNC_14 (int ,int ,int ,char*,struct octeon_device*) ;
 int FUNC_15 (char*,int,char*,int,int,...) ;

int FUNC_16(struct octeon_device *VAR_9, u32 VAR_10)
{
 struct msix_entry *VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13, VAR_14 = 0;
 int VAR_15;
 char *VAR_16 = ((void*)0);
 int VAR_17;
 int VAR_18, VAR_19;

 if (VAR_9->msix_on) {
  VAR_9->num_msix_irqs = VAR_10;
  if (FUNC_1(VAR_9)) {
   VAR_14 = VAR_5 + 1;




   VAR_9->num_msix_irqs += 1;
  } else if (FUNC_2(VAR_9)) {
   VAR_14 = VAR_6;
  }


  VAR_9->irq_name_storage =
   FUNC_8(VAR_14, VAR_2, VAR_1);
  if (!VAR_9->irq_name_storage) {
   FUNC_4(&VAR_9->pci_dev->dev, "Irq name storage alloc failed...\n");
   return -VAR_0;
  }

  VAR_12 = VAR_9->irq_name_storage;

  if (FUNC_1(VAR_9))
   VAR_16 = &VAR_12
    [FUNC_0(VAR_5)];

  VAR_9->msix_entries = FUNC_8(VAR_9->num_msix_irqs,
         sizeof(struct msix_entry),
         VAR_1);
  if (!VAR_9->msix_entries) {
   FUNC_4(&VAR_9->pci_dev->dev, "Memory Alloc failed...\n");
   FUNC_9(VAR_9->irq_name_storage);
   VAR_9->irq_name_storage = ((void*)0);
   return -VAR_0;
  }

  VAR_11 = (struct msix_entry *)VAR_9->msix_entries;




  if (FUNC_1(VAR_9)) {
   for (VAR_13 = 0; VAR_13 < VAR_9->num_msix_irqs - 1; VAR_13++)
    VAR_11[VAR_13].entry =
     VAR_9->sriov_info.pf_srn + VAR_13;

   VAR_11[VAR_9->num_msix_irqs - 1].entry =
    VAR_9->sriov_info.trs;
  } else if (FUNC_2(VAR_9)) {
   for (VAR_13 = 0; VAR_13 < VAR_9->num_msix_irqs; VAR_13++)
    VAR_11[VAR_13].entry = VAR_13;
  }
  VAR_15 = FUNC_13(
      VAR_9->pci_dev, VAR_11,
      VAR_9->num_msix_irqs,
      VAR_9->num_msix_irqs);
  if (VAR_15 < 0) {
   FUNC_4(&VAR_9->pci_dev->dev, "unable to Allocate MSI-X interrupts\n");
   FUNC_9(VAR_9->msix_entries);
   VAR_9->msix_entries = ((void*)0);
   FUNC_9(VAR_9->irq_name_storage);
   VAR_9->irq_name_storage = ((void*)0);
   return VAR_15;
  }

  FUNC_3(&VAR_9->pci_dev->dev, "OCTEON: Enough MSI-X interrupts are allocated...\n");

  VAR_17 = VAR_9->num_msix_irqs;

  if (FUNC_1(VAR_9)) {
   VAR_17 -= 1;

   FUNC_15(VAR_16, VAR_2,
     "LiquidIO%u-pf%u-aux", VAR_9->octeon_id,
     VAR_9->pf_num);
   VAR_18 = FUNC_14(
     VAR_11[VAR_17].vector,
     VAR_7, 0,
     VAR_16, VAR_9);
   if (VAR_18) {
    FUNC_4(&VAR_9->pci_dev->dev,
     "Request_irq failed for MSIX interrupt Error: %d\n",
     VAR_18);
    FUNC_11(VAR_9->pci_dev);
    FUNC_9(VAR_9->msix_entries);
    FUNC_9(VAR_9->irq_name_storage);
    VAR_9->irq_name_storage = ((void*)0);
    VAR_9->msix_entries = ((void*)0);
    return VAR_18;
   }
  }
  for (VAR_13 = 0 ; VAR_13 < VAR_17 ; VAR_13++) {
   if (FUNC_1(VAR_9))
    FUNC_15(&VAR_12[FUNC_0(VAR_13)],
      VAR_2, "LiquidIO%u-pf%u-rxtx-%u",
      VAR_9->octeon_id, VAR_9->pf_num, VAR_13);

   if (FUNC_2(VAR_9))
    FUNC_15(&VAR_12[FUNC_0(VAR_13)],
      VAR_2, "LiquidIO%u-vf%u-rxtx-%u",
      VAR_9->octeon_id, VAR_9->vf_num, VAR_13);

   VAR_18 = FUNC_14(VAR_11[VAR_13].vector,
          VAR_8, 0,
          &VAR_12[FUNC_0(VAR_13)],
          &VAR_9->ioq_vector[VAR_13]);

   if (VAR_18) {
    FUNC_4(&VAR_9->pci_dev->dev,
     "Request_irq failed for MSIX interrupt Error: %d\n",
     VAR_18);

    FUNC_6(VAR_11[VAR_17].vector,
      VAR_9);

    while (VAR_13) {
     VAR_13--;

     FUNC_7(
            VAR_11[VAR_13].vector,
            ((void*)0));
     FUNC_6(VAR_11[VAR_13].vector,
       &VAR_9->ioq_vector[VAR_13]);
    }
    FUNC_11(VAR_9->pci_dev);
    FUNC_9(VAR_9->msix_entries);
    FUNC_9(VAR_9->irq_name_storage);
    VAR_9->irq_name_storage = ((void*)0);
    VAR_9->msix_entries = ((void*)0);
    return VAR_18;
   }
   VAR_9->ioq_vector[VAR_13].vector = VAR_11[VAR_13].vector;

   FUNC_7(VAR_11[VAR_13].vector,
           &VAR_9->ioq_vector[VAR_13].affinity_mask
           );
  }
  FUNC_3(&VAR_9->pci_dev->dev, "OCTEON[%d]: MSI-X enabled\n",
   VAR_9->octeon_id);
 } else {
  VAR_19 = FUNC_12(VAR_9->pci_dev);
  if (VAR_19)
   FUNC_5(&VAR_9->pci_dev->dev, "Reverting to legacy interrupts. Error: %d\n",
     VAR_19);
  else
   VAR_9->flags |= VAR_4;


  VAR_9->irq_name_storage = FUNC_8(1, VAR_2, VAR_1);
  if (!VAR_9->irq_name_storage)
   return -VAR_0;

  VAR_12 = VAR_9->irq_name_storage;

  if (FUNC_1(VAR_9))
   FUNC_15(&VAR_12[FUNC_0(0)], VAR_2,
     "LiquidIO%u-pf%u-rxtx-%u",
     VAR_9->octeon_id, VAR_9->pf_num, 0);

  if (FUNC_2(VAR_9))
   FUNC_15(&VAR_12[FUNC_0(0)], VAR_2,
     "LiquidIO%u-vf%u-rxtx-%u",
     VAR_9->octeon_id, VAR_9->vf_num, 0);

  VAR_18 = FUNC_14(VAR_9->pci_dev->irq,
         VAR_7,
         VAR_3,
         &VAR_12[FUNC_0(0)], VAR_9);
  if (VAR_18) {
   if (VAR_9->flags & VAR_4)
    FUNC_10(VAR_9->pci_dev);
   FUNC_4(&VAR_9->pci_dev->dev, "Request IRQ failed with code: %d\n",
    VAR_18);
   FUNC_9(VAR_9->irq_name_storage);
   VAR_9->irq_name_storage = ((void*)0);
   return VAR_18;
  }
 }
 return 0;
}
