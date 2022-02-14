
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int pcie_cap; int pcie_flags_reg; int pcie_mpss; int saved_cap_space; int cfg_size; } ;
struct TYPE_2__ {int cap_nr; int size; int * data; scalar_t__ cap_extended; } ;
struct pci_cap_saved_state {int next; TYPE_1__ cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int *) ;
 struct pci_cap_saved_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int,int*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_17)
{
 int VAR_18, VAR_19 = 0;
 u8 VAR_20;
 u16 VAR_21, *VAR_22;
 struct pci_cap_saved_state *VAR_23;


 if (VAR_17->pcie_cap || FUNC_2(VAR_17, VAR_2))
  return;


 VAR_18 = FUNC_2(VAR_17, VAR_3);
 if (!VAR_18)
  return;





 FUNC_4(VAR_17, VAR_18 + 1, &VAR_20);
 if (VAR_20)
  return;
 VAR_18 = 0x50;
 FUNC_6(VAR_17, VAR_18, &VAR_21);
 if (VAR_21 == (0x0000 | VAR_2)) {
  u32 VAR_24;



  int VAR_25 = 7 * sizeof(u16);

  VAR_17->pcie_cap = VAR_18;
  FUNC_6(VAR_17, VAR_18 + VAR_10, &VAR_21);
  VAR_17->pcie_flags_reg = VAR_21;
  FUNC_6(VAR_17, VAR_18 + VAR_6, &VAR_21);
  VAR_17->pcie_mpss = VAR_21 & VAR_7;

  VAR_17->cfg_size = VAR_4;
  if (FUNC_5(VAR_17, VAR_5, &VAR_24) !=
      VAR_1 || (VAR_24 == 0xffffffff))
   VAR_17->cfg_size = VAR_5;

  if (FUNC_3(VAR_17, VAR_2))
   return;


  VAR_23 = FUNC_1(sizeof(*VAR_23) + VAR_25, VAR_0);
  if (!VAR_23)
   return;

  VAR_23->cap.cap_nr = VAR_2;
  VAR_23->cap.cap_extended = 0;
  VAR_23->cap.size = VAR_25;
  VAR_22 = (u16 *)&VAR_23->cap.data[0];
  FUNC_7(VAR_17, VAR_8, &VAR_22[VAR_19++]);
  FUNC_7(VAR_17, VAR_11, &VAR_22[VAR_19++]);
  FUNC_7(VAR_17, VAR_15, &VAR_22[VAR_19++]);
  FUNC_7(VAR_17, VAR_13, &VAR_22[VAR_19++]);
  FUNC_7(VAR_17, VAR_9, &VAR_22[VAR_19++]);
  FUNC_7(VAR_17, VAR_12, &VAR_22[VAR_19++]);
  FUNC_7(VAR_17, VAR_16, &VAR_22[VAR_19++]);
  FUNC_0(&VAR_23->next, &VAR_17->saved_cap_space);
 }
}
