
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct plx_pci_card {scalar_t__ conf_addr; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;
 struct plx_pci_card* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct plx_pci_card *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_4->conf_addr + VAR_0);
 VAR_5 |= VAR_2;
 FUNC_1(VAR_5, VAR_4->conf_addr + VAR_0);
 FUNC_4(100);
 VAR_5 ^= VAR_2;
 FUNC_1(VAR_5, VAR_4->conf_addr + VAR_0);


 VAR_5 |= VAR_1;
 FUNC_1(VAR_5, VAR_4->conf_addr + VAR_0);






 FUNC_2(10);

 VAR_5 ^= VAR_1;
 FUNC_1(VAR_5, VAR_4->conf_addr + VAR_0);
}
