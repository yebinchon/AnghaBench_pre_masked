
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnt_private {int abyCurrentNetAddr; int byTopCCKBasicRate; } ;
struct TYPE_3__ {int ra; void* frame_control; void* duration; } ;
struct vnt_cts_fb {int reserved2; TYPE_1__ data; void* duration_ba; void* cts_duration_ba_f1; void* cts_duration_ba_f0; int b; } ;
struct TYPE_4__ {int ra; void* frame_control; void* duration; } ;
struct vnt_cts {int reserved2; TYPE_2__ data; void* duration_ba; int b; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (struct vnt_private*,int ,unsigned int,unsigned char,unsigned short,int,unsigned char) ;
 int FUNC_3 (struct vnt_private*,unsigned int,int ,int ,int *) ;

__attribute__((used)) static
void
FUNC_4(
 struct vnt_private *VAR_11,
 unsigned int VAR_12,
 unsigned char VAR_13,
 void *VAR_14,
 unsigned int VAR_15,
 bool VAR_16,
 bool VAR_17,
 unsigned short VAR_18,
 unsigned char VAR_19
)
{
 unsigned int VAR_20 = 14;

 if (!VAR_14)
  return;

 if (VAR_17) {



  VAR_20 -= 4;
 }

 if (VAR_13 == VAR_8 || VAR_13 == VAR_7) {
  if (VAR_19 != VAR_0 && VAR_12 != VAR_9 && VAR_12 != VAR_10) {

   struct vnt_cts_fb *VAR_21 = VAR_14;

   FUNC_3(VAR_11, VAR_20,
       VAR_11->byTopCCKBasicRate,
       VAR_6, &VAR_21->b);

   VAR_21->duration_ba =
    FUNC_2(VAR_11, VAR_1,
           VAR_15, VAR_13,
           VAR_18, VAR_16,
           VAR_19);


   VAR_21->cts_duration_ba_f0 =
    FUNC_2(VAR_11, VAR_2,
           VAR_15, VAR_13,
           VAR_18, VAR_16,
           VAR_19);


   VAR_21->cts_duration_ba_f1 =
    FUNC_2(VAR_11, VAR_3,
           VAR_15, VAR_13,
           VAR_18, VAR_16,
           VAR_19);


   VAR_21->data.duration = VAR_21->duration_ba;

   VAR_21->data.frame_control =
    FUNC_0(VAR_4 |
         VAR_5);

   VAR_21->reserved2 = 0x0;

   FUNC_1(VAR_21->data.ra,
     VAR_11->abyCurrentNetAddr);
  } else {
   struct vnt_cts *VAR_22 = VAR_14;

   FUNC_3(VAR_11, VAR_20,
       VAR_11->byTopCCKBasicRate,
       VAR_6, &VAR_22->b);


   VAR_22->duration_ba =
    FUNC_2(VAR_11, VAR_1,
           VAR_15, VAR_13,
           VAR_18, VAR_16,
           VAR_19);


   VAR_22->data.duration = VAR_22->duration_ba;

   VAR_22->data.frame_control =
    FUNC_0(VAR_4 |
         VAR_5);

   VAR_22->reserved2 = 0x0;
   FUNC_1(VAR_22->data.ra,
     VAR_11->abyCurrentNetAddr);
  }
 }
}
