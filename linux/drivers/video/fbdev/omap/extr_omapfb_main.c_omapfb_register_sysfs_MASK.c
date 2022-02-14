
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct omapfb_device {TYPE_1__* dev; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct omapfb_device *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_4->dev, &VAR_1)))
  goto fail0;

 if ((VAR_5 = FUNC_1(VAR_4->dev, &VAR_2)))
  goto fail1;

 if ((VAR_5 = FUNC_3(&VAR_4->dev->kobj, &VAR_3)))
  goto fail2;

 if ((VAR_5 = FUNC_3(&VAR_4->dev->kobj, &VAR_0)))
  goto fail3;

 return 0;
fail3:
 FUNC_4(&VAR_4->dev->kobj, &VAR_3);
fail2:
 FUNC_2(VAR_4->dev, &VAR_2);
fail1:
 FUNC_2(VAR_4->dev, &VAR_1);
fail0:
 FUNC_0(VAR_4->dev, "unable to register sysfs interface\n");
 return VAR_5;
}
