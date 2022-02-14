
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_nic {int port_num; scalar_t__ regs; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct pci_nic* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_6)
{
 struct pci_nic *VAR_7 = FUNC_3(VAR_6);
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;

 FUNC_4(VAR_6, VAR_4, &VAR_8);
 FUNC_4(VAR_6, VAR_3, &VAR_9);

 FUNC_5("%s%s\n", VAR_0,
  VAR_7->port_num == 1 ? "" : ", 2-Port");
 FUNC_5("srom 0x%x fpga %d build %u lane# %d max_pl 0x%x mrrs 0x%x\n",
  FUNC_6(VAR_7->regs + VAR_5), FUNC_6(VAR_7->regs + VAR_2) & 0xFFF,
  FUNC_6(VAR_7->regs + VAR_1),
  FUNC_2(VAR_8),
  FUNC_0(VAR_9), FUNC_1(VAR_9));
}
