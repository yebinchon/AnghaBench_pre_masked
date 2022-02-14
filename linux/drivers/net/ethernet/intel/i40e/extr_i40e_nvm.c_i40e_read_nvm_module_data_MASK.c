
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,int,int,int*,int,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,int,int*,int*) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,scalar_t__,int*) ;
 int FUNC_5 (struct i40e_hw*) ;

i40e_status FUNC_6(struct i40e_hw *VAR_7,
          u8 VAR_8, u16 VAR_9,
          u16 VAR_10,
          u16 *VAR_11)
{
 i40e_status VAR_12;
 u16 VAR_13 = 0;
 u32 VAR_14;

 if (VAR_8 != 0) {
  VAR_12 = FUNC_4(VAR_7, VAR_8, &VAR_13);
  if (VAR_12) {
   FUNC_2(VAR_7, VAR_0,
       "Reading nvm word failed.Error code: %d.\n",
       VAR_12);
   return VAR_2;
  }
 }




 if (VAR_13 == 0x7FFF ||
     VAR_13 == 0xFFFF)
  return VAR_1;


 if (VAR_13 & VAR_5) {

  VAR_13 &= ~VAR_5;


  VAR_13 /= 2;
  VAR_14 = ((u32)VAR_13 * 0x1000) + (u32)VAR_9;
  VAR_12 = FUNC_0(VAR_7, VAR_6);
  if (!VAR_12) {
   VAR_12 = FUNC_1(VAR_7, 0, 2 * VAR_14,
        2 * VAR_10,
        VAR_11, 1, ((void*)0));
   FUNC_5(VAR_7);
   if (VAR_12) {
    FUNC_2(VAR_7, VAR_0,
        "Reading nvm aq failed.Error code: %d.\n",
        VAR_12);
    return VAR_2;
   }
  } else {
   return VAR_2;
  }
 } else {

  VAR_12 = FUNC_3(VAR_7, VAR_13 + VAR_9,
           &VAR_10, VAR_11);
  if (VAR_12) {
   FUNC_2(VAR_7, VAR_0,
       "Reading nvm buffer failed.Error code: %d.\n",
       VAR_12);
  }
 }

 return VAR_12;
}
