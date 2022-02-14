
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int vendor; int device; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->bus->self;
 u32 VAR_4;

 if (!VAR_3)
  return;

 if (VAR_3->vendor != 0x8086 || VAR_3->device != 0x537c)
  return;






 FUNC_0(VAR_3, 0x40, &VAR_4);
 VAR_4 &= ~0x00040000;
 FUNC_2(VAR_3, 0x40, VAR_4);
 FUNC_3(VAR_3, 0x50, (5 << 10) | 0x3ff);
 FUNC_3(VAR_3, 0x52,
         (0x7 << 13) |
         (0x7 << 10) |
         (0x7 << 7) |
         (0x7 << 4) |
         (0xf << 0));


 FUNC_1(VAR_3, VAR_0, 0x08);




 FUNC_1(VAR_3, VAR_1, 0xff);
}
