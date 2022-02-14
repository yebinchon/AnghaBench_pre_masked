
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int list; } ;
struct nvdimm_bus {TYPE_1__ badrange; int dev; int ioctl_active; int wait; int list; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nvdimm_bus*) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct nvdimm_bus* FUNC_10 (struct device*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_2)
{
 struct nvdimm_bus *VAR_3 = FUNC_10(VAR_2);

 FUNC_4(&VAR_1);
 FUNC_3(&VAR_3->list);
 FUNC_5(&VAR_1);

 FUNC_11(VAR_3->wait,
   FUNC_0(&VAR_3->ioctl_active) == 0);

 FUNC_6();
 FUNC_1(&VAR_3->dev, ((void*)0), VAR_0);

 FUNC_8(&VAR_3->badrange.lock);
 FUNC_2(&VAR_3->badrange.list);
 FUNC_9(&VAR_3->badrange.lock);

 FUNC_7(VAR_3);

 return 0;
}
