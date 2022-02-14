
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; int name; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int max_adj; int pps; int enable; int settime64; int gettime64; int adjtime; int adjfreq; scalar_t__ n_pins; scalar_t__ n_per_out; scalar_t__ n_ext_ts; scalar_t__ n_alarm; int name; int owner; } ;
struct fec_enet_private {int cycle_speed; int ptp_inc; int time_keep; int * ptp_clock; TYPE_1__ ptp_caps; int tmreg_lock; int clk_ptp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int,int ,int ,int ,struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct net_device*) ;
 int VAR_9 ;
 struct fec_enet_private* FUNC_7 (struct net_device*) ;
 struct net_device* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*,char*) ;
 int FUNC_10 (struct platform_device*,int) ;
 int * FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int,char*) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct platform_device *VAR_10, int VAR_11)
{
 struct net_device *VAR_12 = FUNC_8(VAR_10);
 struct fec_enet_private *VAR_13 = FUNC_7(VAR_12);
 int VAR_14;
 int VAR_15;

 VAR_13->ptp_caps.owner = VAR_2;
 FUNC_13(VAR_13->ptp_caps.name, 16, "fec ptp");

 VAR_13->ptp_caps.max_adj = 250000000;
 VAR_13->ptp_caps.n_alarm = 0;
 VAR_13->ptp_caps.n_ext_ts = 0;
 VAR_13->ptp_caps.n_per_out = 0;
 VAR_13->ptp_caps.n_pins = 0;
 VAR_13->ptp_caps.pps = 1;
 VAR_13->ptp_caps.adjfreq = VAR_4;
 VAR_13->ptp_caps.adjtime = VAR_5;
 VAR_13->ptp_caps.gettime64 = VAR_7;
 VAR_13->ptp_caps.settime64 = VAR_8;
 VAR_13->ptp_caps.enable = VAR_6;

 VAR_13->cycle_speed = FUNC_2(VAR_13->clk_ptp);
 VAR_13->ptp_inc = VAR_1 / VAR_13->cycle_speed;

 FUNC_14(&VAR_13->tmreg_lock);

 FUNC_6(VAR_12);

 FUNC_0(&VAR_13->time_keep, VAR_9);

 VAR_14 = FUNC_9(VAR_10, "pps");
 if (VAR_14 < 0)
  VAR_14 = FUNC_10(VAR_10, VAR_11);



 if (VAR_14 >= 0) {
  VAR_15 = FUNC_5(&VAR_10->dev, VAR_14, VAR_3,
           0, VAR_10->name, VAR_12);
  if (VAR_15 < 0)
   FUNC_4(&VAR_10->dev, "request for pps irq failed(%d)\n",
     VAR_15);
 }

 VAR_13->ptp_clock = FUNC_11(&VAR_13->ptp_caps, &VAR_10->dev);
 if (FUNC_1(VAR_13->ptp_clock)) {
  VAR_13->ptp_clock = ((void*)0);
  FUNC_3(&VAR_10->dev, "ptp_clock_register failed\n");
 }

 FUNC_12(&VAR_13->time_keep, VAR_0);
}
