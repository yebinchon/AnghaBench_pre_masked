
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {scalar_t__ link_duplex; int link_speed; TYPE_1__* netdev; struct e1000_hw hw; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6 = FUNC_0(VAR_0);


 FUNC_1("%s NIC Link is Up %d Mbps %s Duplex, Flow Control: %s\n",
  VAR_4->netdev->name, VAR_4->link_speed,
  VAR_4->link_duplex == VAR_3 ? "Full" : "Half",
  (VAR_6 & VAR_2) && (VAR_6 & VAR_1) ? "Rx/Tx" :
  (VAR_6 & VAR_1) ? "Rx" :
  (VAR_6 & VAR_2) ? "Tx" : "None");
}
