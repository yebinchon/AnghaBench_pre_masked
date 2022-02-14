
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct SiS_Private {int SiS_RVBHCMAX; int SiS_RVBHCFACT; unsigned short SiS_VGAHT; unsigned short SiS_HT; unsigned short SiS_VGAVT; unsigned short SiS_VT; TYPE_4__* SiS_CRT1Table; int SiS_UseWideCRT2; TYPE_3__* SiS_EModeIDTable; TYPE_2__* SiS_StandTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_8__ {unsigned short* CR; } ;
struct TYPE_7__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_6__ {unsigned short* CRTC; } ;
struct TYPE_5__ {unsigned short St_ModeFlag; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 unsigned short FUNC_1 (struct SiS_Private*,unsigned short,int ) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_2, unsigned short VAR_3, unsigned short VAR_4,
  unsigned short VAR_5)
{
  unsigned short VAR_6=0, VAR_7=0, VAR_8, VAR_9;
  unsigned short VAR_10=0, VAR_11=0, VAR_12=0;

  VAR_2->SiS_RVBHCMAX = 1;
  VAR_2->SiS_RVBHCFACT = 1;

  if(VAR_3 <= 0x13) {

     VAR_11 = VAR_2->SiS_SModeIDTable[VAR_4].St_ModeFlag;
     VAR_8 = FUNC_0(VAR_2,VAR_3,VAR_4);

     VAR_6 = VAR_2->SiS_StandTable[VAR_8].CRTC[0];
     VAR_7 = VAR_2->SiS_StandTable[VAR_8].CRTC[6];
     VAR_10 = VAR_2->SiS_StandTable[VAR_8].CRTC[7];

     VAR_9 = (VAR_11 & VAR_0) ? 8 : 9;

  } else {

     VAR_11 = VAR_2->SiS_EModeIDTable[VAR_4].Ext_ModeFlag;
     VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_2->SiS_UseWideCRT2);

     VAR_6 = VAR_2->SiS_CRT1Table[VAR_8].CR[0];
     VAR_6 |= (VAR_2->SiS_CRT1Table[VAR_8].CR[14] << 8);
     VAR_6 &= 0x03FF;
     VAR_7 = VAR_2->SiS_CRT1Table[VAR_8].CR[6];
     VAR_12 = VAR_2->SiS_CRT1Table[VAR_8].CR[13] << 8;
     VAR_12 &= 0x0100;
     VAR_12 <<= 2;
     VAR_7 |= VAR_12;
     VAR_10 = VAR_2->SiS_CRT1Table[VAR_8].CR[7];

     VAR_9 = 8;

  }

  if(VAR_10 & 0x01) VAR_7 |= 0x0100;
  if(VAR_10 & 0x20) VAR_7 |= 0x0200;

  VAR_6 += 5;
  VAR_6 *= VAR_9;
  if(VAR_11 & VAR_1) VAR_6 <<= 1;

  VAR_7++;

  VAR_2->SiS_VGAHT = VAR_2->SiS_HT = VAR_6;
  VAR_2->SiS_VGAVT = VAR_2->SiS_VT = VAR_7;
}
