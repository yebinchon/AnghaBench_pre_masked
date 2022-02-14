
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int multicast; int rx_errors; int rx_crc_errors; int rx_fifo_errors; int rx_missed_errors; int rx_over_errors; scalar_t__ tx_window_errors; scalar_t__ tx_heartbeat_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_frame_errors; scalar_t__ tx_errors; scalar_t__ collisions; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int flags; TYPE_2__ stats; } ;
struct TYPE_3__ {int mprcl; int mprch; int bprcl; int ruc; int roc; int crcerrs; int icbc; int ecbc; int mpc; int gotcl; int gorcl; int gptcl; int gprcl; int rjc; int xofftxc; int xoffrxc; int xontxc; int xonrxc; int mcftc; int mcfrc; int pftc; int pfrc; int lfc; int rfc; int ibic; int tsctfc; int tsctc; int plt64c; int dc; int toth; int totl; int gotch; int jptch; int jptcl; int vptch; int vptcl; int uptch; int uptcl; int mptch; int mptcl; int bptch; int bptcl; int gptch; int tpth; int tptl; int rlec; int rnbc; int torh; int torl; int gorch; int jprch; int jprcl; int vprch; int vprcl; int uprch; int uprcl; int gprch; int tprh; int tprl; int bprch; } ;
struct ixgb_adapter {TYPE_1__ stats; int hw; struct pci_dev* pdev; struct net_device* netdev; } ;


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
 scalar_t__ VAR_19 ;
 int FUNC_0 (int *,int ) ;
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
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

