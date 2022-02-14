
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {void* rx; void* tx; scalar_t__ rx_chain_num; scalar_t__ tx_chain_num; } ;
struct rt2x00_dev {int led_mcu_reg; int cap_flags; int led_qual; int led_assoc; int led_radio; scalar_t__ freq_offset; TYPE_1__ default_ant; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int *,int ) ;
 int FUNC_3 (struct rt2x00_dev*,char*,int) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_44)
{
 u16 VAR_45;
 u16 VAR_46;
 u16 VAR_47;




 VAR_46 = FUNC_1(VAR_44, VAR_15);






 if (FUNC_5(VAR_44, VAR_36) ||
     FUNC_5(VAR_44, VAR_41) ||
     FUNC_5(VAR_44, VAR_42) ||
     FUNC_5(VAR_44, VAR_43))
  VAR_47 = FUNC_1(VAR_44, VAR_10);
 else if (FUNC_5(VAR_44, VAR_37))
  VAR_47 = 138;
 else if (FUNC_5(VAR_44, VAR_39))
  VAR_47 = 137;
 else if (FUNC_5(VAR_44, VAR_40))
  VAR_47 = 136;
 else
  VAR_47 = FUNC_4(VAR_46, VAR_16);

 switch (VAR_47) {
 case 148:
 case 147:
 case 150:
 case 149:
 case 146:
 case 151:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_3(VAR_44, "Invalid RF chipset 0x%04x detected\n",
      VAR_47);
  return -VAR_28;
 }

 FUNC_7(VAR_44, VAR_47);




 VAR_44->default_ant.tx_chain_num =
     FUNC_4(VAR_46, VAR_18);
 VAR_44->default_ant.rx_chain_num =
     FUNC_4(VAR_46, VAR_17);

 VAR_46 = FUNC_1(VAR_44, VAR_19);

 if (FUNC_5(VAR_44, VAR_34) ||
     FUNC_5(VAR_44, VAR_35) ||
     FUNC_5(VAR_44, VAR_37) ||
     FUNC_5(VAR_44, VAR_38)) {
  VAR_45 = FUNC_4(VAR_46,
    VAR_20);
  switch (VAR_45) {
  case 0:
  case 1:
  case 2:
   VAR_44->default_ant.tx = VAR_0;
   VAR_44->default_ant.rx = VAR_0;
   break;
  case 3:
   VAR_44->default_ant.tx = VAR_0;
   VAR_44->default_ant.rx = VAR_1;
   break;
  }
 } else {
  VAR_44->default_ant.tx = VAR_0;
  VAR_44->default_ant.rx = VAR_0;
 }


 if (FUNC_6(VAR_44, VAR_41, VAR_33) ||
     FUNC_6(VAR_44, VAR_41, VAR_32)) {
  VAR_44->default_ant.tx = VAR_2;
  VAR_44->default_ant.rx = VAR_2;
 }




 if (FUNC_4(VAR_46, VAR_23))
  FUNC_0(VAR_4, &VAR_44->cap_flags);
 if (FUNC_4(VAR_46, VAR_22))
  FUNC_0(VAR_5, &VAR_44->cap_flags);




 if (FUNC_4(VAR_46, VAR_26))
  FUNC_0(VAR_8, &VAR_44->cap_flags);




 if (!FUNC_5(VAR_44, VAR_37) &&
     FUNC_4(VAR_46, VAR_21))
  FUNC_0(VAR_3, &VAR_44->cap_flags);




 VAR_46 = FUNC_1(VAR_44, VAR_13);
 VAR_44->freq_offset = FUNC_4(VAR_46, VAR_14);
 VAR_46 = FUNC_1(VAR_44, VAR_11);

 if (FUNC_4(VAR_46, VAR_12) <
     VAR_27)
  FUNC_0(VAR_9, &VAR_44->cap_flags);




 VAR_46 = FUNC_1(VAR_44, VAR_19);

 if (FUNC_5(VAR_44, VAR_37)) {
  if (FUNC_4(VAR_46,
      VAR_24))
      FUNC_0(VAR_6,
         &VAR_44->cap_flags);
  if (FUNC_4(VAR_46,
      VAR_25))
      FUNC_0(VAR_7,
         &VAR_44->cap_flags);
 }

 return 0;
}
