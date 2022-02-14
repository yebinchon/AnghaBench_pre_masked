
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_0)
{
 s32 VAR_1 = 0;
 u16 VAR_2;
 u16 VAR_3;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_3 = FUNC_0(VAR_2);
  VAR_1 = FUNC_1(VAR_0,
        VAR_3);
  if (VAR_1 != 0)
   goto out;
 }

out:
 return VAR_1;
}
