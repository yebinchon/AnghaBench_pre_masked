
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int rx_filter; int tx_type; } ;
struct cyclecounter {int mult; scalar_t__ shift; int mask; int read; } ;
struct ptp_clock_info {int enable; int settime64; int gettime64; int adjtime; int adjfreq; int max_adj; int owner; int name; } ;
struct xgbe_prv_data {TYPE_1__ tstamp_config; struct cyclecounter tstamp_cc; int tstamp_tc; int ptpclk_rate; int tstamp_addend; struct ptp_clock* ptp_clock; int dev; int netdev; struct ptp_clock_info ptp_clock_info; } ;
struct ptp_clock {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ptp_clock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 struct ptp_clock* FUNC_8 (struct ptp_clock_info*,int ) ;
 int FUNC_9 (int ,int,char*,char*) ;
 int FUNC_10 (int *,struct cyclecounter*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_11(struct xgbe_prv_data *VAR_10)
{
 struct ptp_clock_info *VAR_11 = &VAR_10->ptp_clock_info;
 struct ptp_clock *VAR_12;
 struct cyclecounter *VAR_13 = &VAR_10->tstamp_cc;
 u64 VAR_14;

 FUNC_9(VAR_11->name, sizeof(VAR_11->name), "%s",
   FUNC_7(VAR_10->netdev));
 VAR_11->owner = VAR_3;
 VAR_11->max_adj = VAR_10->ptpclk_rate;
 VAR_11->adjfreq = VAR_4;
 VAR_11->adjtime = VAR_5;
 VAR_11->gettime64 = VAR_8;
 VAR_11->settime64 = VAR_9;
 VAR_11->enable = VAR_7;

 VAR_12 = FUNC_8(VAR_11, VAR_10->dev);
 if (FUNC_1(VAR_12)) {
  FUNC_3(VAR_10->dev, "ptp_clock_register failed\n");
  return;
 }

 VAR_10->ptp_clock = VAR_12;





 VAR_14 = 50000000;
 VAR_14 <<= 32;
 VAR_10->tstamp_addend = FUNC_4(VAR_14, VAR_10->ptpclk_rate);


 VAR_13->read = VAR_6;
 VAR_13->mask = FUNC_0(64);
 VAR_13->mult = 1;
 VAR_13->shift = 0;

 FUNC_10(&VAR_10->tstamp_tc, &VAR_10->tstamp_cc,
    FUNC_6(FUNC_5()));


 FUNC_2(VAR_10, VAR_2, 0);
 VAR_10->tstamp_config.tx_type = VAR_1;
 VAR_10->tstamp_config.rx_filter = VAR_0;
}
