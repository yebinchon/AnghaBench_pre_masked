
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {TYPE_1__* pdev; struct e1000_hw hw; } ;
struct ethtool_regs {unsigned int version; } ;
struct TYPE_2__ {int revision; unsigned int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,int) ;
 struct igbvf_adapter* FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3,
      struct ethtool_regs *VAR_4, void *VAR_5)
{
 struct igbvf_adapter *VAR_6 = FUNC_8(VAR_3);
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 u32 *VAR_8 = VAR_5;

 FUNC_7(VAR_5, 0, VAR_1 * sizeof(u32));

 VAR_4->version = (1u << 24) |
   (VAR_6->pdev->revision << 16) |
   VAR_6->pdev->device;

 VAR_8[0] = FUNC_6(VAR_0);
 VAR_8[1] = FUNC_6(VAR_2);

 VAR_8[2] = FUNC_6(FUNC_1(0));
 VAR_8[3] = FUNC_6(FUNC_0(0));
 VAR_8[4] = FUNC_6(FUNC_2(0));

 VAR_8[5] = FUNC_6(FUNC_4(0));
 VAR_8[6] = FUNC_6(FUNC_3(0));
 VAR_8[7] = FUNC_6(FUNC_5(0));
}
