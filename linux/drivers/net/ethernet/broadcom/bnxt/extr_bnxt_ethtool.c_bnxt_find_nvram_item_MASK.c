
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hwrm_nvm_find_dir_entry_output {int dir_data_length; int dir_item_length; int dir_idx; } ;
struct hwrm_nvm_find_dir_entry_input {int opt_ordinal; void* dir_ext; void* dir_ordinal; void* dir_type; scalar_t__ dir_idx; scalar_t__ enables; int member_0; } ;
struct bnxt {int hwrm_cmd_lock; struct hwrm_nvm_find_dir_entry_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_nvm_find_dir_entry_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_nvm_find_dir_entry_input*,int ,int,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct bnxt* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, u16 VAR_4, u16 VAR_5,
    u16 VAR_6, u16 *VAR_7, u32 *VAR_8,
    u32 *VAR_9)
{
 struct bnxt *VAR_10 = FUNC_7(VAR_3);
 int VAR_11;
 struct hwrm_nvm_find_dir_entry_input VAR_12 = {0};
 struct hwrm_nvm_find_dir_entry_output *VAR_13 = VAR_10->hwrm_cmd_resp_addr;

 FUNC_1(VAR_10, &VAR_12, VAR_1, -1, -1);
 VAR_12.enables = 0;
 VAR_12.dir_idx = 0;
 VAR_12.dir_type = FUNC_2(VAR_4);
 VAR_12.dir_ordinal = FUNC_2(VAR_5);
 VAR_12.dir_ext = FUNC_2(VAR_6);
 VAR_12.opt_ordinal = VAR_2;
 FUNC_5(&VAR_10->hwrm_cmd_lock);
 VAR_11 = FUNC_0(VAR_10, &VAR_12, sizeof(VAR_12), VAR_0);
 if (VAR_11 == 0) {
  if (VAR_7)
   *VAR_7 = FUNC_3(VAR_13->dir_idx);
  if (VAR_8)
   *VAR_8 = FUNC_4(VAR_13->dir_item_length);
  if (VAR_9)
   *VAR_9 = FUNC_4(VAR_13->dir_data_length);
 }
 FUNC_6(&VAR_10->hwrm_cmd_lock);
 return VAR_11;
}
