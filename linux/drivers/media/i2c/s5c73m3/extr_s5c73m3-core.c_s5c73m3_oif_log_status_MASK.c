
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; int ctrl_handler; } ;
struct s5c73m3 {int apply_fmt; int power; } ;


 struct s5c73m3* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct s5c73m3 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0->ctrl_handler, VAR_0->name);

 FUNC_2(VAR_0, "power: %d, apply_fmt: %d\n", VAR_1->power,
       VAR_1->apply_fmt);

 return 0;
}
