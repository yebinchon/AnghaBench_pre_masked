
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct atl1e_hw {int revision_id; int device_id; } ;
struct atl1e_adapter {struct atl1e_hw hw; } ;


 scalar_t__ FUNC_0 (struct atl1e_hw*,scalar_t__) ;
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
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_1 (struct atl1e_hw*,int ,scalar_t__*) ;
 int FUNC_2 (void*,int ,int) ;
 struct atl1e_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_31,
      struct ethtool_regs *VAR_32, void *VAR_33)
{
 struct atl1e_adapter *VAR_34 = FUNC_3(VAR_31);
 struct atl1e_hw *VAR_35 = &VAR_34->hw;
 u32 *VAR_36 = VAR_33;
 u16 VAR_37;

 FUNC_2(VAR_33, 0, VAR_0 * sizeof(u32));

 VAR_32->version = (1 << 24) | (VAR_35->revision_id << 16) | VAR_35->device_id;

 VAR_36[0] = FUNC_0(VAR_35, VAR_29);
 VAR_36[1] = FUNC_0(VAR_35, VAR_19);
 VAR_36[2] = FUNC_0(VAR_35, VAR_18);
 VAR_36[3] = FUNC_0(VAR_35, VAR_28);
 VAR_36[4] = FUNC_0(VAR_35, VAR_15);
 VAR_36[5] = FUNC_0(VAR_35, VAR_12);
 VAR_36[6] = FUNC_0(VAR_35, VAR_11);
 VAR_36[7] = FUNC_0(VAR_35, VAR_6);
 VAR_36[8] = FUNC_0(VAR_35, VAR_4);
 VAR_36[9] = FUNC_0(VAR_35, VAR_3);
 VAR_36[10] = FUNC_0(VAR_35, VAR_5);
 VAR_36[11] = FUNC_0(VAR_35, VAR_13);
 VAR_36[12] = FUNC_0(VAR_35, VAR_17);
 VAR_36[13] = FUNC_0(VAR_35, VAR_7);
 VAR_36[14] = FUNC_0(VAR_35, VAR_9);
 VAR_36[15] = FUNC_0(VAR_35, VAR_10);
 VAR_36[16] = FUNC_0(VAR_35, VAR_10+4);
 VAR_36[17] = FUNC_0(VAR_35, VAR_16);
 VAR_36[18] = FUNC_0(VAR_35, VAR_16+4);
 VAR_36[19] = FUNC_0(VAR_35, VAR_8);
 VAR_36[20] = FUNC_0(VAR_35, VAR_14);
 VAR_36[21] = FUNC_0(VAR_35, VAR_30);
 VAR_36[22] = FUNC_0(VAR_35, VAR_24);
 VAR_36[23] = FUNC_0(VAR_35, VAR_25);
 VAR_36[24] = FUNC_0(VAR_35, VAR_21);
 VAR_36[25] = FUNC_0(VAR_35, VAR_22);
 VAR_36[26] = FUNC_0(VAR_35, VAR_26);
 VAR_36[27] = FUNC_0(VAR_35, VAR_27);
 VAR_36[28] = FUNC_0(VAR_35, VAR_23);
 VAR_36[29] = FUNC_0(VAR_35, VAR_20);

 FUNC_1(VAR_35, VAR_1, &VAR_37);
 VAR_36[73] = (u32)VAR_37;
 FUNC_1(VAR_35, VAR_2, &VAR_37);
 VAR_36[74] = (u32)VAR_37;
}
