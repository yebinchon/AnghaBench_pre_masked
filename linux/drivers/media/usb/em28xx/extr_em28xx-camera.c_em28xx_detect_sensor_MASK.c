
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx {scalar_t__ em28xx_sensor; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*) ;

int FUNC_3(struct em28xx *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->em28xx_sensor == VAR_0 && VAR_3 < 0)
  VAR_3 = FUNC_2(VAR_2);






 if (VAR_2->em28xx_sensor == VAR_0 && VAR_3 < 0) {
  FUNC_0(&VAR_2->intf->dev,
    "No sensor detected\n");
  return -VAR_1;
 }

 return 0;
}
