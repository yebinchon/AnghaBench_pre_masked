
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int io_window_1k; } ;


 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 u16 VAR_1;

 FUNC_1(VAR_0, 0x40, &VAR_1);

 if (VAR_1 & 0x200) {
  FUNC_0(VAR_0, "Enable I/O Space to 1KB granularity\n");
  VAR_0->io_window_1k = 1;
 }
}
