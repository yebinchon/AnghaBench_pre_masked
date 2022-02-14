
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct igb_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7 = FUNC_0(VAR_0);


 if ((VAR_6->phy.media_type == VAR_4) &&
     (!(VAR_7 & VAR_3))) {
  VAR_7 |= VAR_2;
  VAR_7 |= VAR_1;
  FUNC_1(VAR_0, VAR_7);
  FUNC_2();
 }
}
