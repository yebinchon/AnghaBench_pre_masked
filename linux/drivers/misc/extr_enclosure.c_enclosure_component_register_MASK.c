
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct enclosure_component {int number; struct device cdev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;

int FUNC_2(struct enclosure_component *VAR_0)
{
 struct device *VAR_1;
 int VAR_2;

 VAR_1 = &VAR_0->cdev;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  VAR_0->number = -1;
  FUNC_1(VAR_1);
  return VAR_2;
 }

 return 0;
}
