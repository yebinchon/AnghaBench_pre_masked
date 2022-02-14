
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {void* freq; } ;
struct TYPE_6__ {int ctrlmode_supported; TYPE_1__ clock; } ;
struct can_bittiming_const {void* brp_inc; void* brp_max; void* brp_min; int sjw_max; int tseg2_max; int tseg2_min; int tseg1_max; int tseg1_min; int name; } ;
struct TYPE_5__ {int tx_fifo; struct can_bittiming_const bittiming_const; } ;
struct ucan_priv {TYPE_3__ can; TYPE_2__ device_info; } ;
struct ucan_ctl_cmd_device_info {int ctrlmodes; int brp_inc; int brp_max; int brp_min; int sjw_max; int tseg2_max; int tseg2_min; int tseg1_max; int tseg1_min; int tx_fifo; int freq; } ;


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
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct ucan_priv *VAR_10,
       struct ucan_ctl_cmd_device_info *VAR_11)
{
 struct can_bittiming_const *VAR_12 =
  &VAR_10->device_info.bittiming_const;
 u16 VAR_13;


 VAR_10->can.clock.freq = FUNC_1(VAR_11->freq);
 VAR_10->device_info.tx_fifo = VAR_11->tx_fifo;
 FUNC_2(VAR_12->name, "ucan");
 VAR_12->tseg1_min = VAR_11->tseg1_min;
 VAR_12->tseg1_max = VAR_11->tseg1_max;
 VAR_12->tseg2_min = VAR_11->tseg2_min;
 VAR_12->tseg2_max = VAR_11->tseg2_max;
 VAR_12->sjw_max = VAR_11->sjw_max;
 VAR_12->brp_min = FUNC_1(VAR_11->brp_min);
 VAR_12->brp_max = FUNC_1(VAR_11->brp_max);
 VAR_12->brp_inc = FUNC_0(VAR_11->brp_inc);

 VAR_13 = FUNC_0(VAR_11->ctrlmodes);

 VAR_10->can.ctrlmode_supported = 0;

 if (VAR_13 & VAR_7)
  VAR_10->can.ctrlmode_supported |= VAR_3;
 if (VAR_13 & VAR_9)
  VAR_10->can.ctrlmode_supported |= VAR_2;
 if (VAR_13 & VAR_5)
  VAR_10->can.ctrlmode_supported |= VAR_0;
 if (VAR_13 & VAR_8)
  VAR_10->can.ctrlmode_supported |= VAR_4;
 if (VAR_13 & VAR_6)
  VAR_10->can.ctrlmode_supported |= VAR_1;
}
