
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
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int,int ,int ,int*,int,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,int,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i40e_asq_cmd_details*,int ,int) ;

__attribute__((used)) static i40e_status FUNC_7(struct i40e_hw *VAR_2,
      struct i40e_nvm_access *VAR_3,
      u8 *VAR_4, int *VAR_5)
{
 i40e_status VAR_6 = 0;
 struct i40e_asq_cmd_details VAR_7;
 u8 VAR_8, VAR_9;
 u8 VAR_10;
 bool VAR_11;

 VAR_9 = FUNC_5(VAR_3->config);
 VAR_8 = FUNC_3(VAR_3->config);
 VAR_11 = (VAR_9 & VAR_1);
 VAR_10 = FUNC_4(VAR_3->config);

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.wb_desc = &VAR_2->nvm_wb_desc;

 VAR_6 = FUNC_1(VAR_2, VAR_8, VAR_3->offset,
        (u16)VAR_3->data_size, VAR_4, VAR_11,
        VAR_10, &VAR_7);
 if (VAR_6) {
  FUNC_2(VAR_2, VAR_0,
      "i40e_nvmupd_nvm_write mod 0x%x off 0x%x len 0x%x\n",
      VAR_8, VAR_3->offset, VAR_3->data_size);
  FUNC_2(VAR_2, VAR_0,
      "i40e_nvmupd_nvm_write status %d aq %d\n",
      VAR_6, VAR_2->aq.asq_last_status);
  *VAR_5 = FUNC_0(VAR_6, VAR_2->aq.asq_last_status);
 }

 return VAR_6;
}
