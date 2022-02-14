
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct i40e_hw*,int ,char*) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static i40e_status FUNC_3(struct i40e_hw *VAR_5)
{
 i40e_status VAR_6 = VAR_1;
 u32 VAR_7, VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7 = FUNC_1(VAR_5, VAR_2);
  if (VAR_7 & VAR_3) {
   VAR_6 = 0;
   break;
  }
  FUNC_2(5);
 }
 if (VAR_6 == VAR_1)
  FUNC_0(VAR_5, VAR_0, "Done bit in GLNVM_SRCTL not set");
 return VAR_6;
}
