
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct igc_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct igc_hw *VAR_4)
{
 s32 VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_0);
 VAR_6 |= VAR_3;
 VAR_6 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_0, VAR_6);

 VAR_5 = FUNC_0(VAR_4);

 return VAR_5;
}
