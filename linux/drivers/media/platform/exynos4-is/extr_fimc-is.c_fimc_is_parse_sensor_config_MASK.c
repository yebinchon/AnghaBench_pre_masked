
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fimc_is_sensor {scalar_t__ i2c_bus; int drvdata; } ;
struct fimc_is {TYPE_1__* pdev; struct fimc_is_sensor* sensor; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,int *) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct fimc_is *VAR_3, unsigned int VAR_4,
      struct device_node *VAR_5)
{
 struct fimc_is_sensor *VAR_6 = &VAR_3->sensor[VAR_4];
 struct device_node *VAR_7, *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 VAR_6->drvdata = FUNC_1(VAR_5);
 if (!VAR_6->drvdata) {
  FUNC_0(&VAR_3->pdev->dev, "no driver data found for: %pOF\n",
        VAR_5);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5, ((void*)0));
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_7);
 FUNC_4(VAR_7);
 if (!VAR_8)
  return -VAR_1;


 VAR_10 = FUNC_5(VAR_8, "reg", &VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_3->pdev->dev, "reg property not found at: %pOF\n",
        VAR_8);
  FUNC_4(VAR_8);
  return VAR_10;
 }

 FUNC_4(VAR_8);
 VAR_6->i2c_bus = VAR_9 - VAR_2;
 return 0;
}
