
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv748x_csi2 {int * pads; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_0 (int *) ;
 struct adv748x_csi2* FUNC_1 (struct v4l2_subdev*) ;
 int VAR_2 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct adv748x_csi2 *VAR_6 = FUNC_1(VAR_4);
 struct v4l2_subdev *VAR_7;

 VAR_7 = FUNC_0(&VAR_6->pads[VAR_0]);
 if (!VAR_7)
  return -VAR_1;

 return FUNC_2(VAR_7, VAR_3, VAR_2, VAR_5);
}
