
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int n_per_out; int * verify; int do_aux_work; int enable; int settime64; int * getcrosststamp; int gettime64; int adjtime; int adjfreq; int adjfine; int * pin_config; scalar_t__ pps; scalar_t__ n_pins; scalar_t__ n_ext_ts; scalar_t__ n_alarm; int max_adj; int name; int owner; } ;
struct lan743x_ptp {int flags; int ptp_clock; TYPE_3__ ptp_clock_info; TYPE_1__* pin_config; } ;
struct lan743x_adapter {TYPE_4__* netdev; TYPE_2__* pdev; struct lan743x_ptp ptp; } ;
struct TYPE_9__ {int dev_addr; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {scalar_t__ chan; int func; scalar_t__ index; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
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
 int FUNC_2 (struct lan743x_adapter*,int ) ;
 int FUNC_3 (struct lan743x_adapter*,int ,int) ;
 int FUNC_4 (struct lan743x_adapter*) ;
 int FUNC_5 (struct lan743x_adapter*) ;
 int FUNC_6 (struct lan743x_adapter*) ;
 int FUNC_7 (struct lan743x_adapter*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (struct lan743x_adapter*,int ,TYPE_4__*,char*) ;
 int FUNC_9 (struct lan743x_adapter*,int ,TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (int ,int,char*,...) ;

int FUNC_12(struct lan743x_adapter *VAR_22)
{
 struct lan743x_ptp *VAR_23 = &VAR_22->ptp;
 int VAR_24 = -VAR_1;
 u32 VAR_25;

 FUNC_6(VAR_22);
 FUNC_7(VAR_22);
 VAR_25 = FUNC_2(VAR_22, VAR_11);
 VAR_25 |= VAR_12;
 FUNC_3(VAR_22, VAR_11, VAR_25);
 FUNC_5(VAR_22);
 FUNC_3(VAR_22, VAR_3, VAR_2);
 FUNC_3(VAR_22, VAR_9,
     VAR_7 | VAR_8);
 VAR_23->flags |= VAR_5;

 if (!FUNC_0(VAR_0))
  return 0;

 FUNC_11(VAR_23->pin_config[0].name, 32, "lan743x_ptp_pin_0");
 VAR_23->pin_config[0].index = 0;
 VAR_23->pin_config[0].func = VAR_10;
 VAR_23->pin_config[0].chan = 0;

 VAR_23->ptp_clock_info.owner = VAR_13;
 FUNC_11(VAR_23->ptp_clock_info.name, 16, "%pm",
   VAR_22->netdev->dev_addr);
 VAR_23->ptp_clock_info.max_adj = VAR_4;
 VAR_23->ptp_clock_info.n_alarm = 0;
 VAR_23->ptp_clock_info.n_ext_ts = 0;
 VAR_23->ptp_clock_info.n_per_out = 1;
 VAR_23->ptp_clock_info.n_pins = 0;
 VAR_23->ptp_clock_info.pps = 0;
 VAR_23->ptp_clock_info.pin_config = ((void*)0);
 VAR_23->ptp_clock_info.adjfine = VAR_15;
 VAR_23->ptp_clock_info.adjfreq = VAR_16;
 VAR_23->ptp_clock_info.adjtime = VAR_17;
 VAR_23->ptp_clock_info.gettime64 = VAR_20;
 VAR_23->ptp_clock_info.getcrosststamp = ((void*)0);
 VAR_23->ptp_clock_info.settime64 = VAR_21;
 VAR_23->ptp_clock_info.enable = VAR_19;
 VAR_23->ptp_clock_info.do_aux_work = VAR_18;
 VAR_23->ptp_clock_info.verify = ((void*)0);

 VAR_23->ptp_clock = FUNC_10(&VAR_23->ptp_clock_info,
         &VAR_22->pdev->dev);

 if (FUNC_1(VAR_23->ptp_clock)) {
  FUNC_8(VAR_22, VAR_14, VAR_22->netdev,
     "ptp_clock_register failed\n");
  goto done;
 }
 VAR_23->flags |= VAR_6;
 FUNC_9(VAR_22, VAR_14, VAR_22->netdev,
     "successfully registered ptp clock\n");

 return 0;
done:
 FUNC_4(VAR_22);
 return VAR_24;
}
