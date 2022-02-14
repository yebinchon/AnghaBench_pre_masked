
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_state {int std; scalar_t__ output; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct venc_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,char*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2)
{
 struct venc_state *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;


 VAR_3->output = 0;
 VAR_3->std = VAR_1;

 VAR_4 = FUNC_2(VAR_2, 0, VAR_3->output, 0);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2, "Error setting output during init\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_3(VAR_2, VAR_3->std);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2, "Error setting std during init\n");
  return -VAR_0;
 }

 return VAR_4;
}
