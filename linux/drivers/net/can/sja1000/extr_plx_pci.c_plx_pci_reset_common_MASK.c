
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct plx_pci_card {scalar_t__ conf_addr; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct plx_pci_card* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 struct plx_pci_card *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->conf_addr + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_4, VAR_3->conf_addr + VAR_0);
 FUNC_3(100);
 VAR_4 ^= VAR_1;
 FUNC_1(VAR_4, VAR_3->conf_addr + VAR_0);
}
