
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptp_en; int ext_clk_in; int ext_clk_en; } ;
union cvmx_mio_ptp_clock_cfg {int u64; TYPE_1__ s; } ;
struct TYPE_4__ {int ptp_mode; } ;
union cvmx_agl_gmx_rxx_frm_ctl {int u64; TYPE_2__ s; } ;
typedef int u64 ;
struct octeon_mgmt {int has_rx_tstamp; scalar_t__ agl; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int config ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct hwtstamp_config*,int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct net_device*,char*,int,...) ;
 struct octeon_mgmt* FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_8,
          struct ifreq *VAR_9, int VAR_10)
{
 struct octeon_mgmt *VAR_11 = FUNC_6(VAR_8);
 struct hwtstamp_config VAR_12;
 union cvmx_mio_ptp_clock_cfg VAR_13;
 union cvmx_agl_gmx_rxx_frm_ctl VAR_14;
 bool VAR_15 = 0;

 if (FUNC_1(&VAR_12, VAR_9->ifr_data, sizeof(VAR_12)))
  return -VAR_3;

 if (VAR_12.flags)
  return -VAR_4;


 if (FUNC_0(VAR_7)) {

  VAR_13.u64 = FUNC_3(VAR_1);
  if (!VAR_13.s.ext_clk_en) {




   u64 VAR_16 = (VAR_6 << 32) / FUNC_7();
   if (!VAR_13.s.ptp_en)
    FUNC_4(VAR_2, VAR_16);
   FUNC_5(VAR_8,
        "PTP Clock using sclk reference @ %lldHz\n",
        (VAR_6 << 32) / VAR_16);
  } else {

   u64 VAR_17 = FUNC_3(VAR_2);
   FUNC_5(VAR_8,
        "PTP Clock using GPIO%d @ %lld Hz\n",
        VAR_13.s.ext_clk_in, (VAR_6 << 32) / VAR_17);
  }


  if (!VAR_13.s.ptp_en) {
   VAR_13.s.ptp_en = 1;
   FUNC_4(VAR_1, VAR_13.u64);
  }
  VAR_15 = 1;
 }

 if (!VAR_15)
  return -VAR_4;

 switch (VAR_12.tx_type) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_5;
 }

 switch (VAR_12.rx_filter) {
 case 144:
  VAR_11->has_rx_tstamp = 0;
  VAR_14.u64 = FUNC_3(VAR_11->agl + VAR_0);
  VAR_14.s.ptp_mode = 0;
  FUNC_4(VAR_11->agl + VAR_0, VAR_14.u64);
  break;
 case 145:
 case 130:
 case 141:
 case 140:
 case 142:
 case 133:
 case 132:
 case 134:
 case 136:
 case 135:
 case 137:
 case 138:
 case 131:
 case 139:
 case 143:
  VAR_11->has_rx_tstamp = VAR_15;
  VAR_12.rx_filter = 145;
  if (VAR_11->has_rx_tstamp) {
   VAR_14.u64 = FUNC_3(VAR_11->agl + VAR_0);
   VAR_14.s.ptp_mode = 1;
   FUNC_4(VAR_11->agl + VAR_0, VAR_14.u64);
  }
  break;
 default:
  return -VAR_5;
 }

 if (FUNC_2(VAR_9->ifr_data, &VAR_12, sizeof(VAR_12)))
  return -VAR_3;

 return 0;
}
