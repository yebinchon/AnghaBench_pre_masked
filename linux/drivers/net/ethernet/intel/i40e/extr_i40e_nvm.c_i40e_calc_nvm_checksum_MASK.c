
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_virt_mem {scalar_t__ va; } ;
struct TYPE_2__ {int sr_size; } ;
struct i40e_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int,int*,int*) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,struct i40e_virt_mem*,int) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_virt_mem*) ;

__attribute__((used)) static i40e_status FUNC_4(struct i40e_hw *VAR_8,
          u16 *VAR_9)
{
 i40e_status VAR_10;
 struct i40e_virt_mem VAR_11;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 *VAR_15;
 u16 VAR_16 = 0;

 VAR_10 = FUNC_2(VAR_8, &VAR_11,
        VAR_3 * sizeof(u16));
 if (VAR_10)
  goto i40e_calc_nvm_checksum_exit;
 VAR_15 = (u16 *)VAR_11.va;


 VAR_10 = FUNC_1(VAR_8, VAR_7, &VAR_14);
 if (VAR_10) {
  VAR_10 = VAR_0;
  goto i40e_calc_nvm_checksum_exit;
 }


 VAR_10 = FUNC_1(VAR_8, VAR_1,
     &VAR_12);
 if (VAR_10) {
  VAR_10 = VAR_0;
  goto i40e_calc_nvm_checksum_exit;
 }




 for (VAR_16 = 0; VAR_16 < VAR_8->nvm.sr_size; VAR_16++) {

  if ((VAR_16 % VAR_3) == 0) {
   u16 VAR_17 = VAR_3;

   VAR_10 = FUNC_0(VAR_8, VAR_16, &VAR_17, VAR_15);
   if (VAR_10) {
    VAR_10 = VAR_0;
    goto i40e_calc_nvm_checksum_exit;
   }
  }


  if (VAR_16 == VAR_5)
   continue;

  if ((VAR_16 >= (u32)VAR_14) &&
      (VAR_16 < ((u32)VAR_14 +
       (VAR_6 / 2)))) {
   continue;
  }

  if ((VAR_16 >= (u32)VAR_12) &&
      (VAR_16 < ((u32)VAR_12 +
       (VAR_2 / 2)))) {
   continue;
  }

  VAR_13 += VAR_15[VAR_16 % VAR_3];
 }

 *VAR_9 = (u16)VAR_4 - VAR_13;

i40e_calc_nvm_checksum_exit:
 FUNC_3(VAR_8, &VAR_11);
 return VAR_10;
}
