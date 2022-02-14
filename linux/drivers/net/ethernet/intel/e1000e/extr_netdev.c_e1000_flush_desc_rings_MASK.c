
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int pdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_6(struct e1000_adapter *VAR_4)
{
 u16 VAR_5;
 u32 VAR_6, VAR_7;
 struct e1000_hw *VAR_8 = &VAR_4->hw;


 VAR_6 = FUNC_3(VAR_1);
 VAR_6 |= VAR_0;
 FUNC_4(VAR_1, VAR_6);

 VAR_7 = FUNC_3(FUNC_0(0));
 FUNC_5(VAR_4->pdev, VAR_3,
        &VAR_5);
 if (!(VAR_5 & VAR_2) || !VAR_7)
  return;
 FUNC_2(VAR_4);

 FUNC_5(VAR_4->pdev, VAR_3,
        &VAR_5);
 if (VAR_5 & VAR_2)
  FUNC_1(VAR_4);
}
