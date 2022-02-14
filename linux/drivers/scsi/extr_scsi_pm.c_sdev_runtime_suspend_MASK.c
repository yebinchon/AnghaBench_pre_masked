
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int request_queue; } ;
struct device {TYPE_1__* driver; } ;
struct dev_pm_ops {int (* runtime_suspend ) (struct device*) ;} ;
struct TYPE_2__ {struct dev_pm_ops* pm; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 const struct dev_pm_ops *VAR_1 = VAR_0->driver ? VAR_0->driver->pm : ((void*)0);
 struct scsi_device *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_2->request_queue);
 if (VAR_3)
  return VAR_3;
 if (VAR_1 && VAR_1->runtime_suspend)
  VAR_3 = VAR_1->runtime_suspend(VAR_0);
 FUNC_0(VAR_2->request_queue, VAR_3);

 return VAR_3;
}
