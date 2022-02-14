
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_device {int * name; struct device* dev; int ref; int prio; int lock; int subdevs; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*) ;
 char* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct v4l2_device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,char*,char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct device *VAR_1, struct v4l2_device *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_2->subdevs);
 FUNC_8(&VAR_2->lock);
 FUNC_9(&VAR_2->prio);
 FUNC_6(&VAR_2->ref);
 FUNC_5(VAR_1);
 VAR_2->dev = VAR_1;
 if (VAR_1 == ((void*)0)) {

  if (FUNC_1(!VAR_2->name[0]))
   return -VAR_0;
  return 0;
 }


 if (!VAR_2->name[0])
  FUNC_7(VAR_2->name, sizeof(VAR_2->name), "%s %s",
   VAR_1->driver->name, FUNC_3(VAR_1));
 if (!FUNC_2(VAR_1))
  FUNC_4(VAR_1, VAR_2);
 return 0;
}
