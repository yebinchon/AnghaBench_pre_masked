
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct hwrm_nvm_erase_dir_entry_input {int dir_idx; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_nvm_erase_dir_entry_input*,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_nvm_erase_dir_entry_input*,int,int ) ;
 struct bnxt* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, u8 VAR_3)
{
 struct bnxt *VAR_4 = FUNC_3(VAR_2);
 struct hwrm_nvm_erase_dir_entry_input VAR_5 = {0};

 FUNC_0(VAR_4, &VAR_5, VAR_1, -1, -1);
 VAR_5.dir_idx = FUNC_1(VAR_3);
 return FUNC_2(VAR_4, &VAR_5, sizeof(VAR_5), VAR_0);
}
