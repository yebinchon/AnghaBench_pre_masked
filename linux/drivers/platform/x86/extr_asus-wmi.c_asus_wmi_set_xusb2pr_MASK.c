
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct asus_wmi {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* quirks; } ;
struct TYPE_3__ {int xusb2pr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct asus_wmi *VAR_3)
{
 struct pci_dev *VAR_4;
 u32 VAR_5;
 u32 VAR_6 = VAR_3->driver->quirks->xusb2pr;

 VAR_4 = FUNC_1(VAR_1,
   VAR_0,
   ((void*)0));

 if (!VAR_4)
  return;

 FUNC_2(VAR_4, VAR_2,
    &VAR_5);

 FUNC_3(VAR_4, VAR_2,
    FUNC_0(VAR_6));

 FUNC_4("set USB_INTEL_XUSB2PR old: 0x%04x, new: 0x%04x\n",
   VAR_5, VAR_6);
}
