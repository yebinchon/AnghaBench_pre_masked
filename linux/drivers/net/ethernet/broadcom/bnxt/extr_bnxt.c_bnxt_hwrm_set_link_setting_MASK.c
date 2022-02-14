
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_port_phy_cfg_input {int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int ,int,int) ;
 int FUNC_1 (struct bnxt*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_2 (struct bnxt*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_3 (struct bnxt*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_4 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int,int ) ;

int FUNC_5(struct bnxt *VAR_2, bool VAR_3, bool VAR_4)
{
 struct hwrm_port_phy_cfg_input VAR_5 = {0};

 FUNC_0(VAR_2, &VAR_5, VAR_1, -1, -1);
 if (VAR_3)
  FUNC_3(VAR_2, &VAR_5);

 FUNC_2(VAR_2, &VAR_5);

 if (VAR_4)
  FUNC_1(VAR_2, &VAR_5);
 return FUNC_4(VAR_2, &VAR_5, sizeof(VAR_5), VAR_0);
}
