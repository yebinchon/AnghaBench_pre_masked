
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_state {scalar_t__ venc_type; struct venc_platform_data* pdata; } ;
struct venc_platform_data {scalar_t__ (* setup_clock ) (int ,int ) ;} ;
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
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct venc_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,int,struct v4l2_subdev*,char*) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int,int) ;
 int FUNC_7 (struct v4l2_subdev*,int ,int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_23)
{
 struct venc_state *VAR_24 = FUNC_1(VAR_23);
 struct venc_platform_data *VAR_25 = VAR_24->pdata;

 FUNC_2(VAR_22, 2, VAR_23, "venc_set_ntsc\n");


 FUNC_8(VAR_21, 1);
 if (VAR_25->setup_clock(VAR_18, VAR_1) < 0)
  return -VAR_0;

 FUNC_4(VAR_24->venc_type, VAR_18, VAR_1);
 FUNC_5(VAR_23, 0);

 if (VAR_24->venc_type == VAR_20) {
  FUNC_7(VAR_23, VAR_4, 0x01);
  FUNC_7(VAR_23, VAR_9, 0);
  FUNC_3(VAR_23, VAR_3);
 } else if (VAR_24->venc_type == VAR_19) {
  FUNC_7(VAR_23, VAR_4, 0x01);
  FUNC_7(VAR_23, VAR_9, 0);
  FUNC_3(VAR_23, VAR_2);
 } else {

  FUNC_6(VAR_23, VAR_9, 0, 1 << 1);

  FUNC_7(VAR_23, VAR_17, 0x1);
  FUNC_6(VAR_23, VAR_6, 0, VAR_7);
  FUNC_6(VAR_23, VAR_6, 0, VAR_8);
 }

 FUNC_7(VAR_23, VAR_10, 0);
 FUNC_6(VAR_23, VAR_10, (1 << VAR_15),
   VAR_14);
 FUNC_6(VAR_23, VAR_10, (0 << VAR_16), VAR_16);
 FUNC_6(VAR_23, VAR_10, (0 << VAR_12),
   VAR_11);
 FUNC_7(VAR_23, VAR_5, 0x0);
 FUNC_6(VAR_23, VAR_10, VAR_13, VAR_13);

 return 0;
}
