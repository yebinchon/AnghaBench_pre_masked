
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_tx_datahead_g_fb {void* duration_a; void* time_stamp_off_b; void* time_stamp_off_a; void* duration_a_f1; void* duration_a_f0; void* duration_b; int b; int a; } ;
struct vnt_tx_datahead_g {void* duration_a; void* time_stamp_off_b; void* time_stamp_off_a; void* duration_b; int b; int a; } ;
struct vnt_tx_datahead_ab {void* duration; void* time_stamp_off; int ab; } ;
struct vnt_tx_datahead_a_fb {void* duration; void* time_stamp_off; void* duration_f1; void* duration_f0; int a; } ;
struct vnt_private {unsigned short byTopCCKBasicRate; int current_aid; } ;
typedef void* __le16 ;


 unsigned char VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vnt_private*,int ,unsigned int,unsigned char,unsigned short,int,unsigned int,unsigned int,unsigned int,unsigned char) ;
 int FUNC_3 (struct vnt_private*,unsigned int,unsigned short,unsigned char,int *) ;
 void* FUNC_4 (struct vnt_private*,unsigned short) ;

__attribute__((used)) static
__le16
FUNC_5(
 struct vnt_private *VAR_9,
 unsigned char VAR_10,
 void *VAR_11,
 unsigned int VAR_12,
 unsigned int VAR_13,
 bool VAR_14,
 unsigned int VAR_15,
 unsigned int VAR_16,
 unsigned int VAR_17,
 unsigned char VAR_18,
 unsigned short VAR_19,
 bool VAR_20
)
{
 if (!VAR_11)
  return 0;

 if (VAR_10 == VAR_8 || VAR_10 == VAR_7) {
  if (VAR_18 == VAR_0) {
   struct vnt_tx_datahead_g *VAR_21 = VAR_11;

   FUNC_3(VAR_9, VAR_12, VAR_19,
       VAR_10, &VAR_21->a);

   FUNC_3(VAR_9, VAR_12,
       VAR_9->byTopCCKBasicRate,
       VAR_6, &VAR_21->b);

   if (VAR_20) {
    __le16 VAR_22 = FUNC_1(VAR_9->current_aid | FUNC_0(14) | FUNC_0(15));

    VAR_21->duration_a = VAR_22;
    VAR_21->duration_b = VAR_22;
   } else {

    VAR_21->duration_a =
     FUNC_1((u16)FUNC_2(VAR_9, VAR_1, VAR_12,
             VAR_10, VAR_19, VAR_14, VAR_15,
             VAR_16, VAR_17,
             VAR_18));
    VAR_21->duration_b =
     FUNC_1((u16)FUNC_2(VAR_9, VAR_4, VAR_12,
             VAR_6, VAR_9->byTopCCKBasicRate,
             VAR_14, VAR_15, VAR_16,
             VAR_17, VAR_18));
   }

   VAR_21->time_stamp_off_a = FUNC_4(VAR_9, VAR_19);
   VAR_21->time_stamp_off_b = FUNC_4(VAR_9, VAR_9->byTopCCKBasicRate);

   return VAR_21->duration_a;
  } else {

   struct vnt_tx_datahead_g_fb *VAR_23 = VAR_11;

   FUNC_3(VAR_9, VAR_12, VAR_19,
       VAR_10, &VAR_23->a);

   FUNC_3(VAR_9, VAR_12,
       VAR_9->byTopCCKBasicRate,
       VAR_6, &VAR_23->b);

   VAR_23->duration_a = FUNC_1((u16)FUNC_2(VAR_9, VAR_1, VAR_12, VAR_10,
               VAR_19, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18));
   VAR_23->duration_b = FUNC_1((u16)FUNC_2(VAR_9, VAR_4, VAR_12, VAR_6,
                VAR_9->byTopCCKBasicRate, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18));
   VAR_23->duration_a_f0 = FUNC_1((u16)FUNC_2(VAR_9, VAR_2, VAR_12, VAR_10,
            VAR_19, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18));
   VAR_23->duration_a_f1 = FUNC_1((u16)FUNC_2(VAR_9, VAR_3, VAR_12, VAR_10,
           VAR_19, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18));

   VAR_23->time_stamp_off_a = FUNC_4(VAR_9, VAR_19);
   VAR_23->time_stamp_off_b = FUNC_4(VAR_9, VAR_9->byTopCCKBasicRate);

   return VAR_23->duration_a;
  }
 } else if (VAR_10 == VAR_5) {
  if (VAR_18 != VAR_0) {

   struct vnt_tx_datahead_a_fb *VAR_24 = VAR_11;

   FUNC_3(VAR_9, VAR_12, VAR_19,
       VAR_10, &VAR_24->a);


   VAR_24->duration = FUNC_1((u16)FUNC_2(VAR_9, VAR_1, VAR_12, VAR_10,
             VAR_19, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18));
   VAR_24->duration_f0 = FUNC_1((u16)FUNC_2(VAR_9, VAR_2, VAR_12, VAR_10,
                VAR_19, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18));
   VAR_24->duration_f1 = FUNC_1((u16)FUNC_2(VAR_9, VAR_3, VAR_12, VAR_10,
          VAR_19, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18));
   VAR_24->time_stamp_off = FUNC_4(VAR_9, VAR_19);
   return VAR_24->duration;
  } else {
   struct vnt_tx_datahead_ab *VAR_25 = VAR_11;

   FUNC_3(VAR_9, VAR_12, VAR_19,
       VAR_10, &VAR_25->ab);

   if (VAR_20) {
    __le16 VAR_26 = FUNC_1(VAR_9->current_aid | FUNC_0(14) | FUNC_0(15));

    VAR_25->duration = VAR_26;
   } else {

    VAR_25->duration =
     FUNC_1((u16)FUNC_2(VAR_9, VAR_1, VAR_12, VAR_10,
             VAR_19, VAR_14, VAR_15,
             VAR_16, VAR_17,
             VAR_18));
   }

   VAR_25->time_stamp_off = FUNC_4(VAR_9, VAR_19);
   return VAR_25->duration;
  }
 } else {
  struct vnt_tx_datahead_ab *VAR_27 = VAR_11;

  FUNC_3(VAR_9, VAR_12, VAR_19,
      VAR_10, &VAR_27->ab);

  if (VAR_20) {
   __le16 VAR_28 = FUNC_1(VAR_9->current_aid | FUNC_0(14) | FUNC_0(15));

   VAR_27->duration = VAR_28;
  } else {

   VAR_27->duration =
    FUNC_1((u16)FUNC_2(VAR_9, VAR_4, VAR_12, VAR_10,
            VAR_19, VAR_14, VAR_15,
            VAR_16, VAR_17,
            VAR_18));
  }

  VAR_27->time_stamp_off = FUNC_4(VAR_9, VAR_19);
  return VAR_27->duration;
 }
 return 0;
}
