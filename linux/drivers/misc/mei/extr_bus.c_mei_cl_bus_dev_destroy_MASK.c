
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_cl_device {int dev; scalar_t__ is_added; int bus_list; TYPE_1__* bus; } ;
struct TYPE_2__ {int cl_bus_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mei_cl_device *VAR_0)
{

 FUNC_0(!FUNC_3(&VAR_0->bus->cl_bus_lock));

 if (!VAR_0->is_added)
  return;

 FUNC_1(&VAR_0->dev);

 FUNC_2(&VAR_0->bus_list);

 VAR_0->is_added = 0;
 FUNC_4(&VAR_0->dev);
}
