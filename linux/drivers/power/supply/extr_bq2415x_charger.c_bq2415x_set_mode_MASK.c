
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bq2415x_device {int mode; TYPE_2__* charger; int dev; } ;
typedef enum bq2415x_mode { ____Placeholder_bq2415x_mode } bq2415x_mode ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int FUNC_0 (struct bq2415x_device*,int ) ;
 int FUNC_1 (struct bq2415x_device*,int) ;
 int FUNC_2 (struct bq2415x_device*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct bq2415x_device *VAR_6, enum bq2415x_mode VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_7 == 132)
  VAR_10 = 1;
 else if (VAR_7 != 128)
  VAR_9 = 1;

 if (!VAR_9)
  VAR_8 = FUNC_0(VAR_6, VAR_2);

 if (!VAR_10)
  VAR_8 = FUNC_0(VAR_6, VAR_0);

 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_7) {
 case 128:
  FUNC_3(VAR_6->dev, "changing mode to: Offline\n");
  VAR_8 = FUNC_1(VAR_6, 100);
  break;
 case 129:
  FUNC_3(VAR_6->dev, "changing mode to: N/A\n");
  VAR_8 = FUNC_1(VAR_6, 100);
  break;
 case 130:
  FUNC_3(VAR_6->dev, "changing mode to: Host/HUB charger\n");
  VAR_8 = FUNC_1(VAR_6, 500);
  break;
 case 131:
  FUNC_3(VAR_6->dev, "changing mode to: Dedicated charger\n");
  VAR_8 = FUNC_1(VAR_6, 1800);
  break;
 case 132:
  FUNC_3(VAR_6->dev, "changing mode to: Boost\n");
  VAR_8 = FUNC_1(VAR_6, 100);
  break;
 }

 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_9)
  VAR_8 = FUNC_0(VAR_6, VAR_3);
 else if (VAR_10)
  VAR_8 = FUNC_0(VAR_6, VAR_1);

 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(VAR_6, VAR_5);
 FUNC_2(VAR_6, VAR_4);

 VAR_6->mode = VAR_7;
 FUNC_4(&VAR_6->charger->dev.kobj, ((void*)0), "mode");

 return 0;

}
