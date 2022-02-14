
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int components; struct enclosure_component* component; } ;
struct enclosure_component {int cdev; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct enclosure_component*) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct enclosure_device *VAR_2, struct device *VAR_3)
{
 struct enclosure_component *VAR_4;
 int VAR_5;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->components; VAR_5++) {
  VAR_4 = &VAR_2->component[VAR_5];
  if (VAR_4->dev == VAR_3) {
   FUNC_2(VAR_4);
   FUNC_1(&VAR_4->cdev);
   FUNC_3(VAR_3);
   VAR_4->dev = ((void*)0);
   return FUNC_0(&VAR_4->cdev);
  }
 }
 return -VAR_1;
}
