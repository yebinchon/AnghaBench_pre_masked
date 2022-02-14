
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int bus; int devfn; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pci_dev*,int,int,int) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(FUNC_1(VAR_3->devfn), 0);
 struct pci_dev *VAR_5;
 u32 VAR_6;

 FUNC_2(VAR_3, 0x48,
  ~0x000000FF, 0x0000003F);

 FUNC_5(VAR_3, 0x48, &VAR_6);
 if (VAR_6 & 0x80000000)
  return 0;

 VAR_5 = FUNC_4(VAR_3->bus, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->vendor == VAR_2
     && VAR_5->device == VAR_1) {
  FUNC_2(VAR_5, 0x8C,
   ~0x00F00000, 0x00100000);
  FUNC_2(VAR_5, 0xB0,
   ~0x08000000, 0x08000000);
 }

 FUNC_2(VAR_5, 0x8C,
  ~0x00000F00, 0x00000200);
 FUNC_2(VAR_5, 0x90,
  ~0x00060000, 0x00040000);

 FUNC_3(VAR_5);

 return 0;
}
