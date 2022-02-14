
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_4, u32 VAR_5,
        u16 *VAR_6)
{
 u32 VAR_7;
 s32 VAR_8;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_7 = ((VAR_5 << VAR_1) &
         VAR_0) | VAR_2;
 FUNC_4(VAR_3, VAR_7);
 FUNC_2();

 FUNC_5(2);

 VAR_7 = FUNC_3(VAR_3);
 *VAR_6 = (u16)VAR_7;

 FUNC_1(VAR_4);

 return VAR_8;
}
