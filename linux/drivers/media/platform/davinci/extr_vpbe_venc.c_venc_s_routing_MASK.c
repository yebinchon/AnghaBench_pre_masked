
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venc_state {int output; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 struct venc_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int,struct v4l2_subdev*,char*) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, u32 VAR_2, u32 VAR_3,
     u32 VAR_4)
{
 struct venc_state *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 FUNC_1(VAR_0, 1, VAR_1, "venc_s_routing\n");

 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_6)
  VAR_5->output = VAR_3;

 return VAR_6;
}
