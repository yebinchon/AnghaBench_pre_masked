
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int ptp_tx; int ptp_rx; int hw_features; int ptp_rx_lock; scalar_t__ latch_event_flags; struct i40e_hw hw; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;


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
 int FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct i40e_pf *VAR_16,
           struct hwtstamp_config *VAR_17)
{
 struct i40e_hw *VAR_18 = &VAR_16->hw;
 u32 VAR_19, VAR_20;


 if (VAR_17->flags)
  return -VAR_0;

 switch (VAR_17->tx_type) {
 case 129:
  VAR_16->ptp_tx = 0;
  break;
 case 128:
  VAR_16->ptp_tx = 1;
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_17->rx_filter) {
 case 143:
  VAR_16->ptp_rx = 0;





  VAR_19 = VAR_9;
  break;
 case 139:
 case 141:
 case 140:
  if (!(VAR_16->hw_features & VAR_2))
   return -VAR_1;
  VAR_16->ptp_rx = 1;
  VAR_19 = VAR_12 |
      VAR_9 |
      VAR_11;
  VAR_17->rx_filter = 140;
  break;
 case 137:
 case 132:
 case 130:
 case 131:
 case 138:
 case 133:
  if (!(VAR_16->hw_features & VAR_2))
   return -VAR_1;

 case 135:
 case 134:
 case 136:
  VAR_16->ptp_rx = 1;
  VAR_19 = VAR_13 |
      VAR_10;
  if (VAR_16->hw_features & VAR_2) {
   VAR_19 |= VAR_11;
   VAR_17->rx_filter = 137;
  } else {
   VAR_17->rx_filter = 135;
  }
  break;
 case 142:
 case 144:
 default:
  return -VAR_1;
 }


 FUNC_2(&VAR_16->ptp_rx_lock);
 FUNC_1(VAR_18, VAR_14);
 FUNC_1(VAR_18, VAR_15);
 FUNC_1(VAR_18, FUNC_0(0));
 FUNC_1(VAR_18, FUNC_0(1));
 FUNC_1(VAR_18, FUNC_0(2));
 FUNC_1(VAR_18, FUNC_0(3));
 VAR_16->latch_event_flags = 0;
 FUNC_3(&VAR_16->ptp_rx_lock);


 VAR_20 = FUNC_1(VAR_18, VAR_5);
 if (VAR_16->ptp_tx)
  VAR_20 |= VAR_6;
 else
  VAR_20 &= ~VAR_6;
 FUNC_4(VAR_18, VAR_5, VAR_20);

 VAR_20 = FUNC_1(VAR_18, VAR_3);
 if (VAR_16->ptp_tx)
  VAR_20 |= VAR_4;
 else
  VAR_20 &= ~VAR_4;
 FUNC_4(VAR_18, VAR_3, VAR_20);







 VAR_20 = FUNC_1(VAR_18, VAR_7);

 VAR_20 &= VAR_8;

 VAR_20 |= VAR_19;
 FUNC_4(VAR_18, VAR_7, VAR_20);

 return 0;
}
