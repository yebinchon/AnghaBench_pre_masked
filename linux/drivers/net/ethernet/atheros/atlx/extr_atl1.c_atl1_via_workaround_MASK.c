
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct atl1_adapter {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atl1_adapter *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_2->hw.hw_addr + VAR_0);
 if (VAR_3 & VAR_1)
  VAR_3 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_2->hw.hw_addr + VAR_0);
}
