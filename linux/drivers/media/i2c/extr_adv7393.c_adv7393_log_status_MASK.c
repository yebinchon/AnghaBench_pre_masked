
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7393_state {int output; scalar_t__ std; } ;


 struct adv7393_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct adv7393_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "Standard: %llx\n", (unsigned long long)VAR_1->std);
 FUNC_1(VAR_0, "Output: %s\n", (VAR_1->output == 0) ? "Composite" :
   ((VAR_1->output == 1) ? "Component" : "S-Video"));
 return 0;
}
