
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int data; } ;
struct TYPE_2__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct of_device_id* FUNC_0 (int ,struct device*) ;
 int FUNC_1 (struct device*,int ) ;

int FUNC_2(struct platform_device *VAR_2)
{
 struct device *VAR_3 = VAR_2 ? &VAR_2->dev : ((void*)0);
 const struct of_device_id *VAR_4;

 if (!VAR_3 || !VAR_3->driver)
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_3->driver->of_match_table, VAR_3);
 if (!VAR_4 || !VAR_4->data)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4->data);
}
