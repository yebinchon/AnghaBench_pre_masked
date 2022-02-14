
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int grp_id; int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct TYPE_6__ {struct v4l2_subdev** sd; TYPE_2__* config; } ;
struct TYPE_5__ {int subdev_count; TYPE_1__* subdevinfo; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_async_notifier *VAR_2,
       struct v4l2_subdev *VAR_3,
       struct v4l2_async_subdev *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1.config->subdev_count; VAR_5++)
  if (!FUNC_0(VAR_1.config->subdevinfo[VAR_5].name,
       VAR_3->name)) {
   VAR_1.sd[VAR_5] = VAR_3;
   VAR_1.sd[VAR_5]->grp_id = 1 << VAR_5;
   return 0;
  }

 return -VAR_0;
}
