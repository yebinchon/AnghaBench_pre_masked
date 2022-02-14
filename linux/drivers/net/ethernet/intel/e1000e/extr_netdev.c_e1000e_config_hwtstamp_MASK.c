
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; struct hwtstamp_config hwtstamp_config; struct e1000_hw hw; } ;


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
 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_24,
      struct hwtstamp_config *VAR_25)
{
 struct e1000_hw *VAR_26 = &VAR_24->hw;
 u32 VAR_27 = VAR_11;
 u32 VAR_28 = VAR_4;
 u32 VAR_29 = 0;
 u16 VAR_30 = 0;
 bool VAR_31 = 0;
 bool VAR_32 = 0;
 u32 VAR_33;

 if (!(VAR_24->flags & VAR_16))
  return -VAR_13;


 if (VAR_25->flags)
  return -VAR_13;

 switch (VAR_25->tx_type) {
 case 129:
  VAR_27 = 0;
  break;
 case 128:
  break;
 default:
  return -VAR_14;
 }

 switch (VAR_25->rx_filter) {
 case 143:
  VAR_28 = 0;
  break;
 case 139:
  VAR_28 |= VAR_9;
  VAR_29 = VAR_1;
  VAR_31 = 1;
  break;
 case 141:
  VAR_28 |= VAR_9;
  VAR_29 = VAR_0;
  VAR_31 = 1;
  break;
 case 134:

  VAR_28 |= VAR_8;
  VAR_29 = VAR_3;
  VAR_32 = 1;
  break;
 case 136:

  VAR_28 |= VAR_8;
  VAR_29 = VAR_2;
  VAR_32 = 1;
  break;
 case 131:



 case 130:

  VAR_28 |= VAR_7;
  VAR_29 = VAR_3;
  VAR_32 = 1;
  VAR_31 = 1;
  break;
 case 133:



 case 138:

  VAR_28 |= VAR_7;
  VAR_29 = VAR_2;
  VAR_32 = 1;
  VAR_31 = 1;
  break;
 case 132:
 case 135:



 case 137:
  VAR_28 |= VAR_6;
  VAR_25->rx_filter = 137;
  VAR_32 = 1;
  VAR_31 = 1;
  break;
 case 140:




 case 142:
 case 144:
  VAR_32 = 1;
  VAR_31 = 1;
  VAR_28 |= VAR_5;
  VAR_25->rx_filter = 144;
  break;
 default:
  return -VAR_14;
 }

 VAR_24->hwtstamp_config = *VAR_25;


 VAR_33 = FUNC_3(VAR_22);
 VAR_33 &= ~VAR_11;
 VAR_33 |= VAR_27;
 FUNC_4(VAR_22, VAR_33);
 if ((FUNC_3(VAR_22) & VAR_11) !=
     (VAR_33 & VAR_11)) {
  FUNC_2("Timesync Tx Control register not set as expected\n");
  return -VAR_12;
 }


 VAR_33 = FUNC_3(VAR_21);
 VAR_33 &= ~(VAR_4 | VAR_10);
 VAR_33 |= VAR_28;
 FUNC_4(VAR_21, VAR_33);
 if ((FUNC_3(VAR_21) & (VAR_4 |
     VAR_10)) !=
     (VAR_33 & (VAR_4 |
         VAR_10))) {
  FUNC_2("Timesync Rx Control register not set as expected\n");
  return -VAR_12;
 }


 if (VAR_32)
  VAR_29 |= VAR_15;


 FUNC_4(VAR_18, VAR_29);


 if (VAR_31) {
  VAR_30 = VAR_17;
  FUNC_0(&VAR_30);
 }
 FUNC_4(VAR_20, VAR_30);

 FUNC_1();


 FUNC_3(VAR_19);
 FUNC_3(VAR_23);

 return 0;
}
