
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; struct ixgbe_hw hw; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
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
 int VAR_20 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;



 int FUNC_4 (struct ixgbe_adapter*) ;

__attribute__((used)) static int FUNC_5(struct ixgbe_adapter *VAR_23,
     struct hwtstamp_config *VAR_24)
{
 struct ixgbe_hw *VAR_25 = &VAR_23->hw;
 u32 VAR_26 = VAR_20;
 u32 VAR_27 = VAR_13;
 u32 VAR_28 = VAR_21 << 16;
 bool VAR_29 = 0;
 u32 VAR_30;


 if (VAR_24->flags)
  return -VAR_0;

 switch (VAR_24->tx_type) {
 case 132:
  VAR_26 = 0;
 case 131:
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_24->rx_filter) {
 case 146:
  VAR_27 = 0;
  VAR_28 = 0;
  VAR_23->flags &= ~(VAR_6 |
        VAR_7);
  break;
 case 142:
  VAR_27 |= VAR_17;
  VAR_28 |= VAR_10;
  VAR_23->flags |= (VAR_6 |
       VAR_7);
  break;
 case 144:
  VAR_27 |= VAR_17;
  VAR_28 |= VAR_9;
  VAR_23->flags |= (VAR_6 |
       VAR_7);
  break;
 case 140:
 case 138:
 case 135:
 case 133:
 case 137:
 case 134:
 case 141:
 case 139:
 case 136:
  VAR_27 |= VAR_16;
  VAR_29 = 1;
  VAR_24->rx_filter = 140;
  VAR_23->flags |= (VAR_6 |
       VAR_7);
  break;
 case 143:
 case 145:
 case 147:



  if (VAR_25->mac.type >= 130) {
   VAR_27 |= VAR_15;
   VAR_24->rx_filter = 147;
   VAR_23->flags |= VAR_6;
   break;
  }

 default:






  VAR_23->flags &= ~(VAR_6 |
        VAR_7);
  VAR_24->rx_filter = 146;
  return -VAR_1;
 }

 if (VAR_25->mac.type == VAR_22) {
  VAR_23->flags &= ~(VAR_6 |
        VAR_7);
  if (VAR_27 | VAR_26)
   return -VAR_1;
  return 0;
 }





 switch (VAR_25->mac.type) {
 case 130:
 case 129:
 case 128:




  if (VAR_24->rx_filter == 146)
   break;

  VAR_27 = VAR_13 |
          VAR_15 |
          VAR_14;
  VAR_24->rx_filter = 147;
  VAR_23->flags |= VAR_6;
  VAR_23->flags &= ~VAR_7;
  VAR_29 = 1;
  break;
 default:
  break;
 }


 if (VAR_29)
  FUNC_3(VAR_25, FUNC_0(VAR_4),
    (VAR_5 |
     VAR_3 |
     VAR_2));
 else
  FUNC_3(VAR_25, FUNC_0(VAR_4), 0);


 VAR_30 = FUNC_1(VAR_25, VAR_19);
 VAR_30 &= ~VAR_20;
 VAR_30 |= VAR_26;
 FUNC_3(VAR_25, VAR_19, VAR_30);


 VAR_30 = FUNC_1(VAR_25, VAR_12);
 VAR_30 &= ~(VAR_13 | VAR_18);
 VAR_30 |= VAR_27;
 FUNC_3(VAR_25, VAR_12, VAR_30);


 FUNC_3(VAR_25, VAR_8, VAR_28);

 FUNC_2(VAR_25);


 FUNC_4(VAR_23);
 FUNC_1(VAR_25, VAR_11);

 return 0;
}
