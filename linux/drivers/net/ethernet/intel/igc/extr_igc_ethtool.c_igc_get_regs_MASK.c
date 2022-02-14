
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct igc_hw {int revision_id; unsigned int device_id; } ;
struct TYPE_2__ {int hrmpc; int scvpc; int lenerrs; int hgotc; int hgorc; int hgptc; int rpthc; int iac; int tsctc; int bptc; int mptc; int ptc1522; int ptc1023; int ptc511; int ptc255; int ptc127; int ptc64; int tpt; int tpr; int tot; int tor; int mgptc; int mgpdc; int mgprc; int rjc; int roc; int rfc; int ruc; int rnbc; int gotc; int gorc; int gptc; int mprc; int bprc; int gprc; int prc1522; int prc1023; int prc511; int prc255; int prc127; int prc64; int fcruc; int xofftxc; int xoffrxc; int xontxc; int xonrxc; int rlec; int htdpmc; int sec; int tncrs; int dc; int colc; int latecol; int mcc; int ecol; int scc; int mpc; int rxerrc; int symerrs; int algnerrc; int crcerrs; } ;
struct igc_adapter {TYPE_1__ stats; struct igc_hw hw; } ;
struct ethtool_regs {unsigned int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_21 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_28 ;
 int FUNC_16 (int) ;
 int FUNC_17 (void*,int ,int) ;
 struct igc_adapter* FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(struct net_device *VAR_29,
    struct ethtool_regs *VAR_30, void *VAR_31)
{
 struct igc_adapter *VAR_32 = FUNC_18(VAR_29);
 struct igc_hw *VAR_33 = &VAR_32->hw;
 u32 *VAR_34 = VAR_31;
 u8 VAR_35;

 FUNC_17(VAR_31, 0, VAR_22 * sizeof(u32));

 VAR_30->version = (1u << 24) | (VAR_33->revision_id << 16) | VAR_33->device_id;


 VAR_34[0] = FUNC_19(VAR_1);
 VAR_34[1] = FUNC_19(VAR_26);
 VAR_34[2] = FUNC_19(VAR_2);
 VAR_34[3] = FUNC_19(VAR_20);
 VAR_34[4] = FUNC_19(VAR_0);


 VAR_34[5] = FUNC_19(VAR_3);





 VAR_34[6] = FUNC_19(VAR_6);
 VAR_34[7] = FUNC_19(VAR_6);
 VAR_34[8] = FUNC_19(VAR_8);
 VAR_34[9] = FUNC_19(VAR_7);
 VAR_34[10] = FUNC_19(VAR_4);
 VAR_34[11] = FUNC_19(VAR_5);



 VAR_34[12] = FUNC_19(VAR_17);
 VAR_34[13] = FUNC_19(VAR_17);
 VAR_34[14] = FUNC_19(VAR_19);
 VAR_34[15] = FUNC_19(VAR_18);
 VAR_34[16] = FUNC_19(VAR_15);
 VAR_34[17] = FUNC_19(VAR_16);


 VAR_34[18] = FUNC_19(VAR_10);
 VAR_34[19] = FUNC_19(VAR_9);
 VAR_34[20] = FUNC_19(VAR_14);
 VAR_34[21] = FUNC_19(VAR_12);
 VAR_34[22] = FUNC_19(VAR_11);
 VAR_34[23] = FUNC_19(VAR_13);


 VAR_34[24] = FUNC_19(VAR_21);
 VAR_34[25] = FUNC_19(VAR_25);
 VAR_34[26] = FUNC_19(VAR_24);
 VAR_34[27] = FUNC_19(VAR_23);


 VAR_34[28] = FUNC_19(VAR_27);
 VAR_34[29] = FUNC_19(VAR_28);






