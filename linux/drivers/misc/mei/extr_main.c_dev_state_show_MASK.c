
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dev_state; int device_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum mei_dev_state { ____Placeholder_mei_dev_state } mei_dev_state ;


 struct mei_device* FUNC_0 (struct device*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct mei_device *VAR_3 = FUNC_0(VAR_0);
 enum mei_dev_state VAR_4;

 FUNC_2(&VAR_3->device_lock);
 VAR_4 = VAR_3->dev_state;
 FUNC_3(&VAR_3->device_lock);

 return FUNC_4(VAR_2, "%s", FUNC_1(VAR_4));
}
