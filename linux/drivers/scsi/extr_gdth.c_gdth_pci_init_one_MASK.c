
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int devfn; TYPE_1__* bus; } ;
typedef int gdth_pcistr ;
struct TYPE_6__ {void* dpmem; int irq; struct pci_dev* pdev; void* io; } ;
typedef TYPE_2__ gdth_pci_str ;
typedef int gdth_ha_str ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_2__*,int **) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (struct pci_dev*) ;
 unsigned long FUNC_7 (struct pci_dev*,int) ;
 void* FUNC_8 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_9,
        const struct pci_device_id *VAR_10)
{
 u16 VAR_11 = VAR_9->vendor;
 u16 VAR_12 = VAR_9->device;
 unsigned long VAR_13, VAR_14, VAR_15;
 int VAR_16;
 gdth_pci_str VAR_17;
 gdth_ha_str *VAR_18 = ((void*)0);

 FUNC_1(("gdth_search_dev() cnt %d vendor %x device %x\n",
        VAR_8, VAR_11, VAR_12));

 FUNC_5(&VAR_17, 0, sizeof(VAR_17));

 if (VAR_11 == VAR_7 && !FUNC_4(VAR_12))
  return -VAR_1;

 VAR_16 = FUNC_6(VAR_9);
 if (VAR_16)
  return VAR_16;

 if (VAR_8 >= VAR_4)
  return -VAR_0;


 VAR_17.pdev = VAR_9;
        VAR_13 = FUNC_7(VAR_9, 0);
        VAR_14 = FUNC_7(VAR_9, 1);
        VAR_15 = FUNC_7(VAR_9, 2);
        if (VAR_12 <= VAR_5 ||
            VAR_12 >= VAR_6) {
            if (!(VAR_13 & VAR_3))
  return -VAR_1;
     VAR_17.dpmem = FUNC_8(VAR_9, 0);
        } else {
            if (!(VAR_13 & VAR_3) ||
                !(VAR_15 & VAR_3) ||
                !(VAR_14 & VAR_2))
  return -VAR_1;
     VAR_17.dpmem = FUNC_8(VAR_9, 2);
     VAR_17.io = FUNC_8(VAR_9, 1);
        }
        FUNC_2(("Controller found at %d/%d, irq %d, dpmem 0x%lx\n",
  VAR_17.pdev->bus->number,
  FUNC_0(VAR_17.pdev->devfn),
  VAR_17.irq,
  VAR_17.dpmem));

 VAR_16 = FUNC_3(&VAR_17, &VAR_18);
 if (VAR_16)
  return VAR_16;

 return 0;
}
