
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned short SiS_VGAHDE; int SiS_LCDInfo; unsigned short CHDisplay; unsigned short CHBlankStart; unsigned short CVDisplay; unsigned short SiS_VGAVDE; unsigned short CVBlankStart; scalar_t__ ChipType; unsigned short SiS_VGAHT; unsigned short PanelHT; unsigned short PanelXRes; unsigned short CHTotal; unsigned short CHBlankEnd; int CHSyncStart; int PanelHRS; int CHSyncEnd; int PanelHRE; unsigned short PanelVT; unsigned short PanelYRes; scalar_t__ SiS_LCDResInfo; unsigned short SiS_VGAVT; unsigned short CVTotal; unsigned short CVBlankEnd; unsigned short CVSyncStart; unsigned short CVSyncEnd; int* CCRT1CRTC; int SiS_P3d4; int SiS_P3c4; scalar_t__ PanelVRE; scalar_t__ PanelVRS; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct SiS_Private*,int) ;
 unsigned short FUNC_1 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,unsigned short) ;

void
FUNC_5(struct SiS_Private *VAR_8, unsigned short VAR_9,
  unsigned short VAR_10)
{
   unsigned short VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;
   unsigned short VAR_15 = VAR_8->SiS_VGAHDE;
   int VAR_16, VAR_17;


   if(VAR_8->SiS_LCDInfo & VAR_3) return;

   VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_10);

   if(VAR_11 & VAR_2) VAR_15 >>= 1;

   VAR_8->CHDisplay = VAR_15;
   VAR_8->CHBlankStart = VAR_15;

   VAR_8->CVDisplay = VAR_8->SiS_VGAVDE;
   VAR_8->CVBlankStart = VAR_8->SiS_VGAVDE;

   if(VAR_8->ChipType < VAR_7) {
   } else {
   }
   VAR_8->CHTotal = VAR_8->CHBlankEnd = VAR_13;

   if(VAR_8->ChipType < VAR_7) {
   } else {
   }

   VAR_13 = VAR_8->PanelVT - VAR_8->PanelYRes;
   VAR_12 = VAR_8->SiS_VGAVDE;
   if(VAR_8->SiS_LCDInfo & VAR_0) {
      VAR_12 = VAR_8->PanelYRes;
   } else if(VAR_8->ChipType < VAR_7) {
   }
   VAR_8->CVTotal = VAR_8->CVBlankEnd = VAR_13 + VAR_12;

   VAR_12 = VAR_8->SiS_VGAVDE;
   if(VAR_8->SiS_LCDInfo & VAR_0) {
      VAR_12 += (VAR_8->PanelYRes - VAR_12) >> 1;
   }
   VAR_12 += VAR_8->PanelVRS;
   VAR_8->CVSyncStart = VAR_12;
   VAR_12 += VAR_8->PanelVRE;
   VAR_8->CVSyncEnd = VAR_12;
   if(VAR_8->ChipType < VAR_7) {
      VAR_8->CVSyncStart--;
      VAR_8->CVSyncEnd--;
   }

   FUNC_0(VAR_8, 8);
   VAR_8->CCRT1CRTC[15] &= ~0xF8;
   VAR_8->CCRT1CRTC[15] |= (VAR_14 << 4);
   VAR_8->CCRT1CRTC[16] &= ~0xE0;

   FUNC_3(VAR_8->SiS_P3d4,0x11,0x7f);

   for(VAR_16 = 0, VAR_17 = 0; VAR_16 <= 7; VAR_16++, VAR_17++) {
      FUNC_2(VAR_8->SiS_P3d4,VAR_17,VAR_8->CCRT1CRTC[VAR_16]);
   }
   for(VAR_17 = 0x10; VAR_16 <= 10; VAR_16++, VAR_17++) {
      FUNC_2(VAR_8->SiS_P3d4,VAR_17,VAR_8->CCRT1CRTC[VAR_16]);
   }
   for(VAR_17 = 0x15; VAR_16 <= 12; VAR_16++, VAR_17++) {
      FUNC_2(VAR_8->SiS_P3d4,VAR_17,VAR_8->CCRT1CRTC[VAR_16]);
   }
   for(VAR_17 = 0x0A; VAR_16 <= 15; VAR_16++, VAR_17++) {
      FUNC_2(VAR_8->SiS_P3c4,VAR_17,VAR_8->CCRT1CRTC[VAR_16]);
   }

   VAR_12 = VAR_8->CCRT1CRTC[16] & 0xE0;
   FUNC_4(VAR_8->SiS_P3c4,0x0E,0x1F,VAR_12);

   VAR_12 = (VAR_8->CCRT1CRTC[16] & 0x01) << 5;
   if(VAR_11 & VAR_1) VAR_12 |= 0x80;
   FUNC_4(VAR_8->SiS_P3d4,0x09,0x5F,VAR_12);

}
