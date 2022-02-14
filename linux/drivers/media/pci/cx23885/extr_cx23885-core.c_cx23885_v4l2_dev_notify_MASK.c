
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int v4l2_dev; } ;
struct cx23885_dev {struct v4l2_subdev* sd_ir; } ;




 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 struct cx23885_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_0,
        unsigned int VAR_1, void *VAR_2)
{
 struct cx23885_dev *VAR_3;

 if (VAR_0 == ((void*)0))
  return;

 VAR_3 = FUNC_2(VAR_0->v4l2_dev);

 switch (VAR_1) {
 case 129:
  if (VAR_0 == VAR_3->sd_ir)
   FUNC_0(VAR_0, *(u32 *)VAR_2);
  break;
 case 128:
  if (VAR_0 == VAR_3->sd_ir)
   FUNC_1(VAR_0, *(u32 *)VAR_2);
  break;
 }
}
