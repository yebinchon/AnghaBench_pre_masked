
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int SiS_MyCR63; } ;
struct sis_video_info {int modechanged; int vbflags2; scalar_t__ sisvga_engine; int currentvbflags; int chronteltype; int tvx; int tvy; scalar_t__ engineok; scalar_t__ accel; scalar_t__ tvypos; scalar_t__ tvxpos; TYPE_1__ SiS_Pr; void* p2_02; void* p2_01; void* p2_43; void* p2_42; void* p2_2b; void* p2_20; void* p2_1f; scalar_t__ sisfb_crt1off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (struct sis_video_info*) ;
 int FUNC_6 (struct sis_video_info*) ;
 int FUNC_7 (struct sis_video_info*) ;
 int FUNC_8 (struct sis_video_info*) ;
 int FUNC_9 (struct sis_video_info*,scalar_t__) ;
 int FUNC_10 (struct sis_video_info*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct sis_video_info *VAR_14)
{
 bool VAR_15 = 0;
 bool VAR_16 = 1;







 FUNC_2(VAR_4, 0x05, 0x86);






 VAR_14->modechanged = 1;


 if(VAR_14->vbflags2 & VAR_9) {
  if(FUNC_5(VAR_14)) VAR_16 = 0;
 } else
  VAR_14->sisfb_crt1off = 0;
 if(VAR_15) {
  VAR_14->currentvbflags &= ~VAR_10;
  VAR_14->currentvbflags |= VAR_13;
 } else {
  VAR_14->currentvbflags |= VAR_10;
  if(VAR_14->currentvbflags & VAR_11) {
   VAR_14->currentvbflags |= VAR_12;
  } else {
   VAR_14->currentvbflags |= VAR_13;
  }
 }

 FUNC_3(VAR_4, VAR_1, ~0x04);

 if(VAR_14->currentvbflags & VAR_0) {
  if(VAR_14->vbflags2 & VAR_8) {
   VAR_14->p2_1f = FUNC_1(VAR_3, 0x1f);
   VAR_14->p2_20 = FUNC_1(VAR_3, 0x20);
   VAR_14->p2_2b = FUNC_1(VAR_3, 0x2b);
   VAR_14->p2_42 = FUNC_1(VAR_3, 0x42);
   VAR_14->p2_43 = FUNC_1(VAR_3, 0x43);
   VAR_14->p2_01 = FUNC_1(VAR_3, 0x01);
   VAR_14->p2_02 = FUNC_1(VAR_3, 0x02);
  } else if(VAR_14->vbflags2 & VAR_7) {
   if(VAR_14->chronteltype == 1) {
    VAR_14->tvx = FUNC_0(&VAR_14->SiS_Pr, 0x0a);
    VAR_14->tvx |= (((FUNC_0(&VAR_14->SiS_Pr, 0x08) & 0x02) >> 1) << 8);
    VAR_14->tvy = FUNC_0(&VAR_14->SiS_Pr, 0x0b);
    VAR_14->tvy |= ((FUNC_0(&VAR_14->SiS_Pr, 0x08) & 0x01) << 8);
   }
  }
 }

 if(VAR_14->tvxpos) {
  FUNC_9(VAR_14, VAR_14->tvxpos);
 }
 if(VAR_14->tvypos) {
  FUNC_10(VAR_14, VAR_14->tvypos);
 }


 FUNC_6(VAR_14);


 if(VAR_14->accel) {
  FUNC_7(VAR_14);
 } else {
  VAR_14->engineok = 0;
 }
}
