
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ptp_pin_desc {int index; int func; int name; } ;
struct net_device {int dev_addr; int name; } ;
struct TYPE_10__ {int max_adj; int pps; int n_pins; int verify; void* enable; void* settime64; int gettimex64; void* adjtime; void* adjfine; struct ptp_pin_desc* pin_config; int n_per_out; int n_ext_ts; void* owner; int name; int adjfreq; } ;
struct TYPE_6__ {int tx_type; int rx_filter; } ;
struct TYPE_9__ {int mult; int shift; void* mask; int read; } ;
struct TYPE_8__ {int type; } ;
struct e1000_hw {TYPE_3__ mac; } ;
struct igb_adapter {int ptp_flags; struct net_device* netdev; TYPE_2__* pdev; int * ptp_clock; TYPE_5__ ptp_caps; TYPE_1__ tstamp_config; int ptp_overflow_work; int ptp_tx_work; int tmreg_lock; struct ptp_pin_desc* sdp_config; TYPE_4__ cc; struct e1000_hw hw; } ;
struct TYPE_7__ {int dev; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;






 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (struct igb_adapter*) ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int * FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (int ,int,char*,int) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct igb_adapter *VAR_27)
{
 struct e1000_hw *VAR_28 = &VAR_27->hw;
 struct net_device *VAR_29 = VAR_27->netdev;
 int VAR_30;

 switch (VAR_28->mac.type) {
 case 133:
  FUNC_8(VAR_27->ptp_caps.name, 16, "%pm", VAR_29->dev_addr);
  VAR_27->ptp_caps.owner = VAR_10;
  VAR_27->ptp_caps.max_adj = 999999881;
  VAR_27->ptp_caps.n_ext_ts = 0;
  VAR_27->ptp_caps.pps = 0;
  VAR_27->ptp_caps.adjfreq = VAR_12;
  VAR_27->ptp_caps.adjtime = VAR_13;
  VAR_27->ptp_caps.gettimex64 = VAR_17;
  VAR_27->ptp_caps.settime64 = VAR_23;
  VAR_27->ptp_caps.enable = VAR_15;
  VAR_27->cc.read = VAR_21;
  VAR_27->cc.mask = FUNC_0(64);
  VAR_27->cc.mult = 1;
  VAR_27->cc.shift = VAR_2;
  VAR_27->ptp_flags |= VAR_8;
  break;
 case 132:
 case 128:
 case 129:
  FUNC_8(VAR_27->ptp_caps.name, 16, "%pm", VAR_29->dev_addr);
  VAR_27->ptp_caps.owner = VAR_10;
  VAR_27->ptp_caps.max_adj = 62499999;
  VAR_27->ptp_caps.n_ext_ts = 0;
  VAR_27->ptp_caps.pps = 0;
  VAR_27->ptp_caps.adjfine = VAR_11;
  VAR_27->ptp_caps.adjtime = VAR_13;
  VAR_27->ptp_caps.gettimex64 = VAR_18;
  VAR_27->ptp_caps.settime64 = VAR_23;
  VAR_27->ptp_caps.enable = VAR_15;
  VAR_27->cc.read = VAR_22;
  VAR_27->cc.mask = FUNC_0(VAR_3);
  VAR_27->cc.mult = 1;
  VAR_27->cc.shift = 0;
  VAR_27->ptp_flags |= VAR_8;
  break;
 case 131:
 case 130:
  for (VAR_30 = 0; VAR_30 < VAR_6; VAR_30++) {
   struct ptp_pin_desc *VAR_31 = &VAR_27->sdp_config[VAR_30];

   FUNC_8(VAR_31->name, sizeof(VAR_31->name), "SDP%d", VAR_30);
   VAR_31->index = VAR_30;
   VAR_31->func = VAR_9;
  }
  FUNC_8(VAR_27->ptp_caps.name, 16, "%pm", VAR_29->dev_addr);
  VAR_27->ptp_caps.owner = VAR_10;
  VAR_27->ptp_caps.max_adj = 62499999;
  VAR_27->ptp_caps.n_ext_ts = VAR_4;
  VAR_27->ptp_caps.n_per_out = VAR_5;
  VAR_27->ptp_caps.n_pins = VAR_6;
  VAR_27->ptp_caps.pps = 1;
  VAR_27->ptp_caps.pin_config = VAR_27->sdp_config;
  VAR_27->ptp_caps.adjfine = VAR_11;
  VAR_27->ptp_caps.adjtime = VAR_14;
  VAR_27->ptp_caps.gettimex64 = VAR_19;
  VAR_27->ptp_caps.settime64 = VAR_24;
  VAR_27->ptp_caps.enable = VAR_16;
  VAR_27->ptp_caps.verify = VAR_26;
  break;
 default:
  VAR_27->ptp_clock = ((void*)0);
  return;
 }

 FUNC_9(&VAR_27->tmreg_lock);
 FUNC_2(&VAR_27->ptp_tx_work, VAR_25);

 if (VAR_27->ptp_flags & VAR_8)
  FUNC_1(&VAR_27->ptp_overflow_work,
      VAR_20);

 VAR_27->tstamp_config.rx_filter = VAR_0;
 VAR_27->tstamp_config.tx_type = VAR_1;

 FUNC_6(VAR_27);

 VAR_27->ptp_clock = FUNC_7(&VAR_27->ptp_caps,
      &VAR_27->pdev->dev);
 if (FUNC_3(VAR_27->ptp_clock)) {
  VAR_27->ptp_clock = ((void*)0);
  FUNC_4(&VAR_27->pdev->dev, "ptp_clock_register failed\n");
 } else if (VAR_27->ptp_clock) {
  FUNC_5(&VAR_27->pdev->dev, "added PHC on %s\n",
    VAR_27->netdev->name);
  VAR_27->ptp_flags |= VAR_7;
 }
}
