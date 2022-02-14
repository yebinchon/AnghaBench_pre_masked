
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct i40e_nvm_access {scalar_t__ data_size; int offset; int config; } ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; int nvm_wb_desc; } ;
struct i40e_asq_cmd_details {int * wb_desc; } ;
typedef scalar_t__ i40e_status ;
typedef int cmd_details ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,scalar_t__,int ,int ,scalar_t__*,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,scalar_t__,int ,...) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct i40e_asq_cmd_details*,int ,int) ;

__attribute__((used)) static i40e_status FUNC_6(struct i40e_hw *VAR_3,
     struct i40e_nvm_access *VAR_4,
     u8 *VAR_5, int *VAR_6)
{
 struct i40e_asq_cmd_details VAR_7;
 i40e_status VAR_8;
 u8 VAR_9, VAR_10;
 bool VAR_11;

 VAR_10 = FUNC_4(VAR_4->config);
 VAR_9 = FUNC_3(VAR_4->config);
 VAR_11 = (VAR_10 == VAR_1) || (VAR_10 == VAR_2);

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.wb_desc = &VAR_3->nvm_wb_desc;

 VAR_8 = FUNC_1(VAR_3, VAR_9, VAR_4->offset, (u16)VAR_4->data_size,
      VAR_5, VAR_11, &VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_3, VAR_0,
      "i40e_nvmupd_nvm_read mod 0x%x  off 0x%x  len 0x%x\n",
      VAR_9, VAR_4->offset, VAR_4->data_size);
  FUNC_2(VAR_3, VAR_0,
      "i40e_nvmupd_nvm_read status %d aq %d\n",
      VAR_8, VAR_3->aq.asq_last_status);
  *VAR_6 = FUNC_0(VAR_8, VAR_3->aq.asq_last_status);
 }

 return VAR_8;
}