void
FUNC_3(struct ixgb_adapter *VAR_63)
{
 struct net_device *VAR_64 = VAR_63->netdev;
 struct pci_dev *VAR_65 = VAR_63->pdev;


 if (FUNC_2(VAR_65))
  return;

 if ((VAR_64->flags & VAR_18) || (VAR_64->flags & VAR_17) ||
    (FUNC_1(VAR_64) > VAR_19)) {
  u64 VAR_66 = FUNC_0(&VAR_63->hw, VAR_29);
  u32 VAR_67 = FUNC_0(&VAR_63->hw, VAR_1);
  u32 VAR_68 = FUNC_0(&VAR_63->hw, VAR_0);
  u64 VAR_69 = ((u64)VAR_68 << 32) | VAR_67;

  VAR_66 |= ((u64)FUNC_0(&VAR_63->hw, VAR_28) << 32);

  if (VAR_66 >= VAR_69)
   VAR_66 -= VAR_69;

  VAR_63->stats.mprcl += (VAR_66 & 0xFFFFFFFF);
  VAR_63->stats.mprch += (VAR_66 >> 32);
  VAR_63->stats.bprcl += VAR_67;
  VAR_63->stats.bprch += VAR_68;
 } else {
  VAR_63->stats.mprcl += FUNC_0(&VAR_63->hw, VAR_29);
  VAR_63->stats.mprch += FUNC_0(&VAR_63->hw, VAR_28);
  VAR_63->stats.bprcl += FUNC_0(&VAR_63->hw, VAR_1);
  VAR_63->stats.bprch += FUNC_0(&VAR_63->hw, VAR_0);
 }
 VAR_63->stats.tprl += FUNC_0(&VAR_63->hw, VAR_46);
 VAR_63->stats.tprh += FUNC_0(&VAR_63->hw, VAR_45);
 VAR_63->stats.gprcl += FUNC_0(&VAR_63->hw, VAR_12);
 VAR_63->stats.gprch += FUNC_0(&VAR_63->hw, VAR_11);
 VAR_63->stats.uprcl += FUNC_0(&VAR_63->hw, VAR_52);
 VAR_63->stats.uprch += FUNC_0(&VAR_63->hw, VAR_51);
 VAR_63->stats.vprcl += FUNC_0(&VAR_63->hw, VAR_56);
 VAR_63->stats.vprch += FUNC_0(&VAR_63->hw, VAR_55);
 VAR_63->stats.jprcl += FUNC_0(&VAR_63->hw, VAR_21);
 VAR_63->stats.jprch += FUNC_0(&VAR_63->hw, VAR_20);
 VAR_63->stats.gorcl += FUNC_0(&VAR_63->hw, VAR_8);
 VAR_63->stats.gorch += FUNC_0(&VAR_63->hw, VAR_7);
 VAR_63->stats.torl += FUNC_0(&VAR_63->hw, VAR_42);
 VAR_63->stats.torh += FUNC_0(&VAR_63->hw, VAR_41);
 VAR_63->stats.rnbc += FUNC_0(&VAR_63->hw, VAR_38);
 VAR_63->stats.ruc += FUNC_0(&VAR_63->hw, VAR_40);
 VAR_63->stats.roc += FUNC_0(&VAR_63->hw, VAR_39);
 VAR_63->stats.rlec += FUNC_0(&VAR_63->hw, VAR_37);
 VAR_63->stats.crcerrs += FUNC_0(&VAR_63->hw, VAR_4);
 VAR_63->stats.icbc += FUNC_0(&VAR_63->hw, VAR_16);
 VAR_63->stats.ecbc += FUNC_0(&VAR_63->hw, VAR_6);
 VAR_63->stats.mpc += FUNC_0(&VAR_63->hw, VAR_27);
 VAR_63->stats.tptl += FUNC_0(&VAR_63->hw, VAR_48);
 VAR_63->stats.tpth += FUNC_0(&VAR_63->hw, VAR_47);
 VAR_63->stats.gptcl += FUNC_0(&VAR_63->hw, VAR_14);
 VAR_63->stats.gptch += FUNC_0(&VAR_63->hw, VAR_13);
 VAR_63->stats.bptcl += FUNC_0(&VAR_63->hw, VAR_3);
 VAR_63->stats.bptch += FUNC_0(&VAR_63->hw, VAR_2);
 VAR_63->stats.mptcl += FUNC_0(&VAR_63->hw, VAR_31);
 VAR_63->stats.mptch += FUNC_0(&VAR_63->hw, VAR_30);
 VAR_63->stats.uptcl += FUNC_0(&VAR_63->hw, VAR_54);
 VAR_63->stats.uptch += FUNC_0(&VAR_63->hw, VAR_53);
 VAR_63->stats.vptcl += FUNC_0(&VAR_63->hw, VAR_58);
 VAR_63->stats.vptch += FUNC_0(&VAR_63->hw, VAR_57);
 VAR_63->stats.jptcl += FUNC_0(&VAR_63->hw, VAR_23);
 VAR_63->stats.jptch += FUNC_0(&VAR_63->hw, VAR_22);
 VAR_63->stats.gotcl += FUNC_0(&VAR_63->hw, VAR_10);
 VAR_63->stats.gotch += FUNC_0(&VAR_63->hw, VAR_9);
 VAR_63->stats.totl += FUNC_0(&VAR_63->hw, VAR_44);
 VAR_63->stats.toth += FUNC_0(&VAR_63->hw, VAR_43);
 VAR_63->stats.dc += FUNC_0(&VAR_63->hw, VAR_5);
 VAR_63->stats.plt64c += FUNC_0(&VAR_63->hw, VAR_34);
 VAR_63->stats.tsctc += FUNC_0(&VAR_63->hw, VAR_49);
 VAR_63->stats.tsctfc += FUNC_0(&VAR_63->hw, VAR_50);
 VAR_63->stats.ibic += FUNC_0(&VAR_63->hw, VAR_15);
 VAR_63->stats.rfc += FUNC_0(&VAR_63->hw, VAR_35);
 VAR_63->stats.lfc += FUNC_0(&VAR_63->hw, VAR_24);
 VAR_63->stats.pfrc += FUNC_0(&VAR_63->hw, VAR_32);
 VAR_63->stats.pftc += FUNC_0(&VAR_63->hw, VAR_33);
 VAR_63->stats.mcfrc += FUNC_0(&VAR_63->hw, VAR_25);
 VAR_63->stats.mcftc += FUNC_0(&VAR_63->hw, VAR_26);
 VAR_63->stats.xonrxc += FUNC_0(&VAR_63->hw, VAR_61);
 VAR_63->stats.xontxc += FUNC_0(&VAR_63->hw, VAR_62);
 VAR_63->stats.xoffrxc += FUNC_0(&VAR_63->hw, VAR_59);
 VAR_63->stats.xofftxc += FUNC_0(&VAR_63->hw, VAR_60);
 VAR_63->stats.rjc += FUNC_0(&VAR_63->hw, VAR_36);



 VAR_64->stats.rx_packets = VAR_63->stats.gprcl;
 VAR_64->stats.tx_packets = VAR_63->stats.gptcl;
 VAR_64->stats.rx_bytes = VAR_63->stats.gorcl;
 VAR_64->stats.tx_bytes = VAR_63->stats.gotcl;
 VAR_64->stats.multicast = VAR_63->stats.mprcl;
 VAR_64->stats.collisions = 0;



 VAR_64->stats.rx_errors =
                                 VAR_63->stats.crcerrs +
     VAR_63->stats.ruc +
     VAR_63->stats.roc +
     VAR_63->stats.icbc +
     VAR_63->stats.ecbc + VAR_63->stats.mpc;





 VAR_64->stats.rx_crc_errors = VAR_63->stats.crcerrs;
 VAR_64->stats.rx_fifo_errors = VAR_63->stats.mpc;
 VAR_64->stats.rx_missed_errors = VAR_63->stats.mpc;
 VAR_64->stats.rx_over_errors = VAR_63->stats.mpc;

 VAR_64->stats.tx_errors = 0;
 VAR_64->stats.rx_frame_errors = 0;
 VAR_64->stats.tx_aborted_errors = 0;
 VAR_64->stats.tx_carrier_errors = 0;
 VAR_64->stats.tx_fifo_errors = 0;
 VAR_64->stats.tx_heartbeat_errors = 0;
 VAR_64->stats.tx_window_errors = 0;
}
