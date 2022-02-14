
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct atl1c_hw {int dummy; } ;
struct atl1c_adapter {struct atl1c_hw hw; } ;


 int FUNC_0 (struct atl1c_hw*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (struct atl1c_hw*,int ,scalar_t__*) ;
 int FUNC_2 (void*,int ,int) ;
 struct atl1c_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_23,
      struct ethtool_regs *VAR_24, void *VAR_25)
{
 struct atl1c_adapter *VAR_26 = FUNC_3(VAR_23);
 struct atl1c_hw *VAR_27 = &VAR_26->hw;
 u32 *VAR_28 = VAR_25;
 u16 VAR_29;

 FUNC_2(VAR_25, 0, VAR_0);

 VAR_24->version = 1;
 FUNC_0(VAR_27, VAR_16, VAR_25++);
 FUNC_0(VAR_27, VAR_8, VAR_25++);
 FUNC_0(VAR_27, VAR_20, VAR_25++);
 FUNC_0(VAR_27, VAR_15, VAR_25++);
 FUNC_0(VAR_27, VAR_12, VAR_25++);
 FUNC_0(VAR_27, VAR_11, VAR_25++);
 FUNC_0(VAR_27, VAR_5, VAR_25++);
 FUNC_0(VAR_27, VAR_3, VAR_25++);
 FUNC_0(VAR_27, VAR_6, VAR_25++);
 FUNC_0(VAR_27, VAR_4, VAR_25++);
 FUNC_0(VAR_27, VAR_13, VAR_25++);
 FUNC_0(VAR_27, VAR_19, VAR_25++);
 FUNC_0(VAR_27, VAR_7, VAR_25++);
 FUNC_0(VAR_27, VAR_9, VAR_25++);
 FUNC_0(VAR_27, VAR_10, VAR_25++);
 FUNC_0(VAR_27, VAR_10+4, VAR_25++);
 FUNC_0(VAR_27, VAR_18, VAR_25++);
 FUNC_0(VAR_27, VAR_18+4, VAR_25++);
 FUNC_0(VAR_27, VAR_17, VAR_25++);
 FUNC_0(VAR_27, VAR_21, VAR_25++);
 FUNC_0(VAR_27, VAR_14, VAR_25++);
 FUNC_0(VAR_27, VAR_22, VAR_25++);

 FUNC_1(VAR_27, VAR_1, &VAR_29);
 VAR_28[VAR_0/sizeof(u32) - 2] = (u32) VAR_29;
 FUNC_1(VAR_27, VAR_2, &VAR_29);
 VAR_28[VAR_0/sizeof(u32) - 1] = (u32) VAR_29;
}
