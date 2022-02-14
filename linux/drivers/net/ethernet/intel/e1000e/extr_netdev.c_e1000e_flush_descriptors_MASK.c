
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags2; int tx_int_delay; int rx_int_delay; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;

 if (!(VAR_5->flags2 & VAR_2))
  return;


 FUNC_1(VAR_4, VAR_5->tx_int_delay | VAR_1);
 FUNC_1(VAR_3, VAR_5->rx_int_delay | VAR_0);


 FUNC_0();




 FUNC_1(VAR_4, VAR_5->tx_int_delay | VAR_1);
 FUNC_1(VAR_3, VAR_5->rx_int_delay | VAR_0);


 FUNC_0();
}
