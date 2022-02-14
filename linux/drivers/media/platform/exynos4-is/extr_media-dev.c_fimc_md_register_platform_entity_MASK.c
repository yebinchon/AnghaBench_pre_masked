
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct fimc_md {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *,char*,int ,int) ;
 void* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct fimc_md*,struct platform_device*,void*) ;
 int FUNC_8 (struct fimc_md*,void*) ;
 int FUNC_9 (struct fimc_md*,void*) ;
 int FUNC_10 (struct fimc_md*,void*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct fimc_md *VAR_2,
         struct platform_device *VAR_3,
         int VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev;
 int VAR_6 = -VAR_1;
 void *VAR_7;


 FUNC_4(VAR_5);

 if (!VAR_5->driver || !FUNC_11(VAR_5->driver->owner))
  goto dev_unlock;

 VAR_7 = FUNC_1(VAR_5);

 if (VAR_7) {
  switch (VAR_4) {
  case 130:
   VAR_6 = FUNC_8(VAR_2, VAR_7);
   break;
  case 129:
   VAR_6 = FUNC_10(VAR_2, VAR_7);
   break;
  case 131:
   VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_7);
   break;
  case 128:
   VAR_6 = FUNC_9(VAR_2, VAR_7);
   break;
  default:
   VAR_6 = -VAR_0;
  }
 }

 FUNC_6(VAR_5->driver->owner);
dev_unlock:
 FUNC_5(VAR_5);
 if (VAR_6 == -VAR_1)
  FUNC_2(&VAR_2->pdev->dev, "deferring %s device registration\n",
   FUNC_3(VAR_5));
 else if (VAR_6 < 0)
  FUNC_0(&VAR_2->pdev->dev, "%s device registration failed (%d)\n",
   FUNC_3(VAR_5), VAR_6);
 return VAR_6;
}
