
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sis_video_info {int tvxpos; int currentvbflags; int vbflags2; int tvx; int chronteltype; int p2_1f; int p2_20; int p2_2b; int p2_42; int p2_43; int SiS_Pr; int modechanged; scalar_t__ sisfblocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct sis_video_info *VAR_5, int VAR_6)
{
 if(VAR_6 > 32) VAR_6 = 32;
 if(VAR_6 < -32) VAR_6 = -32;
 VAR_5->tvxpos = VAR_6;

 if(VAR_5->sisfblocked) return;
 if(!VAR_5->modechanged) return;

 if(VAR_5->currentvbflags & VAR_0) {

  if(VAR_5->vbflags2 & VAR_3) {

   int VAR_7 = VAR_5->tvx;

   switch(VAR_5->chronteltype) {
   case 1:
    VAR_7 += VAR_6;
    if(VAR_7 < 0) VAR_7 = 0;
    FUNC_2(VAR_2, 0x05, 0x86);
    FUNC_0(&VAR_5->SiS_Pr, 0x0a, (VAR_7 & 0xff));
    FUNC_1(&VAR_5->SiS_Pr, 0x08, ((VAR_7 & 0x0100) >> 7), 0xFD);
    break;
   case 2:

    break;
   }

  } else if(VAR_5->vbflags2 & VAR_4) {

   u8 VAR_8,VAR_9,VAR_10,VAR_11,VAR_12;
   unsigned short VAR_13;

   VAR_8 = VAR_5->p2_1f;
   VAR_9 = VAR_5->p2_20;
   VAR_10 = VAR_5->p2_2b;
   VAR_11 = VAR_5->p2_42;
   VAR_12 = VAR_5->p2_43;

   VAR_13 = VAR_8 | ((VAR_9 & 0xf0) << 4);
   VAR_13 += (VAR_6 * 2);
   VAR_8 = VAR_13 & 0xff;
   VAR_9 = (VAR_13 & 0xf00) >> 4;
   VAR_10 = ((VAR_10 & 0x0f) + (VAR_6 * 2)) & 0x0f;
   VAR_13 = VAR_12 | ((VAR_11 & 0xf0) << 4);
   VAR_13 += (VAR_6 * 2);
   VAR_12 = VAR_13 & 0xff;
   VAR_11 = (VAR_13 & 0xf00) >> 4;
   FUNC_2(VAR_1, 0x1f, VAR_8);
   FUNC_3(VAR_1, 0x20, 0x0F, VAR_9);
   FUNC_3(VAR_1, 0x2b, 0xF0, VAR_10);
   FUNC_3(VAR_1, 0x42, 0x0F, VAR_11);
   FUNC_2(VAR_1, 0x43, VAR_12);
  }
 }
}
