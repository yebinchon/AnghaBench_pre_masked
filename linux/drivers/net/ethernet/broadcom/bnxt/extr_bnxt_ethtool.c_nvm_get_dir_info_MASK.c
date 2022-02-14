
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct hwrm_nvm_get_dir_info_output {int entry_length; int entries; } ;
struct hwrm_nvm_get_dir_info_input {int member_0; } ;
struct bnxt {int hwrm_cmd_lock; struct hwrm_nvm_get_dir_info_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_nvm_get_dir_info_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_nvm_get_dir_info_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct bnxt* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct bnxt *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;
 struct hwrm_nvm_get_dir_info_input VAR_7 = {0};
 struct hwrm_nvm_get_dir_info_output *VAR_8 = VAR_5->hwrm_cmd_resp_addr;

 FUNC_1(VAR_5, &VAR_7, VAR_1, -1, -1);

 FUNC_3(&VAR_5->hwrm_cmd_lock);
 VAR_6 = FUNC_0(VAR_5, &VAR_7, sizeof(VAR_7), VAR_0);
 if (!VAR_6) {
  *VAR_3 = FUNC_2(VAR_8->entries);
  *VAR_4 = FUNC_2(VAR_8->entry_length);
 }
 FUNC_4(&VAR_5->hwrm_cmd_lock);
 return VAR_6;
}
