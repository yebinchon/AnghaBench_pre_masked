
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_state {int venc_type; struct venc_platform_data* pdata; } ;
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
 scalar_t__ FUNC_0 (int ,int) ;
 struct venc_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_13)
{
 struct venc_state *VAR_14 = FUNC_1(VAR_13);
 struct venc_platform_data *VAR_15 = VAR_14->pdata;

 if (VAR_15->setup_clock(VAR_12, 74250000) < 0)
  return -VAR_0;

 FUNC_2(VAR_14->venc_type, VAR_12, 74250000);
 FUNC_3(VAR_13, 0);

 FUNC_5(VAR_13, VAR_2, 0);
 FUNC_5(VAR_13, VAR_3, 1);


 FUNC_5(VAR_13, VAR_4, 0);

 FUNC_4(VAR_13, VAR_4, (1 << VAR_10),
      VAR_9);
 FUNC_4(VAR_13, VAR_4, VAR_5, VAR_5);
 FUNC_4(VAR_13, VAR_4, (VAR_1 << VAR_7),
      VAR_6);
 FUNC_4(VAR_13, VAR_4, VAR_8, VAR_8);
 FUNC_5(VAR_13, VAR_11, 0);
 return 0;
}
