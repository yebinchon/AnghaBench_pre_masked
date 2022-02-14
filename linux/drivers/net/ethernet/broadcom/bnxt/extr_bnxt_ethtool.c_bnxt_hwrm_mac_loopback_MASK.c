
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_port_mac_cfg_input {int lpbk; int enables; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_mac_cfg_input*,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_port_mac_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_5, bool VAR_6)
{
 struct hwrm_port_mac_cfg_input VAR_7 = {0};

 FUNC_0(VAR_5, &VAR_7, VAR_1, -1, -1);

 VAR_7.enables = FUNC_1(VAR_2);
 if (VAR_6)
  VAR_7.lpbk = VAR_3;
 else
  VAR_7.lpbk = VAR_4;
 return FUNC_2(VAR_5, &VAR_7, sizeof(VAR_7), VAR_0);
}
