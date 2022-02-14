
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tx_type; int rx_filter; } ;
struct TYPE_6__ {int max_adj; int enable; int settime64; int gettimex64; int adjtime; int adjfreq; scalar_t__ pps; scalar_t__ n_ext_ts; int owner; int name; } ;
struct i40e_pf {int ptp_reset_start; int ptp_prev_hw_time; TYPE_2__ tstamp_config; int ptp_clock; TYPE_1__* pdev; TYPE_3__ ptp_caps; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static long FUNC_7(struct i40e_pf *VAR_9)
{

 if (!FUNC_1(VAR_9->ptp_clock))
  return 0;

 FUNC_6(VAR_9->ptp_caps.name, VAR_3,
  sizeof(VAR_9->ptp_caps.name) - 1);
 VAR_9->ptp_caps.owner = VAR_2;
 VAR_9->ptp_caps.max_adj = 999999999;
 VAR_9->ptp_caps.n_ext_ts = 0;
 VAR_9->ptp_caps.pps = 0;
 VAR_9->ptp_caps.adjfreq = VAR_4;
 VAR_9->ptp_caps.adjtime = VAR_5;
 VAR_9->ptp_caps.gettimex64 = VAR_7;
 VAR_9->ptp_caps.settime64 = VAR_8;
 VAR_9->ptp_caps.enable = VAR_6;


 VAR_9->ptp_clock = FUNC_5(&VAR_9->ptp_caps, &VAR_9->pdev->dev);
 if (FUNC_0(VAR_9->ptp_clock))
  return FUNC_2(VAR_9->ptp_clock);





 VAR_9->tstamp_config.rx_filter = VAR_0;
 VAR_9->tstamp_config.tx_type = VAR_1;


 FUNC_4(&VAR_9->ptp_prev_hw_time);
 VAR_9->ptp_reset_start = FUNC_3();

 return 0;
}
