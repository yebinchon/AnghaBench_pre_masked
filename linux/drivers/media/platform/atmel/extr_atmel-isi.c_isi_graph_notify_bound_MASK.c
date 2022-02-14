
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct TYPE_2__ {struct v4l2_subdev* subdev; } ;
struct atmel_isi {TYPE_1__ entity; int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct atmel_isi* FUNC_1 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_async_notifier *VAR_0,
       struct v4l2_subdev *VAR_1,
       struct v4l2_async_subdev *VAR_2)
{
 struct atmel_isi *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->dev, "subdev %s bound\n", VAR_1->name);

 VAR_3->entity.subdev = VAR_1;

 return 0;
}
