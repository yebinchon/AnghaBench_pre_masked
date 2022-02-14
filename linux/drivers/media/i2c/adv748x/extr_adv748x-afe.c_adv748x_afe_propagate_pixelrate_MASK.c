
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv748x_afe {int * pads; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct v4l2_subdev* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct adv748x_afe *VAR_2)
{
 struct v4l2_subdev *VAR_3;

 VAR_3 = FUNC_1(&VAR_2->pads[VAR_0]);
 if (!VAR_3)
  return -VAR_1;






 return FUNC_0(VAR_3, 14318180);
}
