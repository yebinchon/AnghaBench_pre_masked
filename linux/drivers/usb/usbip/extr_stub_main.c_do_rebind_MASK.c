
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bus_id_priv {TYPE_1__* udev; } ;
struct TYPE_5__ {scalar_t__ parent; } ;
struct TYPE_4__ {TYPE_2__ dev; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, struct bus_id_priv *VAR_1)
{
 int VAR_2 = 0;


 if (VAR_1->udev->dev.parent)
  FUNC_2(VAR_1->udev->dev.parent);
 VAR_2 = FUNC_1(&VAR_1->udev->dev);
 if (VAR_1->udev->dev.parent)
  FUNC_3(VAR_1->udev->dev.parent);
 if (VAR_2 < 0)
  FUNC_0(&VAR_1->udev->dev, "rebind failed\n");
 return VAR_2;
}
