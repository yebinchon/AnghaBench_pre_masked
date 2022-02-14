
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dummy; } ;
struct cavium_ptp {scalar_t__ reg_base; int ptp_clock; } ;


 scalar_t__ FUNC_0 (struct cavium_ptp*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cavium_ptp* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 struct cavium_ptp *VAR_3 = FUNC_1(VAR_2);
 u64 VAR_4;

 if (FUNC_0(VAR_3))
  return;

 FUNC_2(VAR_3->ptp_clock);

 VAR_4 = FUNC_3(VAR_3->reg_base + VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_4(VAR_4, VAR_3->reg_base + VAR_0);
}
