
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct ispstat {TYPE_1__ subdev; TYPE_2__* isp; TYPE_3__* ops; } ;
struct TYPE_6__ {int (* enable ) (struct ispstat*,int ) ;} ;
struct TYPE_5__ {int dev; int stat_lock; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ispstat*) ;
 int FUNC_2 (struct ispstat*,int ) ;
 int FUNC_3 (struct ispstat*) ;
 int FUNC_4 (struct ispstat*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct ispstat*,int ) ;
 struct ispstat* FUNC_8 (struct v4l2_subdev*) ;

int FUNC_9(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ispstat *VAR_2 = FUNC_8(VAR_0);

 if (VAR_1) {




  FUNC_1(VAR_2);
 } else {
  unsigned long VAR_3;

  FUNC_2(VAR_2, 0);
  FUNC_5(&VAR_2->isp->stat_lock, VAR_3);
  VAR_2->ops->enable(VAR_2, 0);
  FUNC_6(&VAR_2->isp->stat_lock, VAR_3);
  if (!FUNC_4(VAR_2))
   FUNC_3(VAR_2);

  FUNC_0(VAR_2->isp->dev, "%s: module is being disabled\n",
   VAR_2->subdev.name);
 }

 return 0;
}
