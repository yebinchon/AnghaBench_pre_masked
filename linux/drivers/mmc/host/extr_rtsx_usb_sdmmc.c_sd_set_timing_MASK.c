
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_usb_sdmmc {struct rtsx_ucr* ucr; } ;
struct rtsx_ucr {int dummy; } ;


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
 int FUNC_0 (struct rtsx_ucr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_ucr*) ;
 int FUNC_2 (struct rtsx_ucr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_usb_sdmmc *VAR_23,
  unsigned char VAR_24, bool *VAR_25)
{
 struct rtsx_ucr *VAR_26 = VAR_23->ucr;
 int VAR_27;

 *VAR_25 = 0;

 FUNC_1(VAR_26);

 switch (VAR_24) {
 case 129:
 case 128:
  FUNC_0(VAR_26, VAR_22, VAR_18,
    0x0C | VAR_17,
    VAR_16 | VAR_17);
  FUNC_0(VAR_26, VAR_22, VAR_0, 0xFF,
    VAR_2 | VAR_13 | VAR_7);
  break;

 case 130:
  *VAR_25 = 1;

  FUNC_0(VAR_26, VAR_22, VAR_18,
    0x0C | VAR_17,
    VAR_19 | VAR_17);
  FUNC_0(VAR_26, VAR_22, VAR_0, 0xFF,
    VAR_2 | VAR_13 | VAR_7);
  FUNC_0(VAR_26, VAR_22, VAR_20,
    VAR_5, VAR_5);
  FUNC_0(VAR_26, VAR_22, VAR_21,
    VAR_4 | VAR_3,
    VAR_4 | VAR_3);
  break;

 case 132:
 case 131:
  FUNC_0(VAR_26, VAR_22, VAR_18,
    0x0C, VAR_15);
  FUNC_0(VAR_26, VAR_22, VAR_0, 0xFF,
    VAR_1 | VAR_14 | VAR_7);
  FUNC_0(VAR_26, VAR_22, VAR_20,
    VAR_12, VAR_11);
  FUNC_0(VAR_26, VAR_22, VAR_21,
    VAR_10, VAR_8);
  break;

 default:
  FUNC_0(VAR_26, VAR_22,
    VAR_18, 0x0C, VAR_15);
  FUNC_0(VAR_26, VAR_22, VAR_0, 0xFF,
    VAR_1 | VAR_14 | VAR_7);
  FUNC_0(VAR_26, VAR_22,
    VAR_20, 0xFF, 0);
  FUNC_0(VAR_26, VAR_22, VAR_21,
    VAR_10, VAR_9);
  break;
 }

 VAR_27 = FUNC_2(VAR_26, VAR_6, 100);

 return VAR_27;
}
