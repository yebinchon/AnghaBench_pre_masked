
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bq2415x_device {char const* timer_error; scalar_t__ automode; int dev; TYPE_2__* charger; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq2415x_device*,int ) ;
 int FUNC_1 (struct bq2415x_device*,int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_4(struct bq2415x_device *VAR_1, const char *VAR_2)
{
 VAR_1->timer_error = VAR_2;
 FUNC_3(&VAR_1->charger->dev.kobj, ((void*)0), "timer");
 FUNC_2(VAR_1->dev, "%s\n", VAR_2);
 if (VAR_1->automode > 0)
  VAR_1->automode = 0;
 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1, 0);
}
