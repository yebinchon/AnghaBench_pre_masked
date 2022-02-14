
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned char* VirtualRomBase; int SiS_VBInfo; scalar_t__ ChipType; short SiS_ModeType; int SiS_VBType; int SiS_IF_DEF_LVDS; int PanelXRes; int PanelYRes; int SiS_TVMode; int SiS_TVBlue; scalar_t__ SiS_IF_DEF_CH70xx; int SiS_Part1Port; int SiS_Part4Port; scalar_t__ SiS_ROMNew; int SiS_P3c4; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 short VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 unsigned short FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct SiS_Private*) ;
 scalar_t__ FUNC_3 (struct SiS_Private*) ;
 int FUNC_4 (int ,int,unsigned short) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,unsigned short,unsigned short) ;
 int FUNC_7 (int ,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_8(struct SiS_Private *VAR_23, unsigned short VAR_24, unsigned short VAR_25)
{
  unsigned short VAR_26, VAR_27, VAR_28, VAR_29=0;
  short VAR_30;
  VAR_28 = FUNC_0(VAR_23, VAR_24, VAR_25);

  if(VAR_23->SiS_VBInfo & VAR_10) {

     FUNC_6(VAR_23->SiS_Part1Port,0x00,0xAF,0x40);
     FUNC_5(VAR_23->SiS_Part1Port,0x2E,0xF7);

  } else {

     for(VAR_26=0,VAR_27=4; VAR_26<3; VAR_26++,VAR_27++) FUNC_4(VAR_23->SiS_Part1Port,VAR_27,0);
     if(VAR_23->ChipType >= VAR_6) {
        FUNC_5(VAR_23->SiS_Part1Port,0x02,0x7F);
     }

     VAR_30 = VAR_23->SiS_ModeType;

     if(VAR_23->ChipType < VAR_6) {
     } else {
     }

     if(VAR_23->SiS_VBInfo & VAR_1) VAR_29 = 0;

     if(VAR_23->ChipType < VAR_6) {
 FUNC_4(VAR_23->SiS_Part1Port,0x00,VAR_29);
     } else {
     }

     if(VAR_23->SiS_VBType & VAR_22) {

 VAR_29 = 0x01;
 if(!(VAR_23->SiS_VBInfo & VAR_13)) {
    VAR_29 |= 0x02;
 }
 if(!(VAR_23->SiS_VBInfo & VAR_11)) {
    VAR_29 ^= 0x05;
    if(!(VAR_23->SiS_VBInfo & VAR_9)) {
       VAR_29 ^= 0x01;
    }
 }

 if(VAR_23->ChipType < VAR_6) {

    if(VAR_23->SiS_VBInfo & VAR_1) VAR_29 = 0;

    VAR_29 = (VAR_29 << 5) & 0xFF;
    FUNC_4(VAR_23->SiS_Part1Port,0x01,VAR_29);
    VAR_29 = (VAR_29 >> 5) & 0xFF;

 } else {

    if(VAR_23->SiS_VBInfo & VAR_1) VAR_29 = 0x08;
    else if(!(FUNC_2(VAR_23))) VAR_29 |= 0x08;
    FUNC_6(VAR_23->SiS_Part1Port,0x2E,0xF0,VAR_29);
    VAR_29 &= ~0x08;

 }

 if((VAR_23->SiS_ModeType == VAR_5) && (!(VAR_23->SiS_VBInfo & VAR_13))) {
    VAR_29 |= 0x10;
 }

 VAR_29 |= 0x80;
 if(VAR_23->SiS_VBType & VAR_18) {
    if(VAR_23->PanelXRes < 1280 && VAR_23->PanelYRes < 960) VAR_29 &= ~0x80;
 }

 if(VAR_23->SiS_VBInfo & VAR_12) {
    if(!(VAR_23->SiS_TVMode & (VAR_16 | VAR_15))) {
       if(VAR_23->SiS_VBInfo & VAR_13) {
   VAR_29 |= 0x20;
       }
    }
 }

 FUNC_6(VAR_23->SiS_Part4Port,0x0D,0x40,VAR_29);

 VAR_29 = 0x80;
 if(VAR_23->SiS_VBType & VAR_18) {
    if(VAR_23->PanelXRes < 1280 && VAR_23->PanelYRes < 960) VAR_29 = 0;
 }

 if(FUNC_3(VAR_23)) VAR_29 |= 0x40;

 if(VAR_23->SiS_VBInfo & VAR_12) {
    if(VAR_23->SiS_TVMode & VAR_14) {
       VAR_29 |= 0x40;
    }
 }

 FUNC_4(VAR_23->SiS_Part4Port,0x0C,VAR_29);

     } else {

 if(VAR_23->ChipType >= VAR_6) {
 } else {
 }

     }

  }

  if(VAR_23->SiS_VBType & VAR_22) {

     if(VAR_23->ChipType >= VAR_6) {
     } else if(VAR_23->SiS_VBType & VAR_19) {
     }

     if(VAR_23->SiS_VBType & VAR_19) {
 FUNC_7(VAR_23->SiS_Part4Port,0x0D,0x80);
 if(VAR_23->SiS_VBType & VAR_20) {
    FUNC_7(VAR_23->SiS_Part4Port,0x3A,0xC0);
        }
     }

  } else {
  }

}
