
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct virtual_consumer_data {int regulator; int mode; int lock; } ;
struct TYPE_5__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 char* FUNC_3 (TYPE_1__*) ;
 struct virtual_consumer_data* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct virtual_consumer_data*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 char *VAR_4 = FUNC_3(&VAR_3->dev);
 struct virtual_consumer_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(&VAR_3->dev, sizeof(struct virtual_consumer_data),
          VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_6(&VAR_5->lock);

 VAR_5->regulator = FUNC_5(&VAR_3->dev, VAR_4);
 if (FUNC_0(VAR_5->regulator)) {
  VAR_6 = FUNC_1(VAR_5->regulator);
  FUNC_2(&VAR_3->dev, "Failed to obtain supply '%s': %d\n",
   VAR_4, VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_9(&VAR_3->dev.kobj,
     &VAR_2);
 if (VAR_6 != 0) {
  FUNC_2(&VAR_3->dev,
   "Failed to create attribute group: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_5->mode = FUNC_8(VAR_5->regulator);

 FUNC_7(VAR_3, VAR_5);

 return 0;
}
