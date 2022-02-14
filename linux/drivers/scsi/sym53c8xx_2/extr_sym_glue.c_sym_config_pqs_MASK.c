
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sym_device {int host_id; } ;
struct pci_dev {int vendor; int device; int bus; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0, struct sym_device *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  struct pci_dev *VAR_4 = FUNC_1(VAR_0->bus, VAR_2);

  if (!VAR_4 || VAR_4->vendor != 0x101a || VAR_4->device == 0x0009) {
   FUNC_0(VAR_4);
   continue;
  }


  FUNC_2(VAR_4, 0x44, &VAR_3);
  if ((VAR_3 & 0x2) == 0) {
   VAR_3 |= 0x2;
   FUNC_3(VAR_4, 0x44, VAR_3);
  }


  FUNC_2(VAR_4, 0x45, &VAR_3);
  if ((VAR_3 & 0x4) == 0) {
   VAR_3 |= 0x4;
   FUNC_3(VAR_4, 0x45, VAR_3);
  }

  FUNC_0(VAR_4);
  break;
 }

 FUNC_2(VAR_0, 0x84, &VAR_3);
 VAR_1->host_id = VAR_3;
}
