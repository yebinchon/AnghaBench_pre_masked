
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {TYPE_1__* internal_ops; struct module* owner; int owner_v4l2_dev; } ;
struct module {int dummy; } ;
struct TYPE_2__ {int (* release ) (struct v4l2_subdev*) ;} ;


 int FUNC_0 (struct module*) ;
 int FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct module *VAR_1 = !VAR_0->owner_v4l2_dev ? VAR_0->owner : ((void*)0);

 if (VAR_0->internal_ops && VAR_0->internal_ops->release)
  VAR_0->internal_ops->release(VAR_0);
 FUNC_0(VAR_1);
}
