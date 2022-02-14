
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_device {TYPE_1__* chip; } ;
struct device_link {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_link* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct device_link* FUNC_4 (struct device*,int ,int ) ;

__attribute__((used)) static struct device_link *FUNC_5(struct device *VAR_2,
            struct pwm_device *VAR_3)
{
 struct device_link *VAR_4;

 if (!VAR_2) {





  FUNC_3(VAR_3->chip->dev,
    "No consumer device specified to create a link to\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_4(VAR_2, VAR_3->chip->dev, VAR_0);
 if (!VAR_4) {
  FUNC_1(VAR_2, "failed to create device link to %s\n",
   FUNC_2(VAR_3->chip->dev));
  return FUNC_0(-VAR_1);
 }

 return VAR_4;
}
