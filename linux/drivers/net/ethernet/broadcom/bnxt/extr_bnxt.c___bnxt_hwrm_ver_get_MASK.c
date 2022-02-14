
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_ver_get_input {int hwrm_intf_upd; int hwrm_intf_min; int hwrm_intf_maj; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,struct hwrm_ver_get_input*,int ,int,int) ;
 int FUNC_1 (struct bnxt*,struct hwrm_ver_get_input*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_5, bool VAR_6)
{
 struct hwrm_ver_get_input VAR_7 = {0};
 int VAR_8;

 FUNC_0(VAR_5, &VAR_7, VAR_4, -1, -1);
 VAR_7.hwrm_intf_maj = VAR_1;
 VAR_7.hwrm_intf_min = VAR_2;
 VAR_7.hwrm_intf_upd = VAR_3;

 VAR_8 = FUNC_1(VAR_5, &VAR_7, sizeof(VAR_7), VAR_0,
       VAR_6);
 return VAR_8;
}
