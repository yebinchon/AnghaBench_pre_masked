
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_hw {int revision_id; unsigned int device_id; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;
struct ethtool_regs {unsigned int version; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_11 ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (void*,int ,int ) ;
 struct ixgbevf_adapter* FUNC_20 (struct net_device*) ;

__attribute__((used)) static void FUNC_21(struct net_device *VAR_12,
        struct ethtool_regs *VAR_13,
        void *VAR_14)
{
 struct ixgbevf_adapter *VAR_15 = FUNC_20(VAR_12);
 struct ixgbe_hw *VAR_16 = &VAR_15->hw;
 u32 *VAR_17 = VAR_14;
 u32 VAR_18 = FUNC_18(VAR_12);
 u8 VAR_19;

 FUNC_19(VAR_14, 0, VAR_18);


 VAR_13->version = (1u << 24) | (VAR_16->revision_id << 16) | VAR_16->device_id;


 VAR_17[0] = FUNC_0(VAR_16, VAR_0);
 VAR_17[1] = FUNC_0(VAR_16, VAR_5);
 VAR_17[2] = FUNC_0(VAR_16, VAR_2);
 VAR_17[3] = FUNC_0(VAR_16, VAR_4);
 VAR_17[4] = FUNC_0(VAR_16, VAR_1);





 VAR_17[5] = FUNC_0(VAR_16, VAR_8);
 VAR_17[6] = FUNC_0(VAR_16, VAR_8);
 VAR_17[7] = FUNC_0(VAR_16, VAR_10);
 VAR_17[8] = FUNC_0(VAR_16, VAR_9);
 VAR_17[9] = FUNC_0(VAR_16, VAR_6);
 VAR_17[10] = FUNC_0(VAR_16, VAR_7);
 VAR_17[11] = FUNC_0(VAR_16, FUNC_16(0));
 VAR_17[12] = FUNC_0(VAR_16, FUNC_17(0));
 VAR_17[13] = FUNC_0(VAR_16, VAR_11);


 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[14 + VAR_19] = FUNC_0(VAR_16, FUNC_2(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[16 + VAR_19] = FUNC_0(VAR_16, FUNC_1(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[18 + VAR_19] = FUNC_0(VAR_16, FUNC_4(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[20 + VAR_19] = FUNC_0(VAR_16, FUNC_3(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[22 + VAR_19] = FUNC_0(VAR_16, FUNC_5(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[24 + VAR_19] = FUNC_0(VAR_16, FUNC_6(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[26 + VAR_19] = FUNC_0(VAR_16, FUNC_7(VAR_19));


 VAR_17[28] = FUNC_0(VAR_16, VAR_3);


 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[29 + VAR_19] = FUNC_0(VAR_16, FUNC_9(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[31 + VAR_19] = FUNC_0(VAR_16, FUNC_8(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[33 + VAR_19] = FUNC_0(VAR_16, FUNC_11(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[35 + VAR_19] = FUNC_0(VAR_16, FUNC_10(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[37 + VAR_19] = FUNC_0(VAR_16, FUNC_12(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[39 + VAR_19] = FUNC_0(VAR_16, FUNC_15(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[41 + VAR_19] = FUNC_0(VAR_16, FUNC_14(VAR_19));
 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_17[43 + VAR_19] = FUNC_0(VAR_16, FUNC_13(VAR_19));
}
