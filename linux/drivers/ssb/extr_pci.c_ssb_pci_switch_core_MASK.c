
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coreid; } ;
struct ssb_device {int core_index; TYPE_1__ id; } ;
struct ssb_bus {int bar_lock; struct ssb_device* mapped_device; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ssb_bus*,int ) ;

int FUNC_5(struct ssb_bus *VAR_0,
   struct ssb_device *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;






 FUNC_1(&VAR_0->bar_lock, VAR_3);
 VAR_2 = FUNC_4(VAR_0, VAR_1->core_index);
 if (!VAR_2)
  VAR_0->mapped_device = VAR_1;
 FUNC_2(&VAR_0->bar_lock, VAR_3);

 return VAR_2;
}
