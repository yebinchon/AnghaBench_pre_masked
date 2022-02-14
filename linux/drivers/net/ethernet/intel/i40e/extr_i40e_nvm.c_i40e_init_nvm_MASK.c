
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i40e_nvm_info {int sr_size; int blank_nvm_mode; int timeout; } ;
struct i40e_hw {struct i40e_nvm_info nvm; } ;
typedef int i40e_status ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct i40e_hw*,int ,char*) ;
 int FUNC_2 (struct i40e_hw*,int ) ;

i40e_status FUNC_3(struct i40e_hw *VAR_9)
{
 struct i40e_nvm_info *VAR_10 = &VAR_9->nvm;
 i40e_status VAR_11 = 0;
 u32 VAR_12, VAR_13;
 u8 VAR_14;




 VAR_13 = FUNC_2(VAR_9, VAR_4);
 VAR_14 = ((VAR_13 & VAR_5) >>
      VAR_6);

 VAR_10->sr_size = FUNC_0(VAR_14) * VAR_8;


 VAR_12 = FUNC_2(VAR_9, VAR_2);
 if (VAR_12 & VAR_3) {

  VAR_10->timeout = VAR_7;
  VAR_10->blank_nvm_mode = 0;
 } else {
  VAR_10->blank_nvm_mode = 1;
  VAR_11 = VAR_1;
  FUNC_1(VAR_9, VAR_0, "NVM init error: unsupported blank mode.\n");
 }

 return VAR_11;
}
