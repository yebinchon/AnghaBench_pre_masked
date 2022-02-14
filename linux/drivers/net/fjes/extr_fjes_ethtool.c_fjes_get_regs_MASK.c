
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fjes_hw {int dummy; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
struct ethtool_regs {int version; } ;


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
 int FUNC_0 (void*,int ,int) ;
 struct fjes_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_19,
     struct ethtool_regs *VAR_20, void *VAR_21)
{
 struct fjes_adapter *VAR_22 = FUNC_1(VAR_19);
 struct fjes_hw *VAR_23 = &VAR_22->hw;
 u32 *VAR_24 = VAR_21;

 FUNC_0(VAR_21, 0, VAR_0 * sizeof(u32));

 VAR_20->version = 1;


 VAR_24[0] = FUNC_2(VAR_10);
 VAR_24[1] = FUNC_2(VAR_9);


 VAR_24[4] = FUNC_2(VAR_3);


 VAR_24[8] = FUNC_2(VAR_1);
 VAR_24[9] = FUNC_2(VAR_2);
 VAR_24[10] = FUNC_2(VAR_18);
 VAR_24[11] = FUNC_2(VAR_17);

 VAR_24[13] = FUNC_2(VAR_13);
 VAR_24[14] = FUNC_2(VAR_12);
 VAR_24[15] = FUNC_2(VAR_11);

 VAR_24[17] = FUNC_2(VAR_16);
 VAR_24[18] = FUNC_2(VAR_15);
 VAR_24[19] = FUNC_2(VAR_14);


 VAR_24[32] = FUNC_2(VAR_8);
 VAR_24[33] = FUNC_2(VAR_7);
 VAR_24[34] = FUNC_2(VAR_6);
 VAR_24[35] = FUNC_2(VAR_5);
 VAR_24[36] = FUNC_2(VAR_4);
}
