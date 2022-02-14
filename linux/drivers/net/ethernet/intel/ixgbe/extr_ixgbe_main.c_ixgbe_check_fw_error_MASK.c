
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ (* fw_recovery_mode ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

__attribute__((used)) static bool FUNC_5(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_3));

 if (VAR_4 & VAR_0 ||
     !(VAR_4 & VAR_1))
  FUNC_3("Warning firmware error detected FWSM: 0x%08X\n",
      VAR_4);

 if (VAR_3->mac.ops.fw_recovery_mode && VAR_3->mac.ops.fw_recovery_mode(VAR_3)) {
  FUNC_2("Firmware recovery mode detected. Limiting functionality. Refer to the Intel(R) Ethernet Adapters and Devices User Guide for details on firmware recovery mode.\n");
  return 1;
 }

 return 0;
}
