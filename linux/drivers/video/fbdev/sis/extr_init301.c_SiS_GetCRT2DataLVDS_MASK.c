
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBType; int SiS_RVBHCMAX; int SiS_RVBHCFACT; int SiS_RVBHRS; int SiS_VBInfo; unsigned short SiS_IF_DEF_LVDS; int SiS_LCDInfo; int SiS_SetFlag; int SiS_HDE; int PanelXRes; int SiS_VDE; int PanelYRes; scalar_t__ SiS_CustomT; int SiS_VT; int SiS_HT; int SiS_VGAVT; int SiS_VGAHT; struct SiS_LVDSData* SiS_CHTVSOPALData; struct SiS_LVDSData* SiS_CHTVOPALNData; struct SiS_LVDSData* SiS_CHTVUPALNData; struct SiS_LVDSData* SiS_CHTVOPALMData; struct SiS_LVDSData* SiS_CHTVUPALMData; struct SiS_LVDSData* SiS_CHTVOPALData; struct SiS_LVDSData* SiS_CHTVUPALData; struct SiS_LVDSData* SiS_CHTVONTSCData; struct SiS_LVDSData* SiS_CHTVUNTSCData; struct SiS_LVDSData* SiS_LVDS848x480Data_2; struct SiS_LVDSData* SiS_LVDS848x480Data_1; struct SiS_LVDSData* SiS_LVDSBARCO1024Data_1; struct SiS_LVDSData* SiS_LVDSBARCO1366Data_2; struct SiS_LVDSData* SiS_LVDSBARCO1366Data_1; struct SiS_LVDSData* SiS_LVDS1024x768Data_1; struct SiS_LVDSData* SiS_LVDS1024x600Data_1; struct SiS_LVDSData* SiS_LVDS800x600Data_1; struct SiS_LVDSData* SiS_LVDS640x480Data_1; struct SiS_LVDSData* SiS_LVDS320x240Data_2; struct SiS_LVDSData* SiS_LVDS320x240Data_1; scalar_t__ SiS_RVBHRS2; scalar_t__ SiS_RY4COE; scalar_t__ SiS_RY3COE; scalar_t__ SiS_RY2COE; scalar_t__ SiS_RY1COE; scalar_t__ SiS_NewFlickerMode; } ;
struct SiS_LVDSData {int LCDVT; int LCDHT; int VGAVT; int VGAHT; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_1 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_2 (struct SiS_Private*,unsigned short,unsigned short,unsigned short,unsigned short*,unsigned short*) ;
 int FUNC_3 (struct SiS_Private*,unsigned short,unsigned short) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4(struct SiS_Private *VAR_8, unsigned short VAR_9, unsigned short VAR_10,
                    unsigned short VAR_11)
{
   unsigned short VAR_12, VAR_13, VAR_14;
   const struct SiS_LVDSData *VAR_15 = ((void*)0);

   FUNC_3(VAR_8, VAR_9, VAR_10);

   if(VAR_8->SiS_VBType & VAR_7) {
      VAR_8->SiS_RVBHCMAX = 1;
      VAR_8->SiS_RVBHCFACT = 1;
      VAR_8->SiS_NewFlickerMode = 0;
      VAR_8->SiS_RVBHRS = 50;
      VAR_8->SiS_RY1COE = 0;
      VAR_8->SiS_RY2COE = 0;
      VAR_8->SiS_RY3COE = 0;
      VAR_8->SiS_RY4COE = 0;
      VAR_8->SiS_RVBHRS2 = 0;
   }

   if((VAR_8->SiS_VBType & VAR_7) && (VAR_8->SiS_VBInfo & VAR_4)) {






   } else {


      VAR_14 = VAR_8->SiS_IF_DEF_LVDS;
      if((VAR_8->SiS_VBType & VAR_6) && (VAR_8->SiS_VBInfo & VAR_3)) {
  VAR_8->SiS_IF_DEF_LVDS = 1;
      }

      FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11,
                                   &VAR_12, &VAR_13);

      VAR_8->SiS_IF_DEF_LVDS = VAR_14;

      switch(VAR_12) {
  case 10: VAR_15 = VAR_8->SiS_LVDS320x240Data_1; break;
  case 14: VAR_15 = VAR_8->SiS_LVDS320x240Data_2; break;
  case 12: VAR_15 = VAR_8->SiS_LVDS640x480Data_1; break;
  case 16: VAR_15 = VAR_8->SiS_LVDS800x600Data_1; break;
  case 18: VAR_15 = VAR_8->SiS_LVDS1024x600Data_1; break;
  case 20: VAR_15 = VAR_8->SiS_LVDS1024x768Data_1; break;







  case 90: VAR_15 = VAR_8->SiS_CHTVUNTSCData; break;
  case 91: VAR_15 = VAR_8->SiS_CHTVONTSCData; break;
  case 92: VAR_15 = VAR_8->SiS_CHTVUPALData; break;
  case 93: VAR_15 = VAR_8->SiS_CHTVOPALData; break;
  case 94: VAR_15 = VAR_8->SiS_CHTVUPALMData; break;
  case 95: VAR_15 = VAR_8->SiS_CHTVOPALMData; break;
  case 96: VAR_15 = VAR_8->SiS_CHTVUPALNData; break;
  case 97: VAR_15 = VAR_8->SiS_CHTVOPALNData; break;
  case 99: VAR_15 = VAR_8->SiS_CHTVSOPALData; break;
      }

      if(VAR_15) {
  VAR_8->SiS_VGAHT = (VAR_15+VAR_13)->VGAHT;
  VAR_8->SiS_VGAVT = (VAR_15+VAR_13)->VGAVT;
  VAR_8->SiS_HT = (VAR_15+VAR_13)->LCDHT;
  VAR_8->SiS_VT = (VAR_15+VAR_13)->LCDVT;
      } else {
  FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11);
      }

      if( (!(VAR_8->SiS_VBType & VAR_7)) &&
   (VAR_8->SiS_VBInfo & VAR_3) &&
   (!(VAR_8->SiS_LCDInfo & VAR_2)) ) {
  if( (!(VAR_8->SiS_LCDInfo & VAR_1)) ||
      (VAR_8->SiS_SetFlag & VAR_5) ) {
     VAR_8->SiS_HDE = VAR_8->PanelXRes;
            VAR_8->SiS_VDE = VAR_8->PanelYRes;
         }
      }
   }
}
