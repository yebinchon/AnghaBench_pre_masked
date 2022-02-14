
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_port_phy_cfg_input {int enables; int lpbk; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_1 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_6, bool VAR_7, bool VAR_8)
{
 struct hwrm_port_phy_cfg_input VAR_9 = {0};

 FUNC_1(VAR_6, &VAR_9, VAR_1, -1, -1);

 if (VAR_7) {
  FUNC_0(VAR_6, &VAR_9);
  if (VAR_8)
   VAR_9.lpbk = VAR_3;
  else
   VAR_9.lpbk = VAR_4;
 } else {
  VAR_9.lpbk = VAR_5;
 }
 VAR_9.enables = FUNC_2(VAR_2);
 return FUNC_3(VAR_6, &VAR_9, sizeof(VAR_9), VAR_0);
}
