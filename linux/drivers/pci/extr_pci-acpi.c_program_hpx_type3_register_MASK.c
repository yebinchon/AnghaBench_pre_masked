
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct hpx_type3 {int device_type; int function_type; int config_space_location; int match_mask_and; int match_value; int reg_mask_and; int reg_mask_or; scalar_t__ reg_offset; scalar_t__ match_offset; int pci_exp_cap_ver; int pci_exp_cap_id; } ;







 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,char*,scalar_t__,int,int) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_8 (struct pci_dev*,char*) ;
 int FUNC_9 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0,
           const struct hpx_type3 *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;
 u16 VAR_6;

 if (!(FUNC_2(VAR_0) & VAR_1->device_type))
  return;

 if (!(FUNC_3(VAR_0) & VAR_1->function_type))
  return;

 switch (VAR_1->config_space_location) {
 case 131:
  VAR_6 = 0;
  break;
 case 130:
  VAR_6 = FUNC_5(VAR_0, VAR_1->pci_exp_cap_id);
  if (VAR_6 == 0)
   return;

  break;
 case 129:
  VAR_6 = FUNC_6(VAR_0, VAR_1->pci_exp_cap_id);
  if (VAR_6 == 0)
   return;

  FUNC_7(VAR_0, VAR_6, &VAR_4);
  if (!FUNC_1(FUNC_0(VAR_4),
       VAR_1->pci_exp_cap_ver))
   return;

  break;
 case 128:
 case 132:
 default:
  FUNC_8(VAR_0, "Encountered _HPX type 3 with unsupported config space location");
  return;
 }

 FUNC_7(VAR_0, VAR_6 + VAR_1->match_offset, &VAR_2);

 if ((VAR_2 & VAR_1->match_mask_and) != VAR_1->match_value)
  return;

 FUNC_7(VAR_0, VAR_6 + VAR_1->reg_offset, &VAR_3);
 VAR_5 = VAR_3;
 VAR_3 &= VAR_1->reg_mask_and;
 VAR_3 |= VAR_1->reg_mask_or;

 if (VAR_5 == VAR_3)
  return;

 FUNC_9(VAR_0, VAR_6 + VAR_1->reg_offset, VAR_3);

 FUNC_4(VAR_0, "Applied _HPX3 at [0x%x]: 0x%08x -> 0x%08x",
  VAR_6, VAR_5, VAR_3);
}
