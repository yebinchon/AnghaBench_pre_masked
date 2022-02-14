
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {unsigned int components; int edev; struct enclosure_component* component; } ;
struct device {int groups; int release; int parent; } ;
struct enclosure_component {int number; int type; struct device cdev; } ;
typedef enum enclosure_component_type { ____Placeholder_enclosure_component_type } enclosure_component_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct enclosure_component* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 scalar_t__ FUNC_2 (struct enclosure_device*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;

struct enclosure_component *
FUNC_5(struct enclosure_device *VAR_4,
     unsigned int VAR_5,
     enum enclosure_component_type VAR_6,
     const char *VAR_7)
{
 struct enclosure_component *VAR_8;
 struct device *VAR_9;
 int VAR_10;
 char VAR_11[VAR_0];

 if (VAR_5 >= VAR_4->components)
  return FUNC_0(-VAR_1);

 VAR_8 = &VAR_4->component[VAR_5];

 if (VAR_8->number != -1)
  return FUNC_0(-VAR_1);

 VAR_8->type = VAR_6;
 VAR_8->number = VAR_5;
 VAR_9 = &VAR_8->cdev;
 VAR_9->parent = FUNC_3(&VAR_4->edev);

 if (VAR_7 && VAR_7[0]) {




  VAR_10 = 1;
  FUNC_4(VAR_11, VAR_0,
    "%s", VAR_7);
  while (FUNC_2(VAR_4, VAR_11))
   FUNC_4(VAR_11, VAR_0,
     "%s-%i", VAR_7, VAR_10++);
  FUNC_1(VAR_9, "%s", VAR_11);
 } else
  FUNC_1(VAR_9, "%u", VAR_5);

 VAR_9->release = VAR_3;
 VAR_9->groups = VAR_2;

 return VAR_8;
}
