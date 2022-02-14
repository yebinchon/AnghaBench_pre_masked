
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {char* name; } ;
struct TYPE_9__ {int tx_type; int rx_filter; } ;
struct TYPE_10__ {int max_adj; int pps; void* enable; void* settime64; void* gettimex64; void* adjtime; void* adjfreq; int n_per_out; int n_ext_ts; int n_alarm; void* owner; int name; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_4__ tstamp_config; int * ptp_clock; TYPE_3__* pdev; TYPE_5__ ptp_caps; int * ptp_setup_sdp; TYPE_2__ hw; struct net_device* netdev; } ;
struct TYPE_8__ {int dev; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 void* VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;





 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (int ,int,char*,char*) ;

__attribute__((used)) static long FUNC_7(struct ixgbe_adapter *VAR_12)
{
 struct net_device *VAR_13 = VAR_12->netdev;
 long VAR_14;


 if (!FUNC_1(VAR_12->ptp_clock))
  return 0;

 switch (VAR_12->hw.mac.type) {
 case 131:
  FUNC_6(VAR_12->ptp_caps.name,
    sizeof(VAR_12->ptp_caps.name),
    "%s", VAR_13->name);
  VAR_12->ptp_caps.owner = VAR_3;
  VAR_12->ptp_caps.max_adj = 250000000;
  VAR_12->ptp_caps.n_alarm = 0;
  VAR_12->ptp_caps.n_ext_ts = 0;
  VAR_12->ptp_caps.n_per_out = 0;
  VAR_12->ptp_caps.pps = 1;
  VAR_12->ptp_caps.adjfreq = VAR_4;
  VAR_12->ptp_caps.adjtime = VAR_6;
  VAR_12->ptp_caps.gettimex64 = VAR_8;
  VAR_12->ptp_caps.settime64 = VAR_9;
  VAR_12->ptp_caps.enable = VAR_7;
  VAR_12->ptp_setup_sdp = VAR_10;
  break;
 case 132:
  FUNC_6(VAR_12->ptp_caps.name,
    sizeof(VAR_12->ptp_caps.name),
    "%s", VAR_13->name);
  VAR_12->ptp_caps.owner = VAR_3;
  VAR_12->ptp_caps.max_adj = 250000000;
  VAR_12->ptp_caps.n_alarm = 0;
  VAR_12->ptp_caps.n_ext_ts = 0;
  VAR_12->ptp_caps.n_per_out = 0;
  VAR_12->ptp_caps.pps = 0;
  VAR_12->ptp_caps.adjfreq = VAR_4;
  VAR_12->ptp_caps.adjtime = VAR_6;
  VAR_12->ptp_caps.gettimex64 = VAR_8;
  VAR_12->ptp_caps.settime64 = VAR_9;
  VAR_12->ptp_caps.enable = VAR_7;
  break;
 case 130:
 case 129:
 case 128:
  FUNC_6(VAR_12->ptp_caps.name, 16, "%s", VAR_13->name);
  VAR_12->ptp_caps.owner = VAR_3;
  VAR_12->ptp_caps.max_adj = 30000000;
  VAR_12->ptp_caps.n_alarm = 0;
  VAR_12->ptp_caps.n_ext_ts = 0;
  VAR_12->ptp_caps.n_per_out = 0;
  VAR_12->ptp_caps.pps = 1;
  VAR_12->ptp_caps.adjfreq = VAR_5;
  VAR_12->ptp_caps.adjtime = VAR_6;
  VAR_12->ptp_caps.gettimex64 = VAR_8;
  VAR_12->ptp_caps.settime64 = VAR_9;
  VAR_12->ptp_caps.enable = VAR_7;
  VAR_12->ptp_setup_sdp = VAR_11;
  break;
 default:
  VAR_12->ptp_clock = ((void*)0);
  VAR_12->ptp_setup_sdp = ((void*)0);
  return -VAR_0;
 }

 VAR_12->ptp_clock = FUNC_5(&VAR_12->ptp_caps,
      &VAR_12->pdev->dev);
 if (FUNC_0(VAR_12->ptp_clock)) {
  VAR_14 = FUNC_2(VAR_12->ptp_clock);
  VAR_12->ptp_clock = ((void*)0);
  FUNC_3("ptp_clock_register failed\n");
  return VAR_14;
 } else if (VAR_12->ptp_clock)
  FUNC_4("registered PHC device on %s\n", VAR_13->name);





 VAR_12->tstamp_config.rx_filter = VAR_1;
 VAR_12->tstamp_config.tx_type = VAR_2;

 return 0;
}
