
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct igb_adapter *VAR_37,
          struct hwtstamp_config *VAR_38)
{
 struct e1000_hw *VAR_39 = &VAR_37->hw;
 u32 VAR_40 = VAR_23;
 u32 VAR_41 = VAR_17;
 u32 VAR_42 = 0;
 bool VAR_43 = 0;
 bool VAR_44 = 0;
 u32 VAR_45;


 if (VAR_38->flags)
  return -VAR_26;

 switch (VAR_38->tx_type) {
 case 129:
  VAR_40 = 0;
 case 128:
  break;
 default:
  return -VAR_27;
 }

 switch (VAR_38->rx_filter) {
 case 143:
  VAR_41 = 0;
  break;
 case 139:
  VAR_41 |= VAR_20;
  VAR_42 = VAR_15;
  VAR_43 = 1;
  break;
 case 141:
  VAR_41 |= VAR_20;
  VAR_42 = VAR_14;
  VAR_43 = 1;
  break;
 case 137:
 case 135:
 case 132:
 case 130:
 case 134:
 case 131:
 case 138:
 case 136:
 case 133:
  VAR_41 |= VAR_19;
  VAR_38->rx_filter = 137;
  VAR_44 = 1;
  VAR_43 = 1;
  break;
 case 140:
 case 142:
 case 144:



  if (VAR_39->mac.type != VAR_33) {
   VAR_41 |= VAR_18;
   VAR_38->rx_filter = 144;
   break;
  }

 default:
  VAR_38->rx_filter = 143;
  return -VAR_27;
 }

 if (VAR_39->mac.type == VAR_32) {
  if (VAR_41 | VAR_40)
   return -VAR_26;
  return 0;
 }





 if ((VAR_39->mac.type >= VAR_34) && VAR_41) {
  VAR_41 = VAR_17;
  VAR_41 |= VAR_18;
  VAR_38->rx_filter = 144;
  VAR_44 = 1;
  VAR_43 = 1;

  if ((VAR_39->mac.type == VAR_35) ||
      (VAR_39->mac.type == VAR_36)) {
   VAR_45 = FUNC_6(VAR_9);
   VAR_45 |= VAR_10;
   FUNC_7(VAR_9, VAR_45);
  }
 }


 VAR_45 = FUNC_6(VAR_22);
 VAR_45 &= ~VAR_23;
 VAR_45 |= VAR_40;
 FUNC_7(VAR_22, VAR_45);


 VAR_45 = FUNC_6(VAR_16);
 VAR_45 &= ~(VAR_17 | VAR_21);
 VAR_45 |= VAR_41;
 FUNC_7(VAR_16, VAR_45);


 FUNC_7(VAR_13, VAR_42);


 if (VAR_44)
  FUNC_7(FUNC_0(VAR_29),
       (VAR_1 |
        VAR_0 |
        VAR_28));
 else
  FUNC_7(FUNC_0(VAR_29), 0);


 if (VAR_43) {
  u32 VAR_46 = (VAR_30
   | VAR_6
   | VAR_2
   | VAR_3);
  VAR_46 &= ~VAR_4;

  FUNC_7(FUNC_2(3), FUNC_5(VAR_31));
  FUNC_7(FUNC_3(3),
       (VAR_8 | VAR_7));
  if (VAR_39->mac.type == VAR_33) {

   FUNC_7(FUNC_4(3), FUNC_5(VAR_31));
   VAR_46 &= ~VAR_5;
  }
  FUNC_7(FUNC_1(3), VAR_46);
 } else {
  FUNC_7(FUNC_1(3), VAR_3);
 }
 FUNC_8();


 VAR_45 = FUNC_6(VAR_25);
 VAR_45 = FUNC_6(VAR_24);
 VAR_45 = FUNC_6(VAR_12);
 VAR_45 = FUNC_6(VAR_11);

 return 0;
}
