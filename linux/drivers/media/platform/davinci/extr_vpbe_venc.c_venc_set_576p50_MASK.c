
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_state {scalar_t__ venc_type; struct venc_platform_data* pdata; } ;
struct venc_platform_data {scalar_t__ (* setup_clock ) (int ,int) ;} ;
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
 scalar_t__ FUNC_0 (int ,int) ;
 struct venc_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,int,struct v4l2_subdev*,char*) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int,int) ;
 int FUNC_7 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_22)
{
 struct venc_state *VAR_23 = FUNC_1(VAR_22);
 struct venc_platform_data *VAR_24 = VAR_23->pdata;

 FUNC_2(VAR_21, 2, VAR_22, "venc_set_576p50\n");

 if (VAR_23->venc_type != VAR_19 &&
     VAR_23->venc_type != VAR_20)
  return -VAR_0;

 if (VAR_24->setup_clock(VAR_18, 27000000) < 0)
  return -VAR_0;

 FUNC_4(VAR_23->venc_type, VAR_18, 27000000);
 FUNC_5(VAR_22, 0);

 if (VAR_23->venc_type == VAR_20)
  FUNC_3(VAR_22, VAR_2);

 FUNC_7(VAR_22, VAR_3, 0);
 FUNC_7(VAR_22, VAR_4, 1);

 if (VAR_23->venc_type == VAR_19) {
  FUNC_6(VAR_22, VAR_5, VAR_6,
       VAR_6);
  FUNC_6(VAR_22, VAR_5, VAR_7,
       VAR_7);
 }

 FUNC_7(VAR_22, VAR_8, 0);
 FUNC_6(VAR_22, VAR_8, (1 << VAR_17),
      VAR_16);
 FUNC_6(VAR_22, VAR_8, VAR_9, VAR_9);
 FUNC_6(VAR_22, VAR_8, (VAR_1 << VAR_11),
      VAR_10);

 FUNC_6(VAR_22, VAR_8, VAR_14 <<
      VAR_13, VAR_12);
 FUNC_6(VAR_22, VAR_8, VAR_15, VAR_15);

 return 0;
}
