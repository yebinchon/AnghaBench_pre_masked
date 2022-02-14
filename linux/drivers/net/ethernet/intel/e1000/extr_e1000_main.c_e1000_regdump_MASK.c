
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_39)
{
 struct e1000_hw *VAR_40 = &VAR_39->hw;
 u32 VAR_41[VAR_3];
 u32 *VAR_42 = VAR_41;
 int VAR_43 = 0;

 static const char * const VAR_44[] = {
  "CTRL", "STATUS",
  "RCTL", "RDLEN", "RDH", "RDT", "RDTR",
  "TCTL", "TDBAL", "TDBAH", "TDLEN", "TDH", "TDT",
  "TIDV", "TXDCTL", "TADV", "TARC0",
  "TDBAL1", "TDBAH1", "TDLEN1", "TDH1", "TDT1",
  "TXDCTL1", "TARC1",
  "CTRL_EXT", "ERT", "RDBAL", "RDBAH",
  "TDFH", "TDFT", "TDFHS", "TDFTS", "TDFPC",
  "RDFH", "RDFT", "RDFHS", "RDFTS", "RDFPC"
 };

 VAR_42[0] = FUNC_0(VAR_0);
 VAR_42[1] = FUNC_0(VAR_16);

 VAR_42[2] = FUNC_0(VAR_4);
 VAR_42[3] = FUNC_0(VAR_13);
 VAR_42[4] = FUNC_0(VAR_12);
 VAR_42[5] = FUNC_0(VAR_14);
 VAR_42[6] = FUNC_0(VAR_15);

 VAR_42[7] = FUNC_0(VAR_20);
 VAR_42[8] = FUNC_0(VAR_23);
 VAR_42[9] = FUNC_0(VAR_21);
 VAR_42[10] = FUNC_0(VAR_32);
 VAR_42[11] = FUNC_0(VAR_30);
 VAR_42[12] = FUNC_0(VAR_34);
 VAR_42[13] = FUNC_0(VAR_36);
 VAR_42[14] = FUNC_0(VAR_37);
 VAR_42[15] = FUNC_0(VAR_17);
 VAR_42[16] = FUNC_0(VAR_18);

 VAR_42[17] = FUNC_0(VAR_24);
 VAR_42[18] = FUNC_0(VAR_22);
 VAR_42[19] = FUNC_0(VAR_33);
 VAR_42[20] = FUNC_0(VAR_31);
 VAR_42[21] = FUNC_0(VAR_35);
 VAR_42[22] = FUNC_0(VAR_38);
 VAR_42[23] = FUNC_0(VAR_19);
 VAR_42[24] = FUNC_0(VAR_1);
 VAR_42[25] = FUNC_0(VAR_2);
 VAR_42[26] = FUNC_0(VAR_6);
 VAR_42[27] = FUNC_0(VAR_5);
 VAR_42[28] = FUNC_0(VAR_25);
 VAR_42[29] = FUNC_0(VAR_28);
 VAR_42[30] = FUNC_0(VAR_26);
 VAR_42[31] = FUNC_0(VAR_29);
 VAR_42[32] = FUNC_0(VAR_27);
 VAR_42[33] = FUNC_0(VAR_7);
 VAR_42[34] = FUNC_0(VAR_10);
 VAR_42[35] = FUNC_0(VAR_8);
 VAR_42[36] = FUNC_0(VAR_11);
 VAR_42[37] = FUNC_0(VAR_9);

 FUNC_1("Register dump\n");
 for (VAR_43 = 0; VAR_43 < VAR_3; VAR_43++)
  FUNC_1("%-15s  %08x\n", VAR_44[VAR_43], VAR_42[VAR_43]);
}
