
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_11__ {int kobj; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_12__ {int attr; } ;
struct TYPE_10__ {int (* get_api_version ) (scalar_t__*) ;int (* init_finalize ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int *,int ,int,int ,TYPE_3__*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int *,int *) ;
 TYPE_1__* FUNC_9 () ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11;

 VAR_6 = FUNC_9();
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if (!VAR_6->get_api_version || !VAR_6->init_finalize)
  return -VAR_1;

 VAR_6->init_finalize();
 VAR_6->get_api_version(&VAR_11);


 if (VAR_11 < VAR_4)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_8, 0);
 if (VAR_10 <= 0)
  return -VAR_1;

 VAR_9 = FUNC_4(&VAR_8->dev, VAR_10, ((void*)0), VAR_7,
     VAR_2 | VAR_3,
     FUNC_3(&VAR_8->dev), &VAR_8->dev);
 if (VAR_9) {
  FUNC_2(&VAR_8->dev, "devm_request_threaded_irq '%d' failed "
   "with %d\n", VAR_10, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_8(&VAR_8->dev.kobj, &VAR_5.attr);
 if (VAR_9) {
  FUNC_2(&VAR_8->dev, "unable to create sysfs interface\n");
  return VAR_9;
 }

 return 0;
}
