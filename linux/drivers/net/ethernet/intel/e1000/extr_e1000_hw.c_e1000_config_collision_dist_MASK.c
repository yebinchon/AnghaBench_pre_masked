
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {scalar_t__ mac_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct e1000_hw *VAR_6)
{
 u32 VAR_7, VAR_8;

 if (VAR_6->mac_type < VAR_5)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 VAR_7 = FUNC_1(VAR_4);

 VAR_7 &= ~VAR_3;
 VAR_7 |= VAR_8 << VAR_0;

 FUNC_2(VAR_4, VAR_7);
 FUNC_0();
}
