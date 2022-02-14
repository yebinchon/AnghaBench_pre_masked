
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {TYPE_1__* SiS_RefIndex; } ;
struct TYPE_2__ {int Ext_InfoFlag; unsigned short Ext_CRT1CRTC_WIDE; unsigned short Ext_CRT1CRTC_NORM; unsigned short Ext_CRT1CRTC; } ;


 int VAR_0 ;

unsigned short
FUNC_0(struct SiS_Private *VAR_1, unsigned short VAR_2, int VAR_3)
{
   if(VAR_1->SiS_RefIndex[VAR_2].Ext_InfoFlag & VAR_0) {
      if(VAR_3 == 1) {
         return VAR_1->SiS_RefIndex[VAR_2].Ext_CRT1CRTC_WIDE;
      } else {
         return VAR_1->SiS_RefIndex[VAR_2].Ext_CRT1CRTC_NORM;
      }
   } else {
      return VAR_1->SiS_RefIndex[VAR_2].Ext_CRT1CRTC;
   }
}
