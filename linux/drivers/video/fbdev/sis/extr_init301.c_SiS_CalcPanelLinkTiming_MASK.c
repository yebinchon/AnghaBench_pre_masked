
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {int SiS_LCDInfo; unsigned short CHTotal; int CModeFlag; unsigned short SiS_VGAHT; unsigned short SiS_HT; int SiS_IF_DEF_LVDS; unsigned short PanelHT; unsigned short SiS_HDE; unsigned short PanelXRes; unsigned short SiS_VGAHDE; scalar_t__ SiS_VGAVDE; scalar_t__ PanelYRes; scalar_t__ PanelVT; scalar_t__ SiS_VGAVT; scalar_t__ SiS_VT; scalar_t__ SiS_VDE; TYPE_3__* SiS_NoScaleData; scalar_t__ Alternate1600x1200; TYPE_2__* SiS_RefIndex; TYPE_1__* SiS_SModeIDTable; scalar_t__ CVTotal; scalar_t__ UseCustomMode; } ;
struct TYPE_6__ {unsigned short VGAHT; unsigned short LCDHT; scalar_t__ LCDVT; scalar_t__ VGAVT; } ;
struct TYPE_5__ {unsigned short Ext_CRT2CRTC_NS; } ;
struct TYPE_4__ {unsigned short St_CRT2CRTC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct SiS_Private *VAR_3, unsigned short VAR_4,
  unsigned short VAR_5, unsigned short VAR_6)
{
   unsigned short VAR_7;

   if(VAR_3->SiS_LCDInfo & VAR_0) {
      if(VAR_3->SiS_LCDInfo & VAR_2) {
  if(VAR_3->UseCustomMode) {
     VAR_7 = VAR_3->CHTotal;
     if(VAR_3->CModeFlag & VAR_1) VAR_7 <<= 1;
     VAR_3->SiS_VGAHT = VAR_3->SiS_HT = VAR_7;
     VAR_3->SiS_VGAVT = VAR_3->SiS_VT = VAR_3->CVTotal;
  } else {
     if(VAR_4 < 0x13) {
        VAR_7 = VAR_3->SiS_SModeIDTable[VAR_5].St_CRT2CRTC;
     } else {
        VAR_7 = VAR_3->SiS_RefIndex[VAR_6].Ext_CRT2CRTC_NS;
     }
     if(VAR_7 == 0x09) {
        if(VAR_3->Alternate1600x1200) VAR_7 = 0x20;
        else if(VAR_3->SiS_IF_DEF_LVDS == 1) VAR_7 = 0x21;
     }
     VAR_3->SiS_VGAHT = VAR_3->SiS_NoScaleData[VAR_7].VGAHT;
     VAR_3->SiS_VGAVT = VAR_3->SiS_NoScaleData[VAR_7].VGAVT;
     VAR_3->SiS_HT = VAR_3->SiS_NoScaleData[VAR_7].LCDHT;
     VAR_3->SiS_VT = VAR_3->SiS_NoScaleData[VAR_7].LCDVT;
  }
      } else {
  VAR_3->SiS_VGAHT = VAR_3->SiS_HT = VAR_3->PanelHT;
  VAR_3->SiS_VGAVT = VAR_3->SiS_VT = VAR_3->PanelVT;
      }
   } else {

      VAR_3->SiS_HDE = VAR_3->PanelXRes;
      VAR_3->SiS_VDE = VAR_3->PanelYRes;
      VAR_3->SiS_HT = VAR_3->PanelHT;
      VAR_3->SiS_VT = VAR_3->PanelVT;
      VAR_3->SiS_VGAHT = VAR_3->PanelHT - (VAR_3->PanelXRes - VAR_3->SiS_VGAHDE);
      VAR_3->SiS_VGAVT = VAR_3->PanelVT - (VAR_3->PanelYRes - VAR_3->SiS_VGAVDE);
   }
}
