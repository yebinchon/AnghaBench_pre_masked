
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_nvm_access {int dummy; } ;
struct i40e_hw {int nvmupd_state; } ;
typedef int i40e_status ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct i40e_hw*,int ,char*,int ) ;
 int * VAR_4 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_2 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_3 (struct i40e_hw*) ;

__attribute__((used)) static i40e_status FUNC_4(struct i40e_hw *VAR_5,
          struct i40e_nvm_access *VAR_6,
          u8 *VAR_7, int *VAR_8)
{
 i40e_status VAR_9 = 0;
 enum i40e_nvmupd_cmd VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_8);

 switch (VAR_10) {
 case 128:
 case 130:
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
  break;

 case 129:
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_3(VAR_5);
  VAR_5->nvmupd_state = VAR_3;
  break;

 default:
  FUNC_0(VAR_5, VAR_1,
      "NVMUPD: bad cmd %s in reading state.\n",
      VAR_4[VAR_10]);
  VAR_9 = VAR_2;
  *VAR_8 = -VAR_0;
  break;
 }
 return VAR_9;
}
