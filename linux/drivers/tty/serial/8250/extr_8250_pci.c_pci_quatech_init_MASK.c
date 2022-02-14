
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int device; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0)
{
 if (FUNC_2(VAR_0->device)) {
  unsigned long VAR_1 = FUNC_3(VAR_0, 0);
  if (VAR_1) {
   u32 VAR_2;

   FUNC_1(FUNC_0(VAR_1 + 0x38) | 0x00002000, VAR_1 + 0x38);
   VAR_2 = FUNC_0(VAR_1 + 0x3c);
   FUNC_1(VAR_2 | 0x01000000, VAR_1 + 0x3c);
   FUNC_1(VAR_2 &= ~0x01000000, VAR_1 + 0x3c);
  }
 }
 return 0;
}
