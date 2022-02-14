
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_hw_queue {int queue_type; } ;
struct asic_fixed_properties {TYPE_1__* hw_queues_props; } ;
struct hl_device {struct hl_hw_queue* kernel_queues; int dev; struct asic_fixed_properties asic_prop; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hl_device*,struct hl_hw_queue*) ;
 int FUNC_2 (struct hl_device*,struct hl_hw_queue*,int) ;
 struct hl_hw_queue* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct hl_hw_queue*) ;

int FUNC_5(struct hl_device *VAR_3)
{
 struct asic_fixed_properties *VAR_4 = &VAR_3->asic_prop;
 struct hl_hw_queue *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_3->kernel_queues = FUNC_3(VAR_2,
    sizeof(*VAR_3->kernel_queues), VAR_1);

 if (!VAR_3->kernel_queues) {
  FUNC_0(VAR_3->dev, "Not enough memory for H/W queues\n");
  return -VAR_0;
 }


 for (VAR_6 = 0, VAR_8 = 0, VAR_5 = VAR_3->kernel_queues;
   VAR_6 < VAR_2 ; VAR_6++, VAR_8++, VAR_5++) {

  VAR_5->queue_type = VAR_4->hw_queues_props[VAR_6].type;
  VAR_7 = FUNC_2(VAR_3, VAR_5, VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_3->dev,
    "failed to initialize queue %d\n", VAR_6);
   goto release_queues;
  }
 }

 return 0;

release_queues:
 for (VAR_6 = 0, VAR_5 = VAR_3->kernel_queues ; VAR_6 < VAR_8 ; VAR_6++, VAR_5++)
  FUNC_1(VAR_3, VAR_5);

 FUNC_4(VAR_3->kernel_queues);

 return VAR_7;
}
