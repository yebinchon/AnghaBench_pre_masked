
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct be_cmd_get_if_info_resp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,int ,struct be_cmd_get_if_info_resp**) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_cmd_get_if_info_resp*) ;

void FUNC_4(struct beiscsi_hba *VAR_2)
{
 struct be_cmd_get_if_info_resp *VAR_3;

 if (!FUNC_0(VAR_2, VAR_0, &VAR_3)) {
  FUNC_1(VAR_2);
  FUNC_3(VAR_3);
 }

 if (!FUNC_0(VAR_2, VAR_1, &VAR_3)) {
  FUNC_2(VAR_2);
  FUNC_3(VAR_3);
 }
}
