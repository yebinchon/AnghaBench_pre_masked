
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {scalar_t__ revision_id; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct i40e_hw*,char*,...) ;
 int FUNC_1 (struct i40e_hw*) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct i40e_hw*,int ,int) ;

i40e_status FUNC_7(struct i40e_hw *VAR_13)
{
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17;





 VAR_17 = (FUNC_4(VAR_13, VAR_3) &
      VAR_4) >>
      VAR_5;




 VAR_17 = VAR_17 * 20;

 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
  VAR_16 = FUNC_4(VAR_13, VAR_1);
  if (!(VAR_16 & VAR_2))
   break;
  FUNC_3(100);
 }
 if (VAR_16 & VAR_2) {
  FUNC_0(VAR_13, "Global reset polling failed to complete.\n");
  return VAR_0;
 }


 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  VAR_16 = FUNC_4(VAR_13, VAR_6);
  VAR_16 &= (VAR_7 |
   VAR_8);
  if (VAR_16 == (VAR_7 |
       VAR_8)) {
   FUNC_0(VAR_13, "Core and Global modules ready %d\n", VAR_15);
   break;
  }
  FUNC_5(10000, 20000);
 }
 if (!(VAR_16 & (VAR_7 |
       VAR_8))) {
  FUNC_0(VAR_13, "wait for FW Reset complete timedout\n");
  FUNC_0(VAR_13, "I40E_GLNVM_ULD = 0x%x\n", VAR_16);
  return VAR_0;
 }




 if (!VAR_14) {
  u32 VAR_18 = 0;
  if (VAR_13->revision_id == 0)
   VAR_14 = VAR_12;
  else
   VAR_14 = VAR_11;
  VAR_16 = FUNC_4(VAR_13, VAR_9);
  FUNC_6(VAR_13, VAR_9,
       (VAR_16 | VAR_10));
  for (; VAR_14; VAR_14--) {
   VAR_16 = FUNC_4(VAR_13, VAR_9);
   if (!(VAR_16 & VAR_10))
    break;
   VAR_18 = FUNC_4(VAR_13, VAR_1);
   if (VAR_18 & VAR_2)
    break;
   FUNC_5(1000, 2000);
  }
  if (VAR_18 & VAR_2) {
   if (FUNC_2(VAR_13, VAR_17))
    return VAR_0;
  } else if (VAR_16 & VAR_10) {
   FUNC_0(VAR_13, "PF reset polling failed to complete.\n");
   return VAR_0;
  }
 }

 FUNC_1(VAR_13);

 return 0;
}
