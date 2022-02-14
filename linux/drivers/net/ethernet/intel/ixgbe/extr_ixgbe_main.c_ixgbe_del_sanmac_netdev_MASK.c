
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_mac_info {int san_addr; } ;
struct TYPE_2__ {struct ixgbe_mac_info mac; } ;
struct ixgbe_adapter {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 int VAR_2 = 0;
 struct ixgbe_adapter *VAR_3 = FUNC_2(VAR_1);
 struct ixgbe_mac_info *VAR_4 = &VAR_3->hw.mac;

 if (FUNC_1(VAR_4->san_addr)) {
  FUNC_3();
  VAR_2 = FUNC_0(VAR_1, VAR_4->san_addr, VAR_0);
  FUNC_4();
 }
 return VAR_2;
}
