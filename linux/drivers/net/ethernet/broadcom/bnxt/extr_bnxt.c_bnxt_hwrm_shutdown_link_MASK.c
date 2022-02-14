
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_port_phy_cfg_input {int flags; int member_0; } ;
struct bnxt {int pdev; } ;
typedef int req ;


 int FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_3)
{
 struct hwrm_port_phy_cfg_input VAR_4 = {0};

 if (!FUNC_0(VAR_3))
  return 0;

 if (FUNC_4(VAR_3->pdev))
  return 0;

 FUNC_1(VAR_3, &VAR_4, VAR_1, -1, -1);
 VAR_4.flags = FUNC_2(VAR_2);
 return FUNC_3(VAR_3, &VAR_4, sizeof(VAR_4), VAR_0);
}
