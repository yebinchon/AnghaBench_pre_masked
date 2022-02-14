
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int read_reg; } ;
struct TYPE_5__ {int mdio; TYPE_1__ ops; } ;
struct TYPE_6__ {TYPE_2__ phy; } ;
struct ixgbe_adapter {TYPE_3__ hw; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct ifreq*) ;
 int FUNC_1 (struct ixgbe_adapter*,struct ifreq*) ;
 int FUNC_2 (struct ixgbe_adapter*,struct ifreq*) ;
 int FUNC_3 (int *,int ,int) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_4(VAR_1);

 switch (VAR_3) {
 case 128:
  return FUNC_2(VAR_4, VAR_2);
 case 130:
  return FUNC_1(VAR_4, VAR_2);
 case 129:
  if (!VAR_4->hw.phy.ops.read_reg)
   return -VAR_0;

 default:
  return FUNC_3(&VAR_4->hw.phy.mdio, FUNC_0(VAR_2), VAR_3);
 }
}
