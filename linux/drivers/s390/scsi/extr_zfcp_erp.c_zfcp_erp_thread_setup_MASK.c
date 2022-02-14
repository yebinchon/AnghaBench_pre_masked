
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {struct task_struct* erp_thread; TYPE_1__* ccw_device; } ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct task_struct* FUNC_4 (int ,struct zfcp_adapter*,char*,int ) ;
 int VAR_0 ;

int FUNC_5(struct zfcp_adapter *VAR_1)
{
 struct task_struct *VAR_2;

 VAR_2 = FUNC_4(VAR_0, VAR_1, "zfcperp%s",
        FUNC_3(&VAR_1->ccw_device->dev));
 if (FUNC_0(VAR_2)) {
  FUNC_2(&VAR_1->ccw_device->dev,
   "Creating an ERP thread for the FCP device failed.\n");
  return FUNC_1(VAR_2);
 }

 VAR_1->erp_thread = VAR_2;
 return 0;
}
