
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {scalar_t__ en_mng_pt; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;

 if (VAR_2->en_mng_pt) {
  u32 VAR_4 = FUNC_0(VAR_1);


  VAR_4 &= ~(VAR_0);

  FUNC_1(VAR_1, VAR_4);
 }
}
