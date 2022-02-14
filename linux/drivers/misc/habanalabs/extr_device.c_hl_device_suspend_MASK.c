
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {int disabled; int pdev; int dev; TYPE_1__* asic_funcs; int send_cpu_message_lock; int in_reset; } ;
struct TYPE_2__ {int (* suspend ) (struct hl_device*) ;int (* hw_queues_unlock ) (struct hl_device*) ;int (* hw_queues_lock ) (struct hl_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (struct hl_device*) ;
 int FUNC_9 (struct hl_device*) ;

int FUNC_10(struct hl_device *VAR_2)
{
 int VAR_3;

 FUNC_5(VAR_2->pdev);


 VAR_3 = FUNC_0(&VAR_2->in_reset, 0, 1);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Can't suspend while in reset\n");
  return -VAR_0;
 }


 VAR_2->disabled = 1;





 VAR_2->asic_funcs->hw_queues_lock(VAR_2);
 VAR_2->asic_funcs->hw_queues_unlock(VAR_2);


 FUNC_2(&VAR_2->send_cpu_message_lock);
 FUNC_3(&VAR_2->send_cpu_message_lock);

 VAR_3 = VAR_2->asic_funcs->suspend(VAR_2);
 if (VAR_3)
  FUNC_1(VAR_2->dev,
   "Failed to disable PCI access of device CPU\n");


 FUNC_4(VAR_2->pdev);
 FUNC_6(VAR_2->pdev, VAR_1);

 return 0;
}
