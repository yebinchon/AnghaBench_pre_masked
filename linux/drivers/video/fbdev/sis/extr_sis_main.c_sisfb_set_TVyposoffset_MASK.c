
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_video_info {int tvypos; int currentvbflags; int vbflags2; int tvy; int chronteltype; char p2_01; char p2_02; int SiS_Pr; int modechanged; scalar_t__ sisfblocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int ,int,char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct sis_video_info *VAR_7, int VAR_8)
{
 if(VAR_8 > 32) VAR_8 = 32;
 if(VAR_8 < -32) VAR_8 = -32;
 VAR_7->tvypos = VAR_8;

 if(VAR_7->sisfblocked) return;
 if(!VAR_7->modechanged) return;

 if(VAR_7->currentvbflags & VAR_0) {

  if(VAR_7->vbflags2 & VAR_5) {

   int VAR_9 = VAR_7->tvy;

   switch(VAR_7->chronteltype) {
   case 1:
    VAR_9 -= VAR_8;
    if(VAR_9 < 0) VAR_9 = 0;
    FUNC_2(VAR_2, 0x05, 0x86);
    FUNC_0(&VAR_7->SiS_Pr, 0x0b, (VAR_9 & 0xff));
    FUNC_1(&VAR_7->SiS_Pr, 0x08, ((VAR_9 & 0x0100) >> 8), 0xFE);
    break;
   case 2:

    break;
   }

  } else if(VAR_7->vbflags2 & VAR_6) {

   char VAR_10, VAR_11;
   VAR_8 /= 2;
   VAR_10 = VAR_7->p2_01;
   VAR_11 = VAR_7->p2_02;

   VAR_10 += VAR_8;
   VAR_11 += VAR_8;
   if(!(VAR_7->currentvbflags & (VAR_3 | VAR_4))) {
    while((VAR_10 <= 0) || (VAR_11 <= 0)) {
     VAR_10 += 2;
     VAR_11 += 2;
    }
   }
   FUNC_2(VAR_1, 0x01, VAR_10);
   FUNC_2(VAR_1, 0x02, VAR_11);
  }
 }
}
