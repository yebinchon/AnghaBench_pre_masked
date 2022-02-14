
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_3,
         netdev_features_t VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_4 & VAR_2) {

  VAR_6 |= VAR_1;
 } else {

  VAR_6 &= ~VAR_1;
 }
 FUNC_1(VAR_0, VAR_6);
}
