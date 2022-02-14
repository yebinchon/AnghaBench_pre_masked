
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct net_device {TYPE_3__ dev; } ;
struct TYPE_4__ {int autoneg; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct e1000_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
 struct e1000_adapter *VAR_3 = FUNC_1(VAR_2);

 if (!FUNC_2(VAR_2))
  return -VAR_0;

 if (!VAR_3->hw.mac.autoneg)
  return -VAR_1;

 FUNC_3(VAR_2->dev.parent);
 FUNC_0(VAR_3);
 FUNC_4(VAR_2->dev.parent);

 return 0;
}
