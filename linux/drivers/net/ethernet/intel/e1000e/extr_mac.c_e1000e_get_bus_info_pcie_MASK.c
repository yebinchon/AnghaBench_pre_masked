
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* set_lan_id ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {TYPE_1__ ops; } ;
struct e1000_bus_info {int width; } ;
struct e1000_hw {struct e1000_adapter* adapter; struct e1000_bus_info bus; struct e1000_mac_info mac; } ;
struct e1000_adapter {TYPE_2__* pdev; } ;
typedef int s32 ;
typedef enum e1000_bus_width { ____Placeholder_e1000_bus_width } e1000_bus_width ;
struct TYPE_4__ {int pcie_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int,int*) ;
 int FUNC_1 (struct e1000_hw*) ;

s32 FUNC_2(struct e1000_hw *VAR_4)
{
 struct e1000_mac_info *VAR_5 = &VAR_4->mac;
 struct e1000_bus_info *VAR_6 = &VAR_4->bus;
 struct e1000_adapter *VAR_7 = VAR_4->adapter;
 u16 VAR_8, VAR_9;

 VAR_9 = VAR_7->pdev->pcie_cap;
 if (!VAR_9) {
  VAR_6->width = VAR_3;
 } else {
  FUNC_0(VAR_7->pdev,
         VAR_9 + VAR_0,
         &VAR_8);
  VAR_6->width = (enum e1000_bus_width)((VAR_8 &
           VAR_1) >>
          VAR_2);
 }

 VAR_5->ops.set_lan_id(VAR_4);

 return 0;
}
