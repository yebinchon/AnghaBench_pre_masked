
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; int ctrl_handler; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0)
{
 FUNC_0(VAR_0->ctrl_handler, VAR_0->name);
 return 0;
}
