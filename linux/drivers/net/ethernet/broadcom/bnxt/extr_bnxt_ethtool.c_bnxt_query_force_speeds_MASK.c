
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwrm_port_phy_qcaps_output {int supported_speeds_force_mode; } ;
struct hwrm_port_phy_qcaps_input {int member_0; } ;
struct bnxt {int hwrm_cmd_lock; struct hwrm_port_phy_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_phy_qcaps_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_port_phy_qcaps_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_2, u16 *VAR_3)
{
 struct hwrm_port_phy_qcaps_output *VAR_4 = VAR_2->hwrm_cmd_resp_addr;
 struct hwrm_port_phy_qcaps_input VAR_5 = {0};
 int VAR_6;

 FUNC_1(VAR_2, &VAR_5, VAR_1, -1, -1);
 FUNC_3(&VAR_2->hwrm_cmd_lock);
 VAR_6 = FUNC_0(VAR_2, &VAR_5, sizeof(VAR_5), VAR_0);
 if (!VAR_6)
  *VAR_3 = FUNC_2(VAR_4->supported_speeds_force_mode);

 FUNC_4(&VAR_2->hwrm_cmd_lock);
 return VAR_6;
}
