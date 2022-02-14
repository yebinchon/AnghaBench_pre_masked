
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hwrm_port_phy_qcfg_output {int phy_vendor_partnumber; } ;
struct bnxt_link_info {int module_status; struct hwrm_port_phy_qcfg_output phy_qcfg_resp; } ;
struct TYPE_2__ {int port_id; } ;
struct bnxt {int hwrm_spec_code; int dev; TYPE_1__ pf; struct bnxt_link_info link_info; } ;





 scalar_t__ FUNC_0 (struct bnxt*,int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_0)
{
 struct bnxt_link_info *VAR_1 = &VAR_0->link_info;
 struct hwrm_port_phy_qcfg_output *VAR_2 = &VAR_1->phy_qcfg_resp;
 u8 VAR_3;

 if (FUNC_0(VAR_0, 1))
  return;

 VAR_3 = VAR_1->module_status;
 switch (VAR_3) {
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_0->dev, "Unqualified SFP+ module detected on port %d\n",
       VAR_0->pf.port_id);
  if (VAR_0->hwrm_spec_code >= 0x10201) {
   FUNC_1(VAR_0->dev, "Module part number %s\n",
        VAR_2->phy_vendor_partnumber);
  }
  if (VAR_3 == 130)
   FUNC_1(VAR_0->dev, "TX is disabled\n");
  if (VAR_3 == 129)
   FUNC_1(VAR_0->dev, "SFP+ module is shutdown\n");
 }
}
