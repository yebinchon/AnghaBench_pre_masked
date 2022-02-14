
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned char* VirtualRomBase; int SiS_SetFlag; int SiS_SelectCRT2Rate; int SiS_IF_DEF_LVDS; scalar_t__ ChipType; int SiS_VBInfo; int SiS_VBType; int SiS_IF_DEF_CH70xx; int SiS_UseOEM; scalar_t__ SiS_CustomT; int SiS_Part1Port; scalar_t__ SiS_UseROM; scalar_t__ SiS_LCDVDES; scalar_t__ SiS_LCDHDES; int UseCustomMode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*) ;
 int FUNC_4 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_5 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_6 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 unsigned short FUNC_7 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_8 (struct SiS_Private*) ;
 int FUNC_9 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_10 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_11 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_12 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_13 (struct SiS_Private*,unsigned short) ;
 int FUNC_14 (struct SiS_Private*,unsigned short*,unsigned short*) ;
 int FUNC_15 (struct SiS_Private*) ;
 int FUNC_16 (struct SiS_Private*,int,int,int) ;
 int FUNC_17 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_18 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_19 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_20 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_21 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_22 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_23 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_24 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_25 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_26 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_27 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_28 (int ,int,int) ;
 int FUNC_29 (int ,int,int) ;
 int FUNC_30 (struct SiS_Private*,int,int) ;
 int FUNC_31 (struct SiS_Private*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

bool
FUNC_32(struct SiS_Private *VAR_16, unsigned short VAR_17)
{



   unsigned short VAR_18, VAR_19;

   VAR_16->SiS_SetFlag |= VAR_4;

   if(!VAR_16->UseCustomMode) {
      FUNC_14(VAR_16, &VAR_17, &VAR_18);
   } else {
      VAR_18 = 0;
   }


   VAR_16->SiS_SelectCRT2Rate = 4;

   FUNC_31(VAR_16);

   VAR_19 = FUNC_7(VAR_16, VAR_17, VAR_18);

   FUNC_13(VAR_16,VAR_17);

   if(VAR_16->SiS_SetFlag & VAR_3) {
      FUNC_1(VAR_16);
      if((VAR_16->SiS_IF_DEF_LVDS == 1) && (VAR_16->ChipType == VAR_7)) {
         FUNC_28(VAR_16->SiS_Part1Port,0x00,0x80);
      }
      FUNC_19(VAR_16, VAR_17, VAR_18);
   }

   if(VAR_16->SiS_VBInfo & VAR_2) {
      FUNC_8(VAR_16);
      FUNC_2(VAR_16);
      return 1;
   }

   FUNC_5(VAR_16, VAR_17, VAR_18, VAR_19);


   VAR_16->SiS_LCDHDES = VAR_16->SiS_LCDVDES = 0;
   if( (VAR_16->SiS_IF_DEF_LVDS == 1) ||
       ((VAR_16->SiS_VBType & VAR_13) && (VAR_16->SiS_VBInfo & VAR_8)) ||
       ((VAR_16->ChipType >= VAR_5) && (VAR_16->SiS_VBType & VAR_14)) ) {
      FUNC_6(VAR_16, VAR_17, VAR_18, VAR_19);
   }

   if(VAR_16->SiS_SetFlag & VAR_3) {
      FUNC_21(VAR_16, VAR_17, VAR_18, VAR_19);
   }

   if(VAR_16->SiS_VBType & VAR_15) {

      if(VAR_16->SiS_SetFlag & VAR_3) {

  FUNC_22(VAR_16, VAR_17, VAR_18, VAR_19);



  FUNC_24(VAR_16, VAR_17, VAR_18);
  FUNC_25(VAR_16, VAR_17, VAR_18, VAR_19);



  FUNC_27(VAR_16, VAR_17, VAR_18);

  FUNC_20(VAR_16, VAR_17, VAR_19);


  if((VAR_16->SiS_VBType & VAR_13) && (VAR_16->SiS_VBInfo & VAR_8)) {

     if(!((VAR_16->SiS_SetFlag & VAR_11) && ((VAR_17 == 0x03) || (VAR_17 == 0x10)))) {
        if(VAR_16->SiS_VBInfo & VAR_12) {
    FUNC_9(VAR_16, VAR_17, VAR_18, VAR_19);
        }
            }
     FUNC_18(VAR_16, VAR_17, VAR_18, VAR_19);
  }
      }

   } else {

      FUNC_20(VAR_16, VAR_17, VAR_19);

      FUNC_9(VAR_16,VAR_17,VAR_18,VAR_19);

      FUNC_18(VAR_16,VAR_17,VAR_18,VAR_19);

      if(VAR_16->SiS_SetFlag & VAR_3) {
  if(VAR_16->SiS_IF_DEF_CH70xx != 0) {
     if(VAR_16->SiS_VBInfo & (VAR_8 | VAR_9)) {
        if(VAR_16->SiS_IF_DEF_CH70xx == 2) {



        }
     }
     if(VAR_16->SiS_VBInfo & VAR_10) {
        FUNC_17(VAR_16,VAR_17,VAR_18,VAR_19);
     }
  }
      }

   }
   if(VAR_16->SiS_SetFlag & VAR_3) {
      FUNC_3(VAR_16);
   }

   FUNC_2(VAR_16);

   if(VAR_16->SiS_IF_DEF_CH70xx == 1) {
      if(VAR_16->SiS_VBInfo & VAR_10) {

  FUNC_30(VAR_16,0xFF,0x0C);
      } else {

  FUNC_16(VAR_16,0x0e,0x01,0xf8);
      }
   }

   if(VAR_16->SiS_SetFlag & VAR_3) {
      FUNC_8(VAR_16);
   }

   return 1;
}
