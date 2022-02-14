
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct e1000_adapter *VAR_3)
{
 u32 VAR_4, VAR_5;
 struct e1000_hw *VAR_6 = &VAR_3->hw;

 VAR_4 = FUNC_3(VAR_2);
 FUNC_4(VAR_2, VAR_4 & ~VAR_0);
 FUNC_2();
 FUNC_5(100, 150);

 VAR_5 = FUNC_3(FUNC_1(0));

 VAR_5 &= 0xffffc000;




 VAR_5 |= (0x1F | FUNC_0(8) | VAR_1);

 FUNC_4(FUNC_1(0), VAR_5);

 FUNC_4(VAR_2, VAR_4 | VAR_0);
 FUNC_2();
 FUNC_5(100, 150);
 FUNC_4(VAR_2, VAR_4 & ~VAR_0);
}
