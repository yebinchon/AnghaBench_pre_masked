
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct igb_adapter*,int const*,int,int) ;

int FUNC_1(struct igb_adapter *VAR_3,
    const u8 *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_3->hw;




 if (VAR_7->mac.type != VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_5,
     VAR_1 | VAR_6);
}
