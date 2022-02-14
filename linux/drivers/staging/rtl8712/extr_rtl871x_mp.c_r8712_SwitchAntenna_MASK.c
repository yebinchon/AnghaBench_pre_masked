
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int antenna_tx; int antenna_rx; } ;
struct _adapter {TYPE_1__ mppriv; } ;
struct R_ANTENNA_SELECT_CCK {int r_ccktx_enable; int r_cckrx_enable; int r_cckrx_enable_2; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct _adapter*,int ,int,int) ;

void FUNC_1(struct _adapter *VAR_8)
{
 u32 VAR_9 = 0, VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u32 VAR_13 = 0;
 struct R_ANTENNA_SELECT_CCK *VAR_14;

 VAR_14 = (struct R_ANTENNA_SELECT_CCK *)&VAR_12;

 switch (VAR_8->mppriv.antenna_tx) {
 case 130:

  FUNC_0(VAR_8, VAR_3, 0xe, 2);
  FUNC_0(VAR_8, VAR_4, 0xe, 1);
  VAR_9 = 0x3;
  VAR_10 = 0x11111111;
  VAR_14->r_ccktx_enable = 0x8;
  break;
 case 128:
  FUNC_0(VAR_8, VAR_3, 0xe, 1);
  FUNC_0(VAR_8, VAR_4, 0xe, 2);
  VAR_9 = 0x3;
  VAR_10 = 0x22222222;
  VAR_14->r_ccktx_enable = 0x4;
  break;
 case 129:
  FUNC_0(VAR_8, VAR_3, 0xe, 2);
  FUNC_0(VAR_8, VAR_4, 0xe, 2);
  VAR_9 = 0x3;
  VAR_10 = 0x3321333;
  VAR_14->r_ccktx_enable = 0xC;
  break;
 default:
  break;
 }

 FUNC_0(VAR_8, VAR_5, 0xffffffff, VAR_10);

 FUNC_0(VAR_8, VAR_2, 0x0000000f, VAR_9);
 switch (VAR_8->mppriv.antenna_rx) {
 case 130:
  VAR_11 = 0x1;
  VAR_14->r_cckrx_enable = 0x0;
  VAR_14->r_cckrx_enable_2 = 0x0;
  break;
 case 128:
  VAR_11 = 0x2;
  VAR_14->r_cckrx_enable = 0x1;
  VAR_14->r_cckrx_enable_2 = 0x1;
  break;
 case 129:
  VAR_11 = 0x3;
  VAR_14->r_cckrx_enable = 0x0;
  VAR_14->r_cckrx_enable_2 = 0x1;
  break;
 default:
  break;
 }

 FUNC_0(VAR_8, VAR_6, 0x0000000f,
     VAR_11);

 FUNC_0(VAR_8, VAR_7, 0x0000000f,
     VAR_11);

 VAR_13 = VAR_12;

 FUNC_0(VAR_8, VAR_1, VAR_0, VAR_13);
}
