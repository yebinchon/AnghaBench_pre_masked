
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int UseCustomMode; int CRT1UsesCustomMode; int SiS_flag_clearbuffer; int SiS_VGAINFO; int SiS_VBType; scalar_t__ ChipType; int SiS_VBInfo; int SiS_IF_DEF_LVDS; scalar_t__ SiS_IF_DEF_CH70xx; scalar_t__ SiS_IF_DEF_TRUMPION; int SiS_P3c4; int SiS_P3d4; int SiS_ROMNew; int SiS_Part1Port; int SiS_P3c6; int CModeFlag; int CModeFlag_CRT1; int CSRClock; int CSRClock_CRT1; int SiS_Part2Port; int IOAddress; } ;
typedef int SISIOADDRESS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*,int ) ;
 int FUNC_4 (struct SiS_Private*) ;
 int FUNC_5 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_6 (struct SiS_Private*) ;
 int FUNC_7 (struct SiS_Private*) ;
 int FUNC_8 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct SiS_Private*) ;
 int FUNC_11 (struct SiS_Private*,unsigned short,unsigned short,int) ;
 int FUNC_12 (struct SiS_Private*) ;
 int FUNC_13 (struct SiS_Private*) ;
 int FUNC_14 (struct SiS_Private*) ;
 int FUNC_15 (struct SiS_Private*) ;
 int FUNC_16 (struct SiS_Private*) ;
 scalar_t__ FUNC_17 (struct SiS_Private*) ;
 int FUNC_18 (struct SiS_Private*) ;
 int FUNC_19 (struct SiS_Private*) ;
 int FUNC_20 (struct SiS_Private*,unsigned short*,unsigned short*) ;
 int FUNC_21 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_22 (struct SiS_Private*,unsigned short) ;
 int FUNC_23 (struct SiS_Private*,unsigned short) ;
 int FUNC_24 (int ,int,int) ;
 int FUNC_25 (int ,int,int) ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (int ,int,int) ;
 int FUNC_28 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_29 (struct SiS_Private*) ;
 int FUNC_30 (struct SiS_Private*) ;
 int FUNC_31 (struct SiS_Private*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

bool
FUNC_32(struct SiS_Private *VAR_10, unsigned short VAR_11)
{
   SISIOADDRESS VAR_12 = VAR_10->IOAddress;
   unsigned short VAR_13, VAR_14;
   unsigned char VAR_15 = 0;
   unsigned short VAR_16;

   VAR_10->UseCustomMode = 0;
   VAR_10->CRT1UsesCustomMode = 0;

   VAR_10->SiS_flag_clearbuffer = 0;

   if(VAR_10->UseCustomMode) {
      VAR_11 = 0xfe;
   } else {
      if(!(VAR_11 & 0x80)) VAR_10->SiS_flag_clearbuffer = 1;
      VAR_11 &= 0x7f;
   }


   VAR_13 = VAR_11;
   if(VAR_11 == 0x5b) VAR_11 = 0x56;

   FUNC_2(VAR_10);
   FUNC_3(VAR_10, VAR_12);
   FUNC_10(VAR_10);

   VAR_10->SiS_VGAINFO = 0x11;

   VAR_16 = FUNC_9(VAR_10->SiS_P3c4,0x05);
   FUNC_24(VAR_10->SiS_P3c4,0x05,0x86);

   FUNC_1(VAR_10);
   FUNC_4(VAR_10);
   FUNC_0(VAR_10);

   FUNC_31(VAR_10);

   if(!VAR_10->UseCustomMode) {
      if(!(FUNC_20(VAR_10, &VAR_11, &VAR_14))) return 0;
   } else {
      VAR_14 = 0;
   }

   FUNC_12(VAR_10);


   FUNC_15(VAR_10);
   if(VAR_10->SiS_VBType & VAR_8) {
      if(VAR_10->ChipType >= VAR_1) {
         FUNC_19(VAR_10);
  FUNC_27(VAR_10->SiS_P3c4,0x32,0x10);
  FUNC_27(VAR_10->SiS_Part2Port,0x00,0x0c);
         VAR_15 = FUNC_9(VAR_10->SiS_P3d4,0x38);
      } else {
         VAR_15 = FUNC_9(VAR_10->SiS_P3d4,0x35);
      }
   }


   FUNC_11(VAR_10, VAR_11, VAR_14, (VAR_10->UseCustomMode) ? 0 : 1);
   FUNC_29(VAR_10);
   FUNC_28(VAR_10, VAR_11, VAR_14);
   FUNC_8(VAR_10, VAR_11, VAR_14);
   FUNC_23(VAR_10, VAR_11);


   if(!FUNC_5(VAR_10, VAR_11, VAR_14)) {
      return 0;
   }

   FUNC_18(VAR_10);

   if(VAR_10->UseCustomMode) {
      VAR_10->CRT1UsesCustomMode = 1;
      VAR_10->CSRClock_CRT1 = VAR_10->CSRClock;
      VAR_10->CModeFlag_CRT1 = VAR_10->CModeFlag;
   } else {
      VAR_10->CRT1UsesCustomMode = 0;
   }


   if( (VAR_10->SiS_VBInfo & (VAR_6 | VAR_5)) ||
       (!(VAR_10->SiS_VBInfo & VAR_7)) ) {
      FUNC_21(VAR_10, VAR_11, VAR_14);
   }


   if(VAR_10->SiS_VBInfo & (VAR_6 | VAR_7 | VAR_5)) {
      if( (VAR_10->SiS_VBType & VAR_9) ||
   (VAR_10->SiS_IF_DEF_LVDS == 1) ||
   (VAR_10->SiS_IF_DEF_CH70xx != 0) ||
   (VAR_10->SiS_IF_DEF_TRUMPION != 0) ) {
  FUNC_22(VAR_10, VAR_13);
      }
   }

   FUNC_14(VAR_10);

   FUNC_30(VAR_10);

   FUNC_7(VAR_10);
   FUNC_26(VAR_10->SiS_P3c6,0xFF);
   if(VAR_10->SiS_VBType & VAR_8) {
      if(VAR_10->ChipType >= VAR_1) {
      } else if((VAR_10->ChipType == VAR_2) ||
         (VAR_10->ChipType == VAR_3)) {
  FUNC_24(VAR_10->SiS_P3d4,0x35,VAR_15);
      }
   }

   FUNC_6(VAR_10);

   FUNC_13(VAR_10);


   if(VAR_16 != 0xA1) FUNC_24(VAR_10->SiS_P3c4,0x05,0x00);

   return 1;
}
