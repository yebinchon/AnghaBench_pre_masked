
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int word_size; } ;
struct e1000_hw {TYPE_1__ eeprom; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct e1000_adapter *VAR_1 = FUNC_0(VAR_0);
 struct e1000_hw *VAR_2 = &VAR_1->hw;

 return VAR_2->eeprom.word_size * 2;
}
