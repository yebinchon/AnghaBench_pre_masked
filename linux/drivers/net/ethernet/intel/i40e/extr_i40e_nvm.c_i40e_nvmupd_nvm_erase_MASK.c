
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_nvm_access {scalar_t__ data_size; int offset; int config; } ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; int nvm_wb_desc; } ;
struct i40e_asq_cmd_details {int * wb_desc; } ;
typedef scalar_t__ i40e_status ;
typedef int cmd_details ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int,int ,int ,int,struct i40e_asq_cmd_details*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,int,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i40e_asq_cmd_details*,int ,int) ;

__attribute__((used)) static i40e_status FUNC_6(struct i40e_hw *VAR_2,
      struct i40e_nvm_access *VAR_3,
      int *VAR_4)
{
 i40e_status VAR_5 = 0;
 struct i40e_asq_cmd_details VAR_6;
 u8 VAR_7, VAR_8;
 bool VAR_9;

 VAR_8 = FUNC_4(VAR_3->config);
 VAR_7 = FUNC_3(VAR_3->config);
 VAR_9 = (VAR_8 & VAR_1);

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.wb_desc = &VAR_2->nvm_wb_desc;

 VAR_5 = FUNC_0(VAR_2, VAR_7, VAR_3->offset, (u16)VAR_3->data_size,
       VAR_9, &VAR_6);
 if (VAR_5) {
  FUNC_2(VAR_2, VAR_0,
      "i40e_nvmupd_nvm_erase mod 0x%x  off 0x%x len 0x%x\n",
      VAR_7, VAR_3->offset, VAR_3->data_size);
  FUNC_2(VAR_2, VAR_0,
      "i40e_nvmupd_nvm_erase status %d aq %d\n",
      VAR_5, VAR_2->aq.asq_last_status);
  *VAR_4 = FUNC_1(VAR_5, VAR_2->aq.asq_last_status);
 }

 return VAR_5;
}
