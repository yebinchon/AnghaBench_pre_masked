
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tm6000_core {scalar_t__ amode; int norm; scalar_t__ radio; } ;


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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int FUNC_0 (struct tm6000_core*,int ,int,...) ;
 int VAR_43 ;

__attribute__((used)) static int FUNC_1(struct tm6000_core *VAR_44)
{
 uint8_t VAR_45 = 0x04;
 uint8_t VAR_46 = 0x01;
 uint8_t VAR_47 = 0x02;

 if (VAR_44->radio) {
  FUNC_0(VAR_44, VAR_2, 0x00);
  FUNC_0(VAR_44, VAR_3, 0x04);
  FUNC_0(VAR_44, VAR_4, 0x00);
  FUNC_0(VAR_44, VAR_5, 0x80);
  FUNC_0(VAR_44, VAR_6, 0x0c);

  if (VAR_44->amode == VAR_41)
   FUNC_0(VAR_44, VAR_7, 0x00);
  else if (VAR_44->amode == VAR_42)
   FUNC_0(VAR_44, VAR_7, 0x02);
  FUNC_0(VAR_44, VAR_10, 0x18);
  FUNC_0(VAR_44, VAR_13, 0x0a);
  FUNC_0(VAR_44, VAR_14, 0x40);
  FUNC_0(VAR_44, VAR_32, 0xfe);
  FUNC_0(VAR_44, VAR_29, 0x13);
  FUNC_0(VAR_44, VAR_2, 0x80);
  FUNC_0(VAR_44, VAR_1, 0xff);
  return 0;
 }





 if ((VAR_44->norm & VAR_35) == VAR_37) {
  VAR_46 |= 0x04;
 } else if ((VAR_44->norm & VAR_35) == VAR_36) {
  VAR_46 |= 0x43;
 } else if (VAR_44->norm & VAR_34) {
  VAR_46 |= 0x22;
 } else switch (VAR_43) {

 case 0:
  if ((VAR_44->norm & VAR_39) == VAR_40)
   VAR_46 |= 0x00;
  else
   VAR_46 |= 0x10;
  break;

 case 1:
  if (VAR_44->norm & VAR_33)
   VAR_46 = 0x09;
  else
   VAR_46 = 0x05;
  break;

 case 2:
  if (VAR_44->norm & VAR_33) {
   VAR_46 = 0x06;
  } else if (VAR_44->norm & VAR_38) {
   VAR_46 = 0x08;
  } else if (VAR_44->norm & VAR_40) {
   VAR_46 = 0x0a;
   VAR_45 = 0x02;
  } else {
   VAR_46 = 0x07;
  }
  break;

 case 3:
  if (VAR_44->norm & VAR_33) {
   VAR_46 = 0x0b;
  } else {
   VAR_46 = 0x02;
  }
  break;
 }

 FUNC_0(VAR_44, VAR_2, 0x00);
 FUNC_0(VAR_44, VAR_3, VAR_45);
 FUNC_0(VAR_44, VAR_4, 0x00);
 FUNC_0(VAR_44, VAR_5, 0xa0);
 FUNC_0(VAR_44, VAR_6, VAR_46);
 FUNC_0(VAR_44, VAR_7, VAR_47);
 FUNC_0(VAR_44, VAR_8, 0x00);
 FUNC_0(VAR_44, VAR_9, 0x00);
 FUNC_0(VAR_44, VAR_10, 0x08);
 FUNC_0(VAR_44, VAR_11, 0x91);
 FUNC_0(VAR_44, VAR_12, 0x20);
 FUNC_0(VAR_44, VAR_13, 0x12);
 FUNC_0(VAR_44, VAR_14, 0x20);
 FUNC_0(VAR_44, VAR_15, 0xf0);
 FUNC_0(VAR_44, VAR_16, 0x80);
 FUNC_0(VAR_44, VAR_17, 0xc0);
 FUNC_0(VAR_44, VAR_18, 0x80);
 FUNC_0(VAR_44, VAR_19, 0x12);
 FUNC_0(VAR_44, VAR_20, 0xfe);
 FUNC_0(VAR_44, VAR_21, 0x20);
 FUNC_0(VAR_44, VAR_22, 0x14);
 FUNC_0(VAR_44, VAR_23, 0xfe);
 FUNC_0(VAR_44, VAR_24, 0x01);
 FUNC_0(VAR_44, VAR_25, 0xa0);
 FUNC_0(VAR_44, VAR_26, 0x32);
 FUNC_0(VAR_44, VAR_27, 0x64);
 FUNC_0(VAR_44, VAR_28, 0x20);
 FUNC_0(VAR_44, VAR_0, 0x1c, 0x00);
 FUNC_0(VAR_44, VAR_0, 0x1d, 0x00);
 FUNC_0(VAR_44, VAR_29, 0x13);
 FUNC_0(VAR_44, VAR_30, 0x00);
 FUNC_0(VAR_44, VAR_31, 0x00);
 FUNC_0(VAR_44, VAR_2, 0x80);

 return 0;
}
