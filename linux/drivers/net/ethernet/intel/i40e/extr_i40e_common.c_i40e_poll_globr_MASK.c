
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct i40e_hw*,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ) ;

__attribute__((used)) static i40e_status FUNC_3(struct i40e_hw *VAR_3,
       u32 VAR_4)
{
 u32 VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_2(VAR_3, VAR_1);
  if (!(VAR_6 & VAR_2))
   return 0;
  FUNC_1(100);
 }

 FUNC_0(VAR_3, "Global reset failed.\n");
 FUNC_0(VAR_3, "I40E_GLGEN_RSTAT = 0x%x\n", VAR_6);

 return VAR_0;
}
