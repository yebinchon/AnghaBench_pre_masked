
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_ops {int dummy; } ;
struct v4l2_subdev {int name; TYPE_2__* dev; int owner; int flags; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct spi_device {TYPE_2__ dev; } ;
struct TYPE_3__ {char* name; int owner; } ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,char*,char*,char*) ;
 int FUNC_2 (struct spi_device*,struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,struct spi_device*) ;
 int FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_ops const*) ;

void FUNC_5(struct v4l2_subdev *VAR_1, struct spi_device *VAR_2,
     const struct v4l2_subdev_ops *VAR_3)
{
 FUNC_4(VAR_1, VAR_3);
 VAR_1->flags |= VAR_0;

 VAR_1->owner = VAR_2->dev.driver->owner;
 VAR_1->dev = &VAR_2->dev;

 FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_2, VAR_1);

 FUNC_1(VAR_1->name, sizeof(VAR_1->name), "%s %s",
   VAR_2->dev.driver->name, FUNC_0(&VAR_2->dev));
}
