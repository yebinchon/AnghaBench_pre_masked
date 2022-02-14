
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1, u16 VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_1(FUNC_0(VAR_2));
 if (VAR_3 & VAR_0)
  FUNC_2(FUNC_0(VAR_2),
       VAR_3 & ~VAR_0);

 return 0;
}
