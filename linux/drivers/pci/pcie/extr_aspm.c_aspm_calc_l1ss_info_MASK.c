
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctl1; int ctl2; int dw_cap_ptr; int up_cap_ptr; } ;
struct pcie_link_state {int aspm_support; TYPE_1__ l1ss; int downstream; int pdev; } ;
struct aspm_register_info {int l1ss_cap; int l1ss_cap_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int*,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct pcie_link_state *VAR_4,
    struct aspm_register_info *VAR_5,
    struct aspm_register_info *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_4->l1ss.up_cap_ptr = VAR_5->l1ss_cap_ptr;
 VAR_4->l1ss.dw_cap_ptr = VAR_6->l1ss_cap_ptr;
 VAR_4->l1ss.ctl1 = VAR_4->l1ss.ctl2 = 0;

 if (!(VAR_4->aspm_support & VAR_0))
  return;


 VAR_7 = (VAR_5->l1ss_cap & VAR_1) >> 8;
 VAR_8 = (VAR_6->l1ss_cap & VAR_1) >> 8;
 VAR_11 = FUNC_2(VAR_7, VAR_8);


 VAR_7 = (VAR_5->l1ss_cap & VAR_3) >> 19;
 VAR_9 = (VAR_5->l1ss_cap & VAR_2) >> 16;
 VAR_8 = (VAR_6->l1ss_cap & VAR_3) >> 19;
 VAR_10 = (VAR_6->l1ss_cap & VAR_2) >> 16;

 if (FUNC_0(VAR_4->pdev, VAR_9, VAR_7) >
     FUNC_0(VAR_4->downstream, VAR_10, VAR_8)) {
  VAR_4->l1ss.ctl2 |= VAR_9 | (VAR_7 << 3);
  VAR_12 = FUNC_0(VAR_4->pdev, VAR_9, VAR_7);
 } else {
  VAR_4->l1ss.ctl2 |= VAR_10 | (VAR_8 << 3);
  VAR_12 = FUNC_0(VAR_4->downstream, VAR_10, VAR_8);
 }
 VAR_13 = 2 + 4 + VAR_11 + VAR_12;
 FUNC_1(VAR_13, &VAR_14, &VAR_15);
 VAR_4->l1ss.ctl1 |= VAR_11 << 8 | VAR_14 << 29 | VAR_15 << 16;
}
