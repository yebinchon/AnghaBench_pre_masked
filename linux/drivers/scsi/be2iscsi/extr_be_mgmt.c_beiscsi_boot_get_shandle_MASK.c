
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_get_boot_target_resp {unsigned int boot_session_handle; int boot_session_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct beiscsi_hba*,int ) ;
 int FUNC_1 (struct beiscsi_hba*,int ,char*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_3 (struct beiscsi_hba*,unsigned int,struct be_mcc_wrb**,int *) ;
 struct be_cmd_get_boot_target_resp* FUNC_4 (struct be_mcc_wrb*) ;

int FUNC_5(struct beiscsi_hba *VAR_8, unsigned int *VAR_9)
{
 struct be_cmd_get_boot_target_resp *VAR_10;
 struct be_mcc_wrb *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 *VAR_9 = VAR_2;

 VAR_12 = FUNC_0(VAR_8, 0);
 if (!VAR_12) {
  FUNC_2(VAR_8, VAR_6,
       VAR_0 | VAR_1,
       "BG_%d : Getting Boot Target Info Failed\n");
  return -VAR_3;
 }

 VAR_13 = FUNC_3(VAR_8, VAR_12, &VAR_11, ((void*)0));
 if (VAR_13) {
  FUNC_2(VAR_8, VAR_6,
       VAR_1 | VAR_0,
       "BG_%d : MBX CMD get_boot_target Failed\n");
  return -VAR_4;
 }

 VAR_10 = FUNC_4(VAR_11);

 if (!VAR_10->boot_session_count) {
  FUNC_1(VAR_8, VAR_7,
         "BG_%d : No boot targets configured\n");
  return -VAR_5;
 }


 *VAR_9 = VAR_10->boot_session_handle;
 return 1;
}