 VAR_34[30] = VAR_32->stats.crcerrs;
 VAR_34[31] = VAR_32->stats.algnerrc;
 VAR_34[32] = VAR_32->stats.symerrs;
 VAR_34[33] = VAR_32->stats.rxerrc;
 VAR_34[34] = VAR_32->stats.mpc;
 VAR_34[35] = VAR_32->stats.scc;
 VAR_34[36] = VAR_32->stats.ecol;
 VAR_34[37] = VAR_32->stats.mcc;
 VAR_34[38] = VAR_32->stats.latecol;
 VAR_34[39] = VAR_32->stats.colc;
 VAR_34[40] = VAR_32->stats.dc;
 VAR_34[41] = VAR_32->stats.tncrs;
 VAR_34[42] = VAR_32->stats.sec;
 VAR_34[43] = VAR_32->stats.htdpmc;
 VAR_34[44] = VAR_32->stats.rlec;
 VAR_34[45] = VAR_32->stats.xonrxc;
 VAR_34[46] = VAR_32->stats.xontxc;
 VAR_34[47] = VAR_32->stats.xoffrxc;
 VAR_34[48] = VAR_32->stats.xofftxc;
 VAR_34[49] = VAR_32->stats.fcruc;
 VAR_34[50] = VAR_32->stats.prc64;
 VAR_34[51] = VAR_32->stats.prc127;
 VAR_34[52] = VAR_32->stats.prc255;
 VAR_34[53] = VAR_32->stats.prc511;
 VAR_34[54] = VAR_32->stats.prc1023;
 VAR_34[55] = VAR_32->stats.prc1522;
 VAR_34[56] = VAR_32->stats.gprc;
 VAR_34[57] = VAR_32->stats.bprc;
 VAR_34[58] = VAR_32->stats.mprc;
 VAR_34[59] = VAR_32->stats.gptc;
 VAR_34[60] = VAR_32->stats.gorc;
 VAR_34[61] = VAR_32->stats.gotc;
 VAR_34[62] = VAR_32->stats.rnbc;
 VAR_34[63] = VAR_32->stats.ruc;
 VAR_34[64] = VAR_32->stats.rfc;
 VAR_34[65] = VAR_32->stats.roc;
 VAR_34[66] = VAR_32->stats.rjc;
 VAR_34[67] = VAR_32->stats.mgprc;
 VAR_34[68] = VAR_32->stats.mgpdc;
 VAR_34[69] = VAR_32->stats.mgptc;
 VAR_34[70] = VAR_32->stats.tor;
 VAR_34[71] = VAR_32->stats.tot;
 VAR_34[72] = VAR_32->stats.tpr;
 VAR_34[73] = VAR_32->stats.tpt;
 VAR_34[74] = VAR_32->stats.ptc64;
 VAR_34[75] = VAR_32->stats.ptc127;
 VAR_34[76] = VAR_32->stats.ptc255;
 VAR_34[77] = VAR_32->stats.ptc511;
 VAR_34[78] = VAR_32->stats.ptc1023;
 VAR_34[79] = VAR_32->stats.ptc1522;
 VAR_34[80] = VAR_32->stats.mptc;
 VAR_34[81] = VAR_32->stats.bptc;
 VAR_34[82] = VAR_32->stats.tsctc;
 VAR_34[83] = VAR_32->stats.iac;
 VAR_34[84] = VAR_32->stats.rpthc;
 VAR_34[85] = VAR_32->stats.hgptc;
 VAR_34[86] = VAR_32->stats.hgorc;
 VAR_34[87] = VAR_32->stats.hgotc;
 VAR_34[88] = VAR_32->stats.lenerrs;
 VAR_34[89] = VAR_32->stats.scvpc;
 VAR_34[90] = VAR_32->stats.hrmpc;

 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[91 + VAR_35] = FUNC_19(FUNC_10(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[95 + VAR_35] = FUNC_19(FUNC_1(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[99 + VAR_35] = FUNC_19(FUNC_5(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[103 + VAR_35] = FUNC_19(FUNC_4(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[107 + VAR_35] = FUNC_19(FUNC_7(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[111 + VAR_35] = FUNC_19(FUNC_6(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[115 + VAR_35] = FUNC_19(FUNC_8(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[119 + VAR_35] = FUNC_19(FUNC_9(VAR_35));

 for (VAR_35 = 0; VAR_35 < 10; VAR_35++)
  VAR_34[123 + VAR_35] = FUNC_19(FUNC_0(VAR_35));
 for (VAR_35 = 0; VAR_35 < 16; VAR_35++)
  VAR_34[139 + VAR_35] = FUNC_19(FUNC_3(VAR_35));
 for (VAR_35 = 0; VAR_35 < 16; VAR_35++)
  VAR_34[145 + VAR_35] = FUNC_19(FUNC_2(VAR_35));

 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[149 + VAR_35] = FUNC_19(FUNC_12(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[152 + VAR_35] = FUNC_19(FUNC_11(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[156 + VAR_35] = FUNC_19(FUNC_14(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[160 + VAR_35] = FUNC_19(FUNC_13(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[164 + VAR_35] = FUNC_19(FUNC_15(VAR_35));
 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  VAR_34[168 + VAR_35] = FUNC_19(FUNC_16(VAR_35));
}
