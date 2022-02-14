
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;
struct realtek_pci_sdmmc {struct rtsx_pcr* pcr; } ;


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
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_3(struct realtek_pci_sdmmc *VAR_24, unsigned char VAR_25)
{
 struct rtsx_pcr *VAR_26 = VAR_24->pcr;
 int VAR_27 = 0;

 FUNC_1(VAR_26);

 switch (VAR_25) {
 case 129:
 case 128:
  FUNC_0(VAR_26, VAR_23, VAR_19,
    0x0C | VAR_18,
    VAR_17 | VAR_18);
  FUNC_0(VAR_26, VAR_23, VAR_1,
    VAR_2, VAR_2);
  FUNC_0(VAR_26, VAR_23, VAR_0, 0xFF,
    VAR_4 | VAR_14 | VAR_8);
  FUNC_0(VAR_26, VAR_23, VAR_1, VAR_2, 0);
  break;

 case 133:
 case 130:
  FUNC_0(VAR_26, VAR_23, VAR_19,
    0x0C | VAR_18,
    VAR_20 | VAR_18);
  FUNC_0(VAR_26, VAR_23, VAR_1,
    VAR_2, VAR_2);
  FUNC_0(VAR_26, VAR_23, VAR_0, 0xFF,
    VAR_4 | VAR_14 | VAR_8);
  FUNC_0(VAR_26, VAR_23, VAR_1, VAR_2, 0);
  FUNC_0(VAR_26, VAR_23, VAR_21,
    VAR_7, VAR_7);
  FUNC_0(VAR_26, VAR_23, VAR_22,
    VAR_6 | VAR_5,
    VAR_6 | VAR_5);
  break;

 case 132:
 case 131:
  FUNC_0(VAR_26, VAR_23, VAR_19,
    0x0C, VAR_16);
  FUNC_0(VAR_26, VAR_23, VAR_1,
    VAR_2, VAR_2);
  FUNC_0(VAR_26, VAR_23, VAR_0, 0xFF,
    VAR_3 | VAR_15 | VAR_8);
  FUNC_0(VAR_26, VAR_23, VAR_1, VAR_2, 0);
  FUNC_0(VAR_26, VAR_23, VAR_21,
    VAR_13, VAR_12);
  FUNC_0(VAR_26, VAR_23, VAR_22,
    VAR_11, VAR_9);
  break;

 default:
  FUNC_0(VAR_26, VAR_23,
    VAR_19, 0x0C, VAR_16);
  FUNC_0(VAR_26, VAR_23, VAR_1,
    VAR_2, VAR_2);
  FUNC_0(VAR_26, VAR_23, VAR_0, 0xFF,
    VAR_3 | VAR_15 | VAR_8);
  FUNC_0(VAR_26, VAR_23, VAR_1, VAR_2, 0);
  FUNC_0(VAR_26, VAR_23,
    VAR_21, 0xFF, 0);
  FUNC_0(VAR_26, VAR_23, VAR_22,
    VAR_11, VAR_10);
  break;
 }

 VAR_27 = FUNC_2(VAR_26, 100);

 return VAR_27;
}
