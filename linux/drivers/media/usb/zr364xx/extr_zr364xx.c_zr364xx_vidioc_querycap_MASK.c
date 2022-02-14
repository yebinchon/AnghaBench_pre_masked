
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zr364xx_camera {TYPE_1__* udev; } ;
struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 struct zr364xx_camera* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
       struct v4l2_capability *VAR_3)
{
 struct zr364xx_camera *VAR_4 = FUNC_2(VAR_1);

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 if (VAR_4->udev->product)
  FUNC_1(VAR_3->card, VAR_4->udev->product, sizeof(VAR_3->card));
 FUNC_1(VAR_3->bus_info, FUNC_0(&VAR_4->udev->dev),
  sizeof(VAR_3->bus_info));
 return 0;
}
