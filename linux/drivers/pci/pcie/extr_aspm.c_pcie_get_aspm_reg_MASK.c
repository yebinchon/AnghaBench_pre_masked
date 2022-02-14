
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int ltr_path; } ;
struct aspm_register_info {int support; int latency_encoding_l0s; int latency_encoding_l1; int enabled; int l1ss_cap; int l1ss_ctl1; int l1ss_ctl2; scalar_t__ l1ss_cap_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_12,
         struct aspm_register_info *VAR_13)
{
 u16 VAR_14;
 u32 VAR_15;

 FUNC_2(VAR_12, VAR_0, &VAR_15);
 VAR_13->support = (VAR_15 & VAR_1) >> 10;
 VAR_13->latency_encoding_l0s = (VAR_15 & VAR_2) >> 12;
 VAR_13->latency_encoding_l1 = (VAR_15 & VAR_3) >> 15;
 FUNC_3(VAR_12, VAR_4, &VAR_14);
 VAR_13->enabled = VAR_14 & VAR_5;


 VAR_13->l1ss_cap = VAR_13->l1ss_ctl1 = VAR_13->l1ss_ctl2 = 0;
 VAR_13->l1ss_cap_ptr = FUNC_0(VAR_12, VAR_6);
 if (!VAR_13->l1ss_cap_ptr)
  return;
 FUNC_1(VAR_12, VAR_13->l1ss_cap_ptr + VAR_7,
         &VAR_13->l1ss_cap);
 if (!(VAR_13->l1ss_cap & VAR_9)) {
  VAR_13->l1ss_cap = 0;
  return;
 }






 if (!VAR_12->ltr_path)
  VAR_13->l1ss_cap &= ~VAR_8;

 FUNC_1(VAR_12, VAR_13->l1ss_cap_ptr + VAR_10,
         &VAR_13->l1ss_ctl1);
 FUNC_1(VAR_12, VAR_13->l1ss_cap_ptr + VAR_11,
         &VAR_13->l1ss_ctl2);
}
