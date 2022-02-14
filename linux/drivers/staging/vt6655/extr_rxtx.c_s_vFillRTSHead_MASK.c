
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ta; int ra; void* frame_control; void* duration; } ;
struct vnt_rts_g_fb {TYPE_3__ data; void* duration_aa; void* rts_duration_aa_f1; void* rts_duration_ba_f1; void* rts_duration_aa_f0; void* rts_duration_ba_f0; void* duration_ba; void* duration_bb; int a; int b; } ;
struct TYPE_6__ {int ta; int ra; void* frame_control; void* duration; } ;
struct vnt_rts_g {TYPE_2__ data; void* duration_aa; void* duration_ba; void* duration_bb; int a; int b; } ;
struct TYPE_8__ {int ta; int ra; void* frame_control; void* duration; } ;
struct vnt_rts_ab {TYPE_4__ data; void* duration; int ab; } ;
struct TYPE_5__ {int ta; int ra; void* frame_control; void* duration; } ;
struct vnt_rts_a_fb {TYPE_1__ data; void* duration; void* rts_duration_f1; void* rts_duration_f0; int a; } ;
struct vnt_private {unsigned short byTopCCKBasicRate; unsigned short byTopOFDMBasicRate; } ;
struct ieee80211_hdr {int addr2; int addr1; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (struct vnt_private*,int ,unsigned int,unsigned char,unsigned short,int,unsigned char) ;
 int FUNC_3 (struct vnt_private*,unsigned int,unsigned short,unsigned char,int *) ;

__attribute__((used)) static
void
FUNC_4(
 struct vnt_private *VAR_14,
 unsigned char VAR_15,
 void *VAR_16,
 unsigned int VAR_17,
 bool VAR_18,
 bool VAR_19,
 struct ieee80211_hdr *VAR_20,
 unsigned short VAR_21,
 unsigned char VAR_22
)
{
 unsigned int VAR_23 = 20;

 if (!VAR_16)
  return;

 if (VAR_19) {



  VAR_23 -= 4;
 }





 if (VAR_15 == VAR_6 || VAR_15 == VAR_5) {
  if (VAR_22 == VAR_0) {
   struct vnt_rts_g *VAR_24 = VAR_16;

   FUNC_3(VAR_14, VAR_23,
       VAR_14->byTopCCKBasicRate,
       VAR_4, &VAR_24->b);

   FUNC_3(VAR_14, VAR_23,
       VAR_14->byTopOFDMBasicRate,
       VAR_15, &VAR_24->a);

   VAR_24->duration_bb =
    FUNC_2(VAR_14, VAR_13,
           VAR_17, VAR_4,
           VAR_14->byTopCCKBasicRate,
           VAR_18, VAR_22);
   VAR_24->duration_aa =
    FUNC_2(VAR_14, VAR_7,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_24->duration_ba =
    FUNC_2(VAR_14, VAR_10,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);

   VAR_24->data.duration = VAR_24->duration_aa;

   VAR_24->data.frame_control =
     FUNC_0(VAR_1 |
          VAR_2);

   FUNC_1(VAR_24->data.ra, VAR_20->addr1);
   FUNC_1(VAR_24->data.ta, VAR_20->addr2);
  } else {
   struct vnt_rts_g_fb *VAR_25 = VAR_16;

   FUNC_3(VAR_14, VAR_23,
       VAR_14->byTopCCKBasicRate,
       VAR_4, &VAR_25->b);

   FUNC_3(VAR_14, VAR_23,
       VAR_14->byTopOFDMBasicRate,
       VAR_15, &VAR_25->a);

   VAR_25->duration_bb =
    FUNC_2(VAR_14, VAR_13,
           VAR_17, VAR_4,
           VAR_14->byTopCCKBasicRate,
           VAR_18, VAR_22);
   VAR_25->duration_aa =
    FUNC_2(VAR_14, VAR_7,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_25->duration_ba =
    FUNC_2(VAR_14, VAR_10,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_25->rts_duration_ba_f0 =
    FUNC_2(VAR_14, VAR_11,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_25->rts_duration_aa_f0 =
    FUNC_2(VAR_14, VAR_8,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_25->rts_duration_ba_f1 =
    FUNC_2(VAR_14, VAR_12,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_25->rts_duration_aa_f1 =
    FUNC_2(VAR_14, VAR_9,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_25->data.duration = VAR_25->duration_aa;

   VAR_25->data.frame_control =
     FUNC_0(VAR_1 |
          VAR_2);

   FUNC_1(VAR_25->data.ra, VAR_20->addr1);
   FUNC_1(VAR_25->data.ta, VAR_20->addr2);
  }
 } else if (VAR_15 == VAR_3) {
  if (VAR_22 == VAR_0) {
   struct vnt_rts_ab *VAR_26 = VAR_16;

   FUNC_3(VAR_14, VAR_23,
       VAR_14->byTopOFDMBasicRate,
       VAR_15, &VAR_26->ab);

   VAR_26->duration =
    FUNC_2(VAR_14, VAR_7,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_26->data.duration = VAR_26->duration;

   VAR_26->data.frame_control =
     FUNC_0(VAR_1 |
          VAR_2);

   FUNC_1(VAR_26->data.ra, VAR_20->addr1);
   FUNC_1(VAR_26->data.ta, VAR_20->addr2);
  } else {
   struct vnt_rts_a_fb *VAR_27 = VAR_16;

   FUNC_3(VAR_14, VAR_23,
       VAR_14->byTopOFDMBasicRate,
       VAR_15, &VAR_27->a);

   VAR_27->duration =
    FUNC_2(VAR_14, VAR_7,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_27->rts_duration_f0 =
    FUNC_2(VAR_14, VAR_8,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_27->rts_duration_f1 =
    FUNC_2(VAR_14, VAR_9,
           VAR_17, VAR_15,
           VAR_21, VAR_18,
           VAR_22);
   VAR_27->data.duration = VAR_27->duration;

   VAR_27->data.frame_control =
     FUNC_0(VAR_1 |
          VAR_2);

   FUNC_1(VAR_27->data.ra, VAR_20->addr1);
   FUNC_1(VAR_27->data.ta, VAR_20->addr2);
  }
 } else if (VAR_15 == VAR_4) {
  struct vnt_rts_ab *VAR_28 = VAR_16;

  FUNC_3(VAR_14, VAR_23,
      VAR_14->byTopCCKBasicRate,
      VAR_4, &VAR_28->ab);

  VAR_28->duration =
   FUNC_2(VAR_14, VAR_13, VAR_17,
          VAR_15, VAR_21, VAR_18,
          VAR_22);

  VAR_28->data.duration = VAR_28->duration;

  VAR_28->data.frame_control =
   FUNC_0(VAR_1 | VAR_2);

  FUNC_1(VAR_28->data.ra, VAR_20->addr1);
  FUNC_1(VAR_28->data.ta, VAR_20->addr2);
 }
}
