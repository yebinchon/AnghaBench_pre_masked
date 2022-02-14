
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int up_cap_ptr; int dw_cap_ptr; int ctl1; int ctl2; } ;
struct pcie_link_state {int aspm_enabled; TYPE_1__ l1ss; struct pci_dev* pdev; struct pci_dev* downstream; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_17 ;
 int FUNC_0 (struct pci_dev*,int,int,int) ;
 int FUNC_1 (struct pci_dev*,int,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pcie_link_state *VAR_18, u32 VAR_19)
{
 u32 VAR_20, VAR_21;
 struct pci_dev *VAR_22 = VAR_18->downstream, *VAR_23 = VAR_18->pdev;
 u32 VAR_24 = VAR_18->l1ss.up_cap_ptr;
 u32 VAR_25 = VAR_18->l1ss.dw_cap_ptr;

 VAR_21 = (VAR_18->aspm_enabled ^ VAR_19) & VAR_19;
 FUNC_0(VAR_22, VAR_25 + VAR_8,
    VAR_12, 0);
 FUNC_0(VAR_23, VAR_24 + VAR_8,
    VAR_12, 0);




 if (VAR_21 & (VAR_0 | VAR_2)) {
  FUNC_2(VAR_22, VAR_5,
         VAR_6, 0);
  FUNC_2(VAR_23, VAR_5,
         VAR_6, 0);
 }

 if (VAR_21 & VAR_3) {


  FUNC_1(VAR_23, VAR_24 + VAR_17,
           VAR_18->l1ss.ctl2);
  FUNC_1(VAR_22, VAR_25 + VAR_17,
           VAR_18->l1ss.ctl2);


  FUNC_0(VAR_23, VAR_24 + VAR_8,
     VAR_11,
     VAR_18->l1ss.ctl1);


  FUNC_0(VAR_23, VAR_24 + VAR_8,
     VAR_14 |
     VAR_13,
     VAR_18->l1ss.ctl1);
  FUNC_0(VAR_22, VAR_25 + VAR_8,
     VAR_14 |
     VAR_13,
     VAR_18->l1ss.ctl1);
 }

 VAR_20 = 0;
 if (VAR_19 & VAR_0)
  VAR_20 |= VAR_9;
 if (VAR_19 & VAR_2)
  VAR_20 |= VAR_10;
 if (VAR_19 & VAR_1)
  VAR_20 |= VAR_15;
 if (VAR_19 & VAR_4)
  VAR_20 |= VAR_16;


 FUNC_0(VAR_23, VAR_24 + VAR_8,
    VAR_7, VAR_20);
 FUNC_0(VAR_22, VAR_25 + VAR_8,
    VAR_7, VAR_20);
}
