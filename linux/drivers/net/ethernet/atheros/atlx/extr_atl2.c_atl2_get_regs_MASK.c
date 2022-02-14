
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct atl2_hw {int revision_id; int device_id; } ;
struct atl2_adapter {struct atl2_hw hw; } ;


 scalar_t__ FUNC_0 (struct atl2_hw*,scalar_t__) ;
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
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_1 (struct atl2_hw*,int ,int *) ;
 int FUNC_2 (void*,int ,int) ;
 struct atl2_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_40,
 struct ethtool_regs *VAR_41, void *VAR_42)
{
 struct atl2_adapter *VAR_43 = FUNC_3(VAR_40);
 struct atl2_hw *VAR_44 = &VAR_43->hw;
 u32 *VAR_45 = VAR_42;
 u16 VAR_46;

 FUNC_2(VAR_42, 0, sizeof(u32) * VAR_0);

 VAR_41->version = (1 << 24) | (VAR_44->revision_id << 16) | VAR_44->device_id;

 VAR_45[0] = FUNC_0(VAR_44, VAR_38);
 VAR_45[1] = FUNC_0(VAR_44, VAR_30);
 VAR_45[2] = FUNC_0(VAR_44, VAR_29);
 VAR_45[3] = FUNC_0(VAR_44, VAR_32);
 VAR_45[4] = FUNC_0(VAR_44, VAR_23);
 VAR_45[5] = FUNC_0(VAR_44, VAR_16);
 VAR_45[6] = FUNC_0(VAR_44, VAR_15);
 VAR_45[7] = FUNC_0(VAR_44, VAR_9);
 VAR_45[8] = FUNC_0(VAR_44, VAR_24);
 VAR_45[9] = FUNC_0(VAR_44, VAR_3);
 VAR_45[10] = FUNC_0(VAR_44, VAR_7);
 VAR_45[11] = FUNC_0(VAR_44, VAR_19);
 VAR_45[12] = FUNC_0(VAR_44, VAR_28);
 VAR_45[13] = FUNC_0(VAR_44, VAR_11);
 VAR_45[14] = FUNC_0(VAR_44, VAR_13);
 VAR_45[15] = FUNC_0(VAR_44, VAR_14);
 VAR_45[16] = FUNC_0(VAR_44, VAR_14+4);
 VAR_45[17] = FUNC_0(VAR_44, VAR_27);
 VAR_45[18] = FUNC_0(VAR_44, VAR_27+4);
 VAR_45[19] = FUNC_0(VAR_44, VAR_12);
 VAR_45[20] = FUNC_0(VAR_44, VAR_20);
 VAR_45[21] = FUNC_0(VAR_44, VAR_39);
 VAR_45[22] = FUNC_0(VAR_44, VAR_31);
 VAR_45[23] = FUNC_0(VAR_44, VAR_4);
 VAR_45[24] = FUNC_0(VAR_44, VAR_33);
 VAR_45[25] = FUNC_0(VAR_44, VAR_34);
 VAR_45[26] = FUNC_0(VAR_44, VAR_35);
 VAR_45[27] = FUNC_0(VAR_44, VAR_36);
 VAR_45[28] = FUNC_0(VAR_44, VAR_25);
 VAR_45[29] = FUNC_0(VAR_44, VAR_26);
 VAR_45[30] = FUNC_0(VAR_44, VAR_5);
 VAR_45[31] = FUNC_0(VAR_44, VAR_37);
 VAR_45[32] = FUNC_0(VAR_44, VAR_6);
 VAR_45[33] = FUNC_0(VAR_44, VAR_22);
 VAR_45[34] = FUNC_0(VAR_44, VAR_21);
 VAR_45[35] = FUNC_0(VAR_44, VAR_18);
 VAR_45[36] = FUNC_0(VAR_44, VAR_17);
 VAR_45[38] = FUNC_0(VAR_44, VAR_10);
 VAR_45[39] = FUNC_0(VAR_44, VAR_8);

 FUNC_1(VAR_44, VAR_1, &VAR_46);
 VAR_45[40] = (u32)VAR_46;
 FUNC_1(VAR_44, VAR_2, &VAR_46);
 VAR_45[41] = (u32)VAR_46;
}
