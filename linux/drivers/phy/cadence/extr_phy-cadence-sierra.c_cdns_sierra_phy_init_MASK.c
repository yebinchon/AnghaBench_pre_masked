
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct cdns_sierra_phy {scalar_t__ base; TYPE_2__* init_data; } ;
struct cdns_sierra_inst {scalar_t__ phy_type; int num_lanes; int mlane; } ;
struct cdns_reg_pairs {scalar_t__ off; int val; } ;
struct TYPE_4__ {int pcie_regs; int usb_regs; struct cdns_reg_pairs* usb_vals; struct cdns_reg_pairs* pcie_vals; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cdns_sierra_phy* FUNC_0 (int ) ;
 struct cdns_sierra_inst* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct phy *VAR_2)
{
 struct cdns_sierra_inst *VAR_3 = FUNC_1(VAR_2);
 struct cdns_sierra_phy *VAR_4 = FUNC_0(VAR_2->dev.parent);
 int VAR_5, VAR_6;
 struct cdns_reg_pairs *VAR_7;
 u32 VAR_8;

 if (VAR_3->phy_type == VAR_0) {
  VAR_8 = VAR_4->init_data->pcie_regs;
  VAR_7 = VAR_4->init_data->pcie_vals;
 } else if (VAR_3->phy_type == VAR_1) {
  VAR_8 = VAR_4->init_data->usb_regs;
  VAR_7 = VAR_4->init_data->usb_vals;
 } else {
  return;
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->num_lanes; VAR_5++)
  for (VAR_6 = 0; VAR_6 < VAR_8 ; VAR_6++)
   FUNC_2(VAR_7[VAR_6].val, VAR_4->base +
    VAR_7[VAR_6].off + (VAR_5 + VAR_3->mlane) * 0x800);
}
