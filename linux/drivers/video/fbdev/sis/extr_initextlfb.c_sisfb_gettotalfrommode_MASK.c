
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {int SiS_UseWide; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_CRT1Table; TYPE_1__* SiS_EModeIDTable; } ;
struct TYPE_6__ {int Ext_InfoFlag; unsigned short Ext_CRT1CRTC_WIDE; unsigned short Ext_CRT1CRTC_NORM; unsigned short Ext_CRT1CRTC; } ;
struct TYPE_5__ {unsigned char* CR; } ;
struct TYPE_4__ {unsigned short REFindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (struct SiS_Private*,unsigned short*,unsigned short*) ;

bool
FUNC_2(struct SiS_Private *VAR_2, unsigned char VAR_3, int *VAR_4,
   int *VAR_5, unsigned char VAR_6)
{
    unsigned short VAR_7 = VAR_3;
    unsigned short VAR_8 = 0, VAR_9 = 0;
    unsigned short VAR_10 = 0;
    unsigned char VAR_11, VAR_12, VAR_13;

    if(!FUNC_0(VAR_2)) return 0;

    if(VAR_6 > 0) VAR_6--;
    if(!(FUNC_1(VAR_2, &VAR_7, &VAR_8))) return 0;

    VAR_10 = VAR_2->SiS_EModeIDTable[VAR_8].REFindex;
    if(VAR_2->SiS_RefIndex[VAR_10].Ext_InfoFlag & VAR_0) {
       if(VAR_2->SiS_UseWide == 1) {

   VAR_9 = VAR_2->SiS_RefIndex[VAR_10].Ext_CRT1CRTC_WIDE;
       } else {
   VAR_10 += VAR_6;
   VAR_9 = VAR_2->SiS_RefIndex[VAR_10].Ext_CRT1CRTC_NORM;
       }
    } else {
       VAR_10 += VAR_6;
       VAR_9 = VAR_2->SiS_RefIndex[VAR_10].Ext_CRT1CRTC;
    }

    VAR_11 = VAR_2->SiS_CRT1Table[VAR_9].CR[14];
    VAR_12 = VAR_2->SiS_CRT1Table[VAR_9].CR[0];
    *VAR_4 = (((VAR_12 & 0xff) | ((unsigned short) (VAR_11 & 0x03) << 8)) + 5) * 8;

    VAR_11 = VAR_2->SiS_CRT1Table[VAR_9].CR[13];
    VAR_12 = VAR_2->SiS_CRT1Table[VAR_9].CR[6];
    VAR_13 = VAR_2->SiS_CRT1Table[VAR_9].CR[7];
    *VAR_5 = ((VAR_12 & 0xFF) |
        ((unsigned short)(VAR_13 & 0x01) << 8) |
        ((unsigned short)(VAR_13 & 0x20) << 4) |
        ((unsigned short)(VAR_11 & 0x01) << 10)) + 2;

    if(VAR_2->SiS_RefIndex[VAR_10].Ext_InfoFlag & VAR_1)
       *VAR_5 *= 2;

    return 1;
}
