
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 if (VAR_2 == VAR_1 ||
     VAR_2 == VAR_0)
  return;






 VAR_4 = FUNC_1(VAR_3, 0x48, &VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_3, "Error attempting to read the read completion coalescing register\n");
  return;
 }

 if (!(VAR_5 & (1 << 10)))
  return;

 VAR_5 &= ~(1 << 10);

 VAR_4 = FUNC_2(VAR_3, 0x48, VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_3, "Error attempting to write the read completion coalescing register\n");
  return;
 }

 FUNC_3("Read completion coalescing disabled due to hardware erratum relating to 256B MPS\n");
}
