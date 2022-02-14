
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;

void FUNC_3(struct igc_hw *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_2);

 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_1 << VAR_0;

 FUNC_1(VAR_2, VAR_5);
 FUNC_2();
}
