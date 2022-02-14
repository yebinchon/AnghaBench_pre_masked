
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ ident; struct v4l2_subdev sd; } ;
struct saa7115_platform_data {int* saa7113_r08_htc; int* saa7113_r10_ofts; int* saa7113_r12_rts0; int* saa7113_r12_rts1; scalar_t__* saa7113_r13_adlsb; scalar_t__* saa7113_r10_vrln; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct saa711x_state *VAR_19,
     struct saa7115_platform_data *VAR_20)
{
 struct v4l2_subdev *VAR_21 = &VAR_19->sd;
 u8 VAR_22;

 if (VAR_19->ident != VAR_0 &&
     VAR_19->ident != VAR_5)
  return;

 if (VAR_20->saa7113_r08_htc) {
  VAR_22 = FUNC_1(VAR_21, VAR_1);
  VAR_22 &= ~VAR_7;
  VAR_22 |= ((*VAR_20->saa7113_r08_htc) << VAR_8);
  FUNC_2(VAR_21, VAR_1, VAR_22);
 }

 if (VAR_20->saa7113_r10_vrln) {
  VAR_22 = FUNC_1(VAR_21, VAR_2);
  VAR_22 &= ~VAR_11;
  if (*VAR_20->saa7113_r10_vrln)
   VAR_22 |= (1 << VAR_12);
  FUNC_2(VAR_21, VAR_2, VAR_22);
 }

 if (VAR_20->saa7113_r10_ofts) {
  VAR_22 = FUNC_1(VAR_21, VAR_2);
  VAR_22 &= ~VAR_9;
  VAR_22 |= (*VAR_20->saa7113_r10_ofts << VAR_10);
  FUNC_2(VAR_21, VAR_2, VAR_22);
 }

 if (VAR_20->saa7113_r12_rts0) {
  VAR_22 = FUNC_1(VAR_21, VAR_3);
  VAR_22 &= ~VAR_13;
  VAR_22 |= (*VAR_20->saa7113_r12_rts0 << VAR_14);



  FUNC_0(*VAR_20->saa7113_r12_rts0 == VAR_6);
  FUNC_2(VAR_21, VAR_3, VAR_22);
 }

 if (VAR_20->saa7113_r12_rts1) {
  VAR_22 = FUNC_1(VAR_21, VAR_3);
  VAR_22 &= ~VAR_15;
  VAR_22 |= (*VAR_20->saa7113_r12_rts1 << VAR_16);
  FUNC_2(VAR_21, VAR_3, VAR_22);
 }

 if (VAR_20->saa7113_r13_adlsb) {
  VAR_22 = FUNC_1(VAR_21, VAR_4);
  VAR_22 &= ~VAR_17;
  if (*VAR_20->saa7113_r13_adlsb)
   VAR_22 |= (1 << VAR_18);
  FUNC_2(VAR_21, VAR_4, VAR_22);
 }
}
