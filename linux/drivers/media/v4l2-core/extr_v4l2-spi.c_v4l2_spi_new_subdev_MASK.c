
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_device {int dummy; } ;
struct spi_master {int dummy; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct spi_device {TYPE_2__ dev; } ;
struct spi_board_info {scalar_t__* modalias; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 struct v4l2_subdev* FUNC_2 (struct spi_device*) ;
 struct spi_device* FUNC_3 (struct spi_master*,struct spi_board_info*) ;
 int FUNC_4 (struct spi_device*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct v4l2_device*,struct v4l2_subdev*) ;

struct v4l2_subdev *FUNC_7(struct v4l2_device *VAR_0,
     struct spi_master *VAR_1,
     struct spi_board_info *VAR_2)
{
 struct v4l2_subdev *VAR_3 = ((void*)0);
 struct spi_device *VAR_4 = ((void*)0);

 if (!VAR_0)
  return ((void*)0);
 if (VAR_2->modalias[0])
  FUNC_1(VAR_2->modalias);

 VAR_4 = FUNC_3(VAR_1, VAR_2);

 if (!VAR_4 || !VAR_4->dev.driver)
  goto error;

 if (!FUNC_5(VAR_4->dev.driver->owner))
  goto error;

 VAR_3 = FUNC_2(VAR_4);





 if (FUNC_6(VAR_0, VAR_3))
  VAR_3 = ((void*)0);


 FUNC_0(VAR_4->dev.driver->owner);

error:




 if (!VAR_3)
  FUNC_4(VAR_4);

 return VAR_3;
}
