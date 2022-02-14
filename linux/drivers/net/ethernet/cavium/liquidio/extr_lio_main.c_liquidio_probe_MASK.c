
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int subsystem_vendor; int subsystem_device; int devfn; TYPE_1__* bus; scalar_t__ vendor; int dev; } ;
struct octeon_device_priv {int dummy; } ;
struct octeon_device {int ptp_enable; int subsystem_id; size_t octeon_id; int rx_pause; int tx_pause; TYPE_2__* pci_dev; int * watchdog_task; int adapter_refcount; int msix_on; } ;
struct handshake {int init; struct pci_dev* pci_dev; int started; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ,int ) ;
 int VAR_5 ;
 struct handshake* VAR_6 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,struct octeon_device*,char*,int ,int ,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int VAR_7 ;
 struct octeon_device* FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (struct octeon_device*) ;
 int FUNC_14 (struct pci_dev*,struct octeon_device*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(struct pci_dev *VAR_8,
        const struct pci_device_id *VAR_9 __attribute__((unused)))
{
 struct octeon_device *VAR_10 = ((void*)0);
 struct handshake *VAR_11;

 VAR_10 = FUNC_12(VAR_8->device,
      sizeof(struct octeon_device_priv));
 if (!VAR_10) {
  FUNC_7(&VAR_8->dev, "Unable to allocate device\n");
  return -VAR_0;
 }

 if (VAR_8->device == VAR_2)
  VAR_10->msix_on = VAR_1;


 if (((VAR_8->device == VAR_3) ||
      (VAR_8->device == VAR_4)))
  VAR_10->ptp_enable = 1;
 else
  VAR_10->ptp_enable = 0;

 FUNC_8(&VAR_8->dev, "Initializing device %x:%x.\n",
   (u32)VAR_8->vendor, (u32)VAR_8->device);


 FUNC_14(VAR_8, VAR_10);


 VAR_10->pci_dev = (void *)VAR_8;

 VAR_10->subsystem_id = VAR_8->subsystem_vendor |
  (VAR_8->subsystem_device << 16);

 VAR_11 = &VAR_6[VAR_10->octeon_id];
 FUNC_9(&VAR_11->init);
 FUNC_9(&VAR_11->started);
 VAR_11->pci_dev = VAR_8;

 if (VAR_10->octeon_id == 0)

  FUNC_5(&VAR_5);

 if (FUNC_13(VAR_10)) {
  FUNC_5(&VAR_11->init);
  FUNC_11(VAR_8);
  return -VAR_0;
 }

 if (FUNC_1(VAR_10)) {
  u8 VAR_12, VAR_13, VAR_14;

  if (FUNC_4(VAR_10->adapter_refcount) == 1) {




   VAR_12 = VAR_8->bus->number;
   VAR_13 = FUNC_3(VAR_8->devfn);
   VAR_14 = FUNC_2(VAR_8->devfn);
   VAR_10->watchdog_task = FUNC_10(
       VAR_7, VAR_10,
       "liowd/%02hhx:%02hhx.%hhx", VAR_12, VAR_13, VAR_14);
   if (!FUNC_0(VAR_10->watchdog_task)) {
    FUNC_15(VAR_10->watchdog_task);
   } else {
    VAR_10->watchdog_task = ((void*)0);
    FUNC_7(&VAR_10->pci_dev->dev,
     "failed to create kernel_thread\n");
    FUNC_11(VAR_8);
    return -1;
   }
  }
 }

 VAR_10->rx_pause = 1;
 VAR_10->tx_pause = 1;

 FUNC_6(&VAR_10->pci_dev->dev, "Device is ready\n");

 return 0;
}
