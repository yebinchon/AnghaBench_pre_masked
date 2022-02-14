
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_state {scalar_t__ venc_type; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 struct venc_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int,struct v4l2_subdev*,char*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_25, int VAR_26)
{
 struct venc_state *VAR_27 = FUNC_0(VAR_25);

 FUNC_1(VAR_24, 2, VAR_25, "venc_enabledigitaloutput\n");

 if (VAR_26) {
  FUNC_2(VAR_25, VAR_16, 0);
  FUNC_2(VAR_25, VAR_1, 0);
  FUNC_2(VAR_25, VAR_10, 0);
  FUNC_2(VAR_25, VAR_7, 0);
  FUNC_2(VAR_25, VAR_8, 0);
  FUNC_2(VAR_25, VAR_9, 0);
  FUNC_2(VAR_25, VAR_5, 0);
  FUNC_2(VAR_25, VAR_18, 0);
  FUNC_2(VAR_25, VAR_19, 0);
  FUNC_2(VAR_25, VAR_21, 0);
  FUNC_2(VAR_25, VAR_15, 0);
  FUNC_2(VAR_25, VAR_22, 0);
  FUNC_2(VAR_25, VAR_2, 0);

 } else {
  FUNC_2(VAR_25, VAR_16, 0);

  FUNC_2(VAR_25, VAR_14, 0x141);


  FUNC_2(VAR_25, VAR_13, 0);


  FUNC_2(VAR_25, VAR_3, 0);
  FUNC_2(VAR_25, VAR_4, 0x0000057C);


  FUNC_2(VAR_25, VAR_10, 0);
  if (VAR_27->venc_type != VAR_23)
   FUNC_2(VAR_25, VAR_0, 0x100);
  FUNC_2(VAR_25, VAR_7, 0);
  FUNC_2(VAR_25, VAR_5, 0);
  FUNC_2(VAR_25, VAR_8, 0);
  FUNC_2(VAR_25, VAR_9, 0);

  FUNC_2(VAR_25, VAR_18, 0);
  FUNC_2(VAR_25, VAR_15, 0);
  FUNC_2(VAR_25, VAR_19, 0);
  FUNC_2(VAR_25, VAR_21, 0);

  FUNC_2(VAR_25, VAR_6, 0);
  FUNC_2(VAR_25, VAR_17, 0);

  FUNC_2(VAR_25, VAR_22, 0);
  FUNC_2(VAR_25, VAR_20, 0);


  FUNC_2(VAR_25, VAR_11, 1);
  FUNC_2(VAR_25, VAR_12, 2);
 }
}
