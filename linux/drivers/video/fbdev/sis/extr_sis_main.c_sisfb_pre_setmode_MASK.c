
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int SiS_UseOEM; } ;
struct sis_video_info {int currentvbflags; int rate_idx; scalar_t__ sisvga_engine; scalar_t__ chip; int curFSTN; int curDSTN; int vbflags; int vbflags2; int sisfb_dstn; int sisfb_fstn; size_t sisfb_mode_idx; int sisfb_useoem; TYPE_2__ SiS_Pr; int sisfb_nocrt2rate; } ;
struct TYPE_4__ {int rate_idx; } ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 TYPE_1__* VAR_32 ;
 int FUNC_5 (struct sis_video_info*) ;

__attribute__((used)) static void
FUNC_6(struct sis_video_info *VAR_33)
{
 u8 VAR_34 = 0, VAR_35 = 0, VAR_36 = 0, VAR_37 = 0, VAR_38 = 0;
 int VAR_39 = 0;

 VAR_33->currentvbflags &= (VAR_31 | VAR_30);

 FUNC_3(VAR_1, 0x05, 0x86);

 VAR_35 = FUNC_0(VAR_0, 0x31);
 VAR_35 &= ~0x60;
 VAR_35 |= 0x04;

 VAR_36 = VAR_33->rate_idx & 0x0F;
 FUNC_1(&VAR_33->SiS_Pr, 0);
 FUNC_2(&VAR_33->SiS_Pr, 0);
 VAR_33->curFSTN = VAR_33->curDSTN = 0;

 switch(VAR_33->currentvbflags & VAR_30) {

    case 129:
       VAR_38 &= ~0xc0;
       if((VAR_33->vbflags & VAR_23) && (VAR_33->vbflags2 & VAR_29)) {
       } else if((VAR_33->vbflags & VAR_15) &&
    (VAR_33->vbflags2 & VAR_28)) {
   if(VAR_33->chip >= VAR_5) {
      VAR_38 |= 0x04;
      VAR_37 |= 0x60;
   } else {
      VAR_34 |= 0x80;
   }
   VAR_34 |= VAR_7;
   VAR_35 |= 0x01;
   VAR_37 |= 0x01;
   VAR_33->currentvbflags |= VAR_15;
       } else if(VAR_33->vbflags & VAR_21) {
   VAR_34 = (VAR_12 | VAR_7);
   VAR_35 |= 0x01;
   VAR_37 |= 0x01;
   VAR_33->currentvbflags |= VAR_21;
       } else {
   if(VAR_33->vbflags & VAR_22) {
      VAR_34 = (VAR_13 | VAR_7);
      VAR_33->currentvbflags |= VAR_22;
   }
   if(VAR_33->vbflags & VAR_14) {
      VAR_34 = (VAR_8 | VAR_7);
      VAR_33->currentvbflags |= VAR_14;
   }
       }
       VAR_35 |= VAR_6;

       if(VAR_33->vbflags & (VAR_14 | VAR_22)) {
   if(VAR_33->vbflags & VAR_18) {
      VAR_35 |= 0x01; VAR_37 |= 0x01;
      VAR_33->currentvbflags |= VAR_18;
      if(VAR_33->vbflags & VAR_19) {
         VAR_38 |= 0x40; VAR_37 |= 0x04;
         VAR_33->currentvbflags |= VAR_19;
      } else if(VAR_33->vbflags & VAR_20) {
         VAR_38 |= 0x80; VAR_37 |= 0x08;
         VAR_33->currentvbflags |= VAR_20;
      }
   } else {
      VAR_35 &= ~0x01; VAR_37 &= ~0x01;
      VAR_33->currentvbflags |= VAR_16;
      if(VAR_33->vbflags & VAR_17) {
         VAR_38 |= 0x40; VAR_37 |= 0x02;
         VAR_33->currentvbflags |= VAR_17;
      }
   }
       }
       break;

    case 130:
       VAR_34 = (VAR_11 | VAR_7);
       VAR_35 |= VAR_6;
       FUNC_1(&VAR_33->SiS_Pr, VAR_33->sisfb_dstn);
       FUNC_2(&VAR_33->SiS_Pr, VAR_33->sisfb_fstn);
       VAR_33->curFSTN = VAR_33->sisfb_fstn;
       VAR_33->curDSTN = VAR_33->sisfb_dstn;
       break;

    case 128:
       VAR_34 = (VAR_9 | VAR_7);
       VAR_35 |= VAR_6;
       if(VAR_33->sisfb_nocrt2rate) {
   VAR_36 |= (VAR_32[VAR_33->sisfb_mode_idx].rate_idx << 4);
       } else {
   VAR_36 |= ((VAR_33->rate_idx & 0x0F) << 4);
       }
       break;

    default:
       VAR_34 = 0x00;
       VAR_35 |= (VAR_6 | VAR_10);
 }

 FUNC_3(VAR_0, 0x30, VAR_34);
 FUNC_3(VAR_0, 0x33, VAR_36);

 if(VAR_33->chip >= VAR_5) {






 } else if(VAR_33->chip != VAR_2) {
    FUNC_3(VAR_0, VAR_39, VAR_38);
 }
 FUNC_3(VAR_0, 0x31, VAR_35);

 VAR_33->SiS_Pr.SiS_UseOEM = VAR_33->sisfb_useoem;

 FUNC_5(VAR_33);
}
