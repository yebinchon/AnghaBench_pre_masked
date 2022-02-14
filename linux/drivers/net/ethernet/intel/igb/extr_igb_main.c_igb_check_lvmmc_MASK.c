
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct igb_adapter *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_1->hw;
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3) {
  if (FUNC_3(FUNC_0())) {
   FUNC_1(VAR_1->netdev,
        "malformed Tx packet detected and dropped, LVMMC:0x%08x\n",
        VAR_3);
  }
 }
}
