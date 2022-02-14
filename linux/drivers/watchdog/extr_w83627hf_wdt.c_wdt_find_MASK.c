
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


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
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;

__attribute__((used)) static int FUNC_5(int VAR_35)
{
 u8 VAR_36;
 int VAR_37;

 VAR_12 = VAR_6;
 VAR_10 = VAR_5;
 VAR_11 = VAR_9;

 VAR_37 = FUNC_1();
 if (VAR_37)
  return VAR_37;
 FUNC_4(VAR_4);
 VAR_36 = FUNC_3(0x20);
 switch (VAR_36) {
 case 137:
  VAR_37 = VAR_25;
  break;
 case 136:
  VAR_37 = VAR_26;
  break;
 case 129:
  VAR_37 = VAR_33;
  VAR_12 = VAR_8;
  VAR_10 = VAR_7;
  break;
 case 128:
  VAR_37 = VAR_34;
  VAR_12 = VAR_8;
  VAR_10 = VAR_7;
  break;
 case 133:
  VAR_37 = VAR_29;
  break;
 case 135:
  VAR_37 = VAR_27;
  break;
 case 130:
  VAR_37 = VAR_32;
  break;
 case 138:
  VAR_37 = VAR_24;
  break;
 case 140:
  VAR_37 = VAR_22;
  break;
 case 139:
  VAR_37 = VAR_23;
  break;
 case 134:
  VAR_37 = VAR_28;
  break;
 case 131:
  VAR_37 = VAR_30;
  break;
 case 132:
  VAR_37 = VAR_31;
  break;
 case 148:
  VAR_37 = VAR_14;
  break;
 case 147:
  VAR_37 = VAR_15;
  break;
 case 146:
  VAR_37 = VAR_16;
  break;
 case 145:
  VAR_37 = VAR_17;
  break;
 case 144:
  VAR_37 = VAR_18;
  break;
 case 143:
  VAR_37 = VAR_19;
  break;
 case 142:
  VAR_37 = VAR_20;
  break;
 case 141:
  VAR_37 = VAR_21;
  break;
 case 149:
  VAR_37 = VAR_13;
  VAR_12 = VAR_3;
  VAR_10 = VAR_1;
  VAR_11 = VAR_2;
  break;
 case 0xff:
  VAR_37 = -VAR_0;
  break;
 default:
  VAR_37 = -VAR_0;
  FUNC_0("Unsupported chip ID: 0x%02x\n", VAR_36);
  break;
 }
 FUNC_2();
 return VAR_37;
}
