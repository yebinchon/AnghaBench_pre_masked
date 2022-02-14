
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct pci_dev {int dev; } ;
struct msix_entry {size_t vector; size_t entry; } ;
struct mic_irq {int dummy; } ;
struct mic_intr_cb {size_t cb_id; } ;
struct TYPE_3__ {int num_vectors; int* mic_msi_map; } ;
struct mic_device {struct pci_dev* pdev; TYPE_2__* intr_ops; TYPE_1__ irq_info; } ;
typedef int irq_handler_t ;
typedef enum mic_intr_type { ____Placeholder_mic_intr_type } mic_intr_type ;
struct TYPE_4__ {int (* program_msi_to_src_map ) (struct mic_device*,size_t,size_t,int) ;} ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mic_irq* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mic_intr_cb*) ;
 size_t VAR_2 ;
 unsigned long FUNC_3 (size_t,size_t) ;
 int FUNC_4 (struct mic_intr_cb*) ;
 int FUNC_5 (int *,char*,size_t,...) ;
 int FUNC_6 (int *,char*,...) ;
 struct msix_entry* FUNC_7 (struct mic_device*) ;
 size_t FUNC_8 (struct mic_device*,int,int) ;
 struct mic_intr_cb* FUNC_9 (struct mic_device*,size_t,int ,int ,void*) ;
 scalar_t__ FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (size_t,int ,int ,int ,char const*,void*) ;
 int FUNC_12 (struct mic_device*,size_t,size_t,int) ;
 int FUNC_13 (struct mic_device*,size_t,size_t,int) ;

struct mic_irq *
FUNC_14(struct mic_device *VAR_3,
    irq_handler_t VAR_4, irq_handler_t VAR_5,
    const char *VAR_6, void *VAR_7, int VAR_8,
    enum mic_intr_type VAR_9)
{
 u16 VAR_10;
 int VAR_11 = 0;
 struct msix_entry *VAR_12 = ((void*)0);
 unsigned long VAR_13 = 0;
 u16 VAR_14;
 struct mic_intr_cb *VAR_15;
 struct pci_dev *VAR_16 = VAR_3->pdev;

 VAR_10 = FUNC_8(VAR_3, VAR_8, VAR_9);
 if (VAR_10 >= VAR_2) {
  FUNC_6(&VAR_3->pdev->dev,
   "Error mapping index %d to a valid source id.\n",
   VAR_8);
  VAR_11 = -VAR_0;
  goto err;
 }

 if (VAR_3->irq_info.num_vectors > 1) {
  VAR_12 = FUNC_7(VAR_3);
  if (!VAR_12) {
   FUNC_6(&VAR_3->pdev->dev,
    "No MSIx vectors available for use.\n");
   VAR_11 = -VAR_1;
   goto err;
  }

  VAR_11 = FUNC_11(VAR_12->vector, VAR_4, VAR_5,
       0, VAR_6, VAR_7);
  if (VAR_11) {
   FUNC_5(&VAR_3->pdev->dev,
    "request irq failed rc = %d\n", VAR_11);
   goto err;
  }
  VAR_14 = VAR_12->entry;
  VAR_3->irq_info.mic_msi_map[VAR_14] |= FUNC_0(VAR_10);
  VAR_3->intr_ops->program_msi_to_src_map(VAR_3,
    VAR_14, VAR_10, 1);
  VAR_13 = FUNC_3(VAR_14, VAR_10);
  FUNC_5(&VAR_3->pdev->dev, "irq: %d assigned for src: %d\n",
   VAR_12->vector, VAR_8);
 } else {
  VAR_15 = FUNC_9(VAR_3, VAR_10, VAR_4,
           VAR_5, VAR_7);
  if (FUNC_2(VAR_15)) {
   FUNC_6(&VAR_3->pdev->dev,
    "No available callback entries for use\n");
   VAR_11 = FUNC_4(VAR_15);
   goto err;
  }

  VAR_14 = 0;
  if (FUNC_10(VAR_16)) {
   VAR_3->irq_info.mic_msi_map[VAR_14] |= (1 << VAR_10);
   VAR_3->intr_ops->program_msi_to_src_map(VAR_3,
    VAR_14, VAR_10, 1);
  }
  VAR_13 = FUNC_3(VAR_14, VAR_15->cb_id);
  FUNC_5(&VAR_3->pdev->dev, "callback %d registered for src: %d\n",
   VAR_15->cb_id, VAR_8);
 }
 return (struct mic_irq *)VAR_13;
err:
 return FUNC_1(VAR_11);
}
