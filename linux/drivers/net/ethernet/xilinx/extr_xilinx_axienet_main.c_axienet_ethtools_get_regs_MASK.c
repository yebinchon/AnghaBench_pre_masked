
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_regs {size_t len; scalar_t__ version; } ;
struct axienet_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (struct axienet_local*,int ) ;
 int FUNC_1 (struct axienet_local*,int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 struct axienet_local* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_41,
          struct ethtool_regs *VAR_42, void *VAR_43)
{
 u32 *VAR_44 = (u32 *) VAR_43;
 size_t VAR_45 = sizeof(u32) * VAR_0;
 struct axienet_local *VAR_46 = FUNC_3(VAR_41);

 VAR_42->version = 0;
 VAR_42->len = VAR_45;

 FUNC_2(VAR_44, 0, VAR_45);
 VAR_44[0] = FUNC_1(VAR_46, VAR_20);
 VAR_44[1] = FUNC_1(VAR_46, VAR_25);
 VAR_44[2] = FUNC_1(VAR_46, VAR_7);
 VAR_44[3] = FUNC_1(VAR_46, VAR_9);
 VAR_44[4] = FUNC_1(VAR_46, VAR_8);
 VAR_44[5] = FUNC_1(VAR_46, VAR_6);
 VAR_44[6] = FUNC_1(VAR_46, VAR_28);
 VAR_44[7] = FUNC_1(VAR_46, VAR_23);
 VAR_44[8] = FUNC_1(VAR_46, VAR_31);
 VAR_44[9] = FUNC_1(VAR_46, VAR_32);
 VAR_44[10] = FUNC_1(VAR_46, VAR_26);
 VAR_44[11] = FUNC_1(VAR_46, VAR_27);
 VAR_44[12] = FUNC_1(VAR_46, VAR_19);
 VAR_44[13] = FUNC_1(VAR_46, VAR_21);
 VAR_44[14] = FUNC_1(VAR_46, VAR_22);
 VAR_44[15] = FUNC_1(VAR_46, VAR_24);
 VAR_44[16] = FUNC_1(VAR_46, VAR_4);
 VAR_44[17] = FUNC_1(VAR_46, VAR_3);
 VAR_44[18] = FUNC_1(VAR_46, VAR_18);
 VAR_44[19] = FUNC_1(VAR_46, VAR_11);
 VAR_44[20] = FUNC_1(VAR_46, VAR_10);
 VAR_44[21] = FUNC_1(VAR_46, VAR_17);
 VAR_44[22] = FUNC_1(VAR_46, VAR_16);
 VAR_44[23] = FUNC_1(VAR_46, VAR_15);
 VAR_44[24] = FUNC_1(VAR_46, VAR_14);
 VAR_44[25] = FUNC_1(VAR_46, VAR_13);
 VAR_44[26] = FUNC_1(VAR_46, VAR_12);
 VAR_44[27] = FUNC_1(VAR_46, VAR_29);
 VAR_44[28] = FUNC_1(VAR_46, VAR_30);
 VAR_44[29] = FUNC_1(VAR_46, VAR_5);
 VAR_44[30] = FUNC_1(VAR_46, VAR_1);
 VAR_44[31] = FUNC_1(VAR_46, VAR_2);
 VAR_44[32] = FUNC_0(VAR_46, VAR_38);
 VAR_44[33] = FUNC_0(VAR_46, VAR_39);
 VAR_44[34] = FUNC_0(VAR_46, VAR_37);
 VAR_44[35] = FUNC_0(VAR_46, VAR_40);
 VAR_44[36] = FUNC_0(VAR_46, VAR_34);
 VAR_44[37] = FUNC_0(VAR_46, VAR_35);
 VAR_44[38] = FUNC_0(VAR_46, VAR_33);
 VAR_44[39] = FUNC_0(VAR_46, VAR_36);
}
