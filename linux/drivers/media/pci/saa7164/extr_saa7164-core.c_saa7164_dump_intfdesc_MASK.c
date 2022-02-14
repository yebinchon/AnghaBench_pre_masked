
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmComResInterfaceDescr {int dummy; } ;
struct TYPE_2__ {int BARLocation; int bDebugInterruptId; int bInterruptId; int bBaseInterface; int bInterfaceId; int bInterfaceType; int bFlags; int bDescriptorSubtype; int bDescriptorType; int bLength; } ;
struct saa7164_dev {TYPE_1__ intfdesc; } ;


 int FUNC_0 (int,char*,TYPE_1__*,...) ;

__attribute__((used)) static void FUNC_1(struct saa7164_dev *VAR_0)
{
 FUNC_0(1, "@0x%p intfdesc sizeof(struct tmComResInterfaceDescr) = %d bytes\n",
  &VAR_0->intfdesc, (u32)sizeof(struct tmComResInterfaceDescr));

 FUNC_0(1, " .bLength = 0x%x\n", VAR_0->intfdesc.bLength);
 FUNC_0(1, " .bDescriptorType = 0x%x\n", VAR_0->intfdesc.bDescriptorType);
 FUNC_0(1, " .bDescriptorSubtype = 0x%x\n",
  VAR_0->intfdesc.bDescriptorSubtype);

 FUNC_0(1, " .bFlags = 0x%x\n", VAR_0->intfdesc.bFlags);
 FUNC_0(1, " .bInterfaceType = 0x%x\n", VAR_0->intfdesc.bInterfaceType);
 FUNC_0(1, " .bInterfaceId = 0x%x\n", VAR_0->intfdesc.bInterfaceId);
 FUNC_0(1, " .bBaseInterface = 0x%x\n", VAR_0->intfdesc.bBaseInterface);
 FUNC_0(1, " .bInterruptId = 0x%x\n", VAR_0->intfdesc.bInterruptId);
 FUNC_0(1, " .bDebugInterruptId = 0x%x\n",
  VAR_0->intfdesc.bDebugInterruptId);

 FUNC_0(1, " .BARLocation = 0x%x\n", VAR_0->intfdesc.BARLocation);
}
