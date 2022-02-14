
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int minor; int major; int class; int resv; } ;
struct TYPE_3__ {int num_rx_rings; int num_tx_rings; scalar_t__ is_vf; } ;
struct nfp_net {int cap; int app; int max_mtu; TYPE_2__ fw_ver; int max_rx_rings; TYPE_1__ dp; int max_tx_rings; } ;


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
 int FUNC_0 (int ,struct nfp_net*) ;
 int FUNC_1 (struct nfp_net*,char*,...) ;

void FUNC_2(struct nfp_net *VAR_20)
{
 FUNC_1(VAR_20, "Netronome NFP-6xxx %sNetdev: TxQs=%d/%d RxQs=%d/%d\n",
  VAR_20->dp.is_vf ? "VF " : "",
  VAR_20->dp.num_tx_rings, VAR_20->max_tx_rings,
  VAR_20->dp.num_rx_rings, VAR_20->max_rx_rings);
 FUNC_1(VAR_20, "VER: %d.%d.%d.%d, Maximum supported MTU: %d\n",
  VAR_20->fw_ver.resv, VAR_20->fw_ver.class,
  VAR_20->fw_ver.major, VAR_20->fw_ver.minor,
  VAR_20->max_mtu);
 FUNC_1(VAR_20, "CAP: %#x %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",
  VAR_20->cap,
  VAR_20->cap & VAR_11 ? "PROMISC " : "",
  VAR_20->cap & VAR_4 ? "L2BCFILT " : "",
  VAR_20->cap & VAR_5 ? "L2MCFILT " : "",
  VAR_20->cap & VAR_14 ? "RXCSUM " : "",
  VAR_20->cap & VAR_17 ? "TXCSUM " : "",
  VAR_20->cap & VAR_15 ? "RXVLAN " : "",
  VAR_20->cap & VAR_18 ? "TXVLAN " : "",
  VAR_20->cap & VAR_16 ? "SCATTER " : "",
  VAR_20->cap & VAR_2 ? "GATHER " : "",
  VAR_20->cap & VAR_7 ? "TSO1 " : "",
  VAR_20->cap & VAR_8 ? "TSO2 " : "",
  VAR_20->cap & VAR_12 ? "RSS1 " : "",
  VAR_20->cap & VAR_13 ? "RSS2 " : "",
  VAR_20->cap & VAR_1 ? "CTAG_FILTER " : "",
  VAR_20->cap & VAR_9 ? "AUTOMASK " : "",
  VAR_20->cap & VAR_3 ? "IRQMOD " : "",
  VAR_20->cap & VAR_19 ? "VXLAN " : "",
  VAR_20->cap & VAR_10 ? "NVGRE " : "",
  VAR_20->cap & VAR_0 ?
            "RXCSUM_COMPLETE " : "",
  VAR_20->cap & VAR_6 ? "LIVE_ADDR " : "",
  FUNC_0(VAR_20->app, VAR_20));
}
