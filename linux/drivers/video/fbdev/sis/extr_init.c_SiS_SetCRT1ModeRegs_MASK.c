
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned char* VirtualRomBase; unsigned short CInfoFlag; scalar_t__ SiS_ModeType; scalar_t__ ChipType; unsigned short* SiS_SR15; int SiS_SysFlags; unsigned short CSRClock; int SiS_P3d4; int SiS_P3c4; TYPE_1__* SiS_VCLKData; scalar_t__ UseCustomMode; scalar_t__ SiS_UseROM; scalar_t__ SiS_ROMNew; TYPE_2__* SiS_RefIndex; } ;
struct TYPE_4__ {unsigned short Ext_InfoFlag; } ;
struct TYPE_3__ {unsigned short CLOCK; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_2 (struct SiS_Private*) ;
 unsigned short FUNC_3 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_4 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_5 (int ,int) ;
 unsigned short FUNC_6 (struct SiS_Private*,unsigned short,unsigned short) ;
 unsigned short FUNC_7 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int,int,unsigned short) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_13(struct SiS_Private *VAR_15, unsigned short VAR_16,
  unsigned short VAR_17, unsigned short VAR_18)
{
   unsigned short VAR_19, VAR_20 = 0, VAR_21, VAR_22;





   VAR_21 = FUNC_3(VAR_15, VAR_16, VAR_17);

   if(VAR_15->UseCustomMode) {
      VAR_20 = VAR_15->CInfoFlag;
   } else {
      VAR_22 = FUNC_6(VAR_15, VAR_16, VAR_17);
      if(VAR_16 > 0x13) {
  VAR_20 = VAR_15->SiS_RefIndex[VAR_18].Ext_InfoFlag;
      }
   }


   FUNC_9(VAR_15->SiS_P3c4,0x1F,0x3F);

   VAR_19 = 0;
   if(VAR_16 > 0x13) {
      if(VAR_15->SiS_ModeType > VAR_4) {
         VAR_19 |= 0x02;
         VAR_19 |= ((VAR_15->SiS_ModeType - VAR_6) << 2);
      }
      if(VAR_20 & VAR_1) VAR_19 |= 0x20;
   }
   FUNC_10(VAR_15->SiS_P3c4,0x06,0xC0,VAR_19);

   if(VAR_15->ChipType != VAR_8) {
      VAR_19 = 0;
      if(VAR_20 & VAR_1) {

  int VAR_23 = (FUNC_5(VAR_15->SiS_P3d4,0x04) |
      ((FUNC_5(VAR_15->SiS_P3c4,0x0b) & 0xc0) << 2)) - 3;
  int VAR_24 = (FUNC_5(VAR_15->SiS_P3d4,0x00) |
      ((FUNC_5(VAR_15->SiS_P3c4,0x0b) & 0x03) << 8)) + 5;
  VAR_19 = VAR_23 - (VAR_24 >> 1) + 3;
      }
      FUNC_8(VAR_15->SiS_P3d4,0x19,VAR_19);
      FUNC_10(VAR_15->SiS_P3d4,0x1a,0xFC,((VAR_19 >> 8) & 0x03));
   }

   if(VAR_21 & VAR_0) {
      FUNC_11(VAR_15->SiS_P3c4,0x01,0x08);
   }

   VAR_19 = 0;
   if(VAR_21 & VAR_2) VAR_19 = 0x08;
   if(VAR_15->ChipType == VAR_8) {
      FUNC_10(VAR_15->SiS_P3c4,0x0F,0xF7,VAR_19);
   } else {
      if(VAR_15->ChipType >= VAR_13) VAR_19 |= 0x20;
      if(VAR_15->SiS_ModeType == VAR_4) {
  if(VAR_16 > 0x13) {
     VAR_19 |= 0x40;
  }
      }
      FUNC_10(VAR_15->SiS_P3c4,0x0F,0xB7,VAR_19);
   }
   VAR_19 = 0x60;
   if(VAR_15->SiS_ModeType != VAR_5) {
      VAR_19 ^= 0x60;
      if(VAR_15->SiS_ModeType != VAR_4) {
         VAR_19 ^= 0xA0;
      }
   }
   FUNC_10(VAR_15->SiS_P3c4,0x21,0x1F,VAR_19);

   FUNC_12(VAR_15, VAR_16, VAR_18, VAR_17);
}
