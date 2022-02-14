
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct r8192_priv {scalar_t__ card_8192; TYPE_1__* ops; } ;
struct pci_dev {int device; int revision; int dev; int vendor; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ nic_type; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,struct net_device*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

bool FUNC_4(struct pci_dev *VAR_3, struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_3(VAR_4);
 u16 VAR_6;
 u8 VAR_7;
 u16 VAR_8;

 VAR_6 = VAR_3->device;
 VAR_7 = VAR_3->revision;
 FUNC_2(VAR_3, 0x3C, &VAR_8);

 VAR_5->card_8192 = VAR_5->ops->nic_type;

 if (VAR_6 == 0x8192) {
  switch (VAR_7) {
  case 129:
   FUNC_1(&VAR_3->dev,
     "Adapter(8192 PCI-E) is found - DeviceID=%x\n",
     VAR_6);
   VAR_5->card_8192 = VAR_0;
   break;
  case 128:
   FUNC_1(&VAR_3->dev,
     "Adapter(8192SE) is found - DeviceID=%x\n",
     VAR_6);
   VAR_5->card_8192 = VAR_1;
   break;
  default:
   FUNC_1(&VAR_3->dev,
     "UNKNOWN nic type(%4x:%4x)\n",
     VAR_3->vendor, VAR_3->device);
   VAR_5->card_8192 = VAR_2;
   return 0;
  }
 }

 if (VAR_5->ops->nic_type != VAR_5->card_8192) {
  FUNC_1(&VAR_3->dev,
    "Detect info(%x) and hardware info(%x) not match!\n",
    VAR_5->ops->nic_type, VAR_5->card_8192);
  FUNC_1(&VAR_3->dev,
    "Please select proper driver before install!!!!\n");
  return 0;
 }

 FUNC_0(VAR_3, VAR_4);

 return 1;
}
