
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int v4l2_dev; } ;
struct cobalt {TYPE_1__* streams; } ;
struct TYPE_2__ {struct v4l2_subdev* sd; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 struct cobalt* FUNC_1 (int ) ;

__attribute__((used)) static unsigned FUNC_2(struct v4l2_subdev *VAR_1)
{
 struct cobalt *VAR_2 = FUNC_1(VAR_1->v4l2_dev);
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1 == VAR_2->streams[VAR_3].sd)
   return VAR_3;
 FUNC_0("Invalid adv7604 subdev pointer!\n");
 return 0;
}
