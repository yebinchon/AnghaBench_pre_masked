
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ analog_shiftreg; } ;
struct ath_hw {TYPE_1__ config; } ;


 int FUNC_0 (struct ath_hw*,int,int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct ath_hw *VAR_0, u32 VAR_1, u32 VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_0, VAR_1, ((VAR_4 << VAR_3) & VAR_2), VAR_2);

 if (VAR_0->config.analog_shiftreg)
  FUNC_1(100);
}
