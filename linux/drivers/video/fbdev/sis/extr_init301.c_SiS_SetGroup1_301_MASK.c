
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {unsigned short CModeFlag; unsigned short CHDisplay; scalar_t__ ChipType; int CHTotal; unsigned short SiS_VGAHDE; int CHBlankStart; int SiS_VBInfo; int CHBlankEnd; int SiS_VGAHT; int SiS_LCDInfo; short SiS_RVBHRS2; unsigned short CHSyncStart; int CHSyncEnd; int CVTotal; unsigned short SiS_VGAVDE; unsigned short CVDisplay; unsigned short CVBlankStart; int CVBlankEnd; unsigned short SiS_VGAVT; unsigned short CVSyncStart; unsigned short CVSyncEnd; int* CCRT1CRTC; int SiS_Part1Port; scalar_t__ SiS_P3ca; int SiS_P3c4; int SiS_P3d4; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; scalar_t__ UseCustomMode; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short XRes; } ;
struct TYPE_5__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct SiS_Private*,int ) ;
 int FUNC_1 (int ,int) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned short const,unsigned short) ;
 int FUNC_4 (int ,unsigned short const,int,unsigned short) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static void
FUNC_6(struct SiS_Private *VAR_7, unsigned short VAR_8,unsigned short VAR_9,
                  unsigned short VAR_10)
{
  unsigned short VAR_11, VAR_12, VAR_13, VAR_14, VAR_15=0, VAR_16;
  static const unsigned short VAR_17[] = {

   0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,

   0x00, 0x0b, 0x17, 0x18, 0x19, 0x00, 0x1a, 0x00,

   0x0c, 0x0d, 0x0e, 0x00, 0x0f, 0x10, 0x11, 0x00
  };

  if(VAR_8 <= 0x13) {
     VAR_12 = VAR_7->SiS_SModeIDTable[VAR_9].St_ModeFlag;
  } else if(VAR_7->UseCustomMode) {
     VAR_12 = VAR_7->CModeFlag;
     VAR_15 = VAR_7->CHDisplay;
  } else {
     VAR_12 = VAR_7->SiS_EModeIDTable[VAR_9].Ext_ModeFlag;
     VAR_15 = VAR_7->SiS_RefIndex[VAR_10].XRes;
  }



  if(VAR_7->ChipType >= VAR_4) {
     if(VAR_15 >= 1600) {
        FUNC_5(VAR_7->SiS_P3c4,0x31,0x04);
     }
  }

  VAR_7->CHTotal = 8224;

  VAR_7->CHDisplay = VAR_7->SiS_VGAHDE;
  if(VAR_12 & VAR_1) VAR_7->CHDisplay >>= 1;

  VAR_7->CHBlankStart = VAR_7->CHDisplay;
  if(VAR_7->SiS_VBInfo & VAR_6) {
     VAR_7->CHBlankStart += 16;
  }

  VAR_7->CHBlankEnd = 32;
  if(VAR_7->SiS_VBInfo & VAR_5) {
     if(VAR_15 == 1600) VAR_7->CHBlankEnd += 80;
  }

  VAR_11 = VAR_7->SiS_VGAHT - 96;
  if(!(VAR_12 & VAR_1)) VAR_11 -= 32;
  if(VAR_7->SiS_LCDInfo & VAR_2) {
     VAR_11 = FUNC_1(VAR_7->SiS_P3d4,0x04);
     VAR_11 |= ((FUNC_1(VAR_7->SiS_P3c4,0x0b) & 0xc0) << 2);
     VAR_11 -= 3;
     VAR_11 <<= 3;
  } else {
     if(VAR_7->SiS_RVBHRS2) VAR_11 = VAR_7->SiS_RVBHRS2;
  }
  VAR_7->CHSyncStart = VAR_11;

  VAR_7->CHSyncEnd = 0xffe8;

  VAR_7->CVTotal = 2049;

  VAR_16 = VAR_7->SiS_VGAVDE;
  if (VAR_16 == 357) VAR_16 = 350;
  else if(VAR_16 == 360) VAR_16 = 350;
  else if(VAR_16 == 375) VAR_16 = 350;
  else if(VAR_16 == 405) VAR_16 = 400;
  else if(VAR_16 == 420) VAR_16 = 400;
  else if(VAR_16 == 525) VAR_16 = 480;
  else if(VAR_16 == 1056) VAR_16 = 1024;
  VAR_7->CVDisplay = VAR_16;

  VAR_7->CVBlankStart = VAR_7->CVDisplay;

  VAR_7->CVBlankEnd = 1;
  if(VAR_8 == 0x3c) VAR_7->CVBlankEnd = 226;

  VAR_11 = (VAR_7->SiS_VGAVT - VAR_16) >> 1;
  VAR_7->CVSyncStart = VAR_16 + VAR_11;

  VAR_11 >>= 3;
  VAR_7->CVSyncEnd = VAR_7->CVSyncStart + VAR_11;

  FUNC_0(VAR_7, 0);
  VAR_7->CCRT1CRTC[16] &= ~0xE0;

  for(VAR_13 = 0; VAR_13 <= 7; VAR_13++) {
     FUNC_3(VAR_7->SiS_Part1Port,VAR_17[VAR_13],VAR_7->CCRT1CRTC[VAR_13]);
  }
  for(VAR_13 = 0x10, VAR_14 = 8; VAR_13 <= 0x12; VAR_13++, VAR_14++) {
     FUNC_3(VAR_7->SiS_Part1Port,VAR_17[VAR_13],VAR_7->CCRT1CRTC[VAR_14]);
  }
  for(VAR_13 = 0x15, VAR_14 = 11; VAR_13 <= 0x16; VAR_13++, VAR_14++) {
     FUNC_3(VAR_7->SiS_Part1Port,VAR_17[VAR_13],VAR_7->CCRT1CRTC[VAR_14]);
  }
  for(VAR_13 = 0x0a, VAR_14 = 13; VAR_13 <= 0x0c; VAR_13++, VAR_14++) {
     FUNC_3(VAR_7->SiS_Part1Port,VAR_17[VAR_13],VAR_7->CCRT1CRTC[VAR_14]);
  }

  VAR_11 = VAR_7->CCRT1CRTC[16] & 0xE0;
  FUNC_4(VAR_7->SiS_Part1Port,VAR_17[0x0E],0x1F,VAR_11);

  VAR_11 = (VAR_7->CCRT1CRTC[16] & 0x01) << 5;
  if(VAR_12 & VAR_0) VAR_11 |= 0x80;
  FUNC_4(VAR_7->SiS_Part1Port,VAR_17[0x09],0x5F,VAR_11);

  VAR_11 = 0;
  VAR_11 |= (FUNC_1(VAR_7->SiS_P3c4,0x01) & 0x01);
  if(VAR_12 & VAR_1) VAR_11 |= 0x08;
  FUNC_3(VAR_7->SiS_Part1Port,0x16,VAR_11);

  FUNC_3(VAR_7->SiS_Part1Port,0x0F,0x00);
  FUNC_3(VAR_7->SiS_Part1Port,0x12,0x00);

  VAR_11 = 0;
  if(VAR_7->SiS_LCDInfo & VAR_3) {
     VAR_11 = (FUNC_1(VAR_7->SiS_Part1Port,0x00) & 0x01) << 7;
  }
  FUNC_3(VAR_7->SiS_Part1Port,0x1A,VAR_11);

  VAR_11 = FUNC_2((VAR_7->SiS_P3ca+0x02));
  FUNC_3(VAR_7->SiS_Part1Port,0x1b,VAR_11);
}
