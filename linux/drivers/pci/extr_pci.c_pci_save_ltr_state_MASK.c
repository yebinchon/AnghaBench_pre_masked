
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct pci_cap_saved_state {TYPE_1__ cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 struct pci_cap_saved_state* FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 int VAR_4;
 struct pci_cap_saved_state *VAR_5;
 u16 *VAR_6;

 if (!FUNC_3(VAR_3))
  return;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_5) {
  FUNC_0(VAR_3, "no suspend buffer for LTR; ASPM issues possible after resume\n");
  return;
 }

 VAR_6 = (u16 *)&VAR_5->cap.data[0];
 FUNC_4(VAR_3, VAR_4 + VAR_2, VAR_6++);
 FUNC_4(VAR_3, VAR_4 + VAR_1, VAR_6++);
}
