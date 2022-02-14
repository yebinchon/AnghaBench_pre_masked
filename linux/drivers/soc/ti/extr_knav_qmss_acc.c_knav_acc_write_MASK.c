
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct knav_reg_acc_command {int command; int queue_mask; int list_dma; int queue_num; int timer_config; } ;
struct knav_pdsp_info {TYPE_1__* acc_command; } ;
struct knav_device {int dev; } ;
typedef enum knav_acc_result { ____Placeholder_knav_acc_result } knav_acc_result ;
struct TYPE_2__ {int command; int queue_mask; int list_dma; int queue_num; int timer_config; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static enum knav_acc_result
FUNC_3(struct knav_device *VAR_0, struct knav_pdsp_info *VAR_1,
  struct knav_reg_acc_command *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_0->dev, "acc command %08x %08x %08x %08x %08x\n",
  VAR_2->command, VAR_2->queue_mask, VAR_2->list_dma,
  VAR_2->queue_num, VAR_2->timer_config);

 FUNC_2(VAR_2->timer_config, &VAR_1->acc_command->timer_config);
 FUNC_2(VAR_2->queue_num, &VAR_1->acc_command->queue_num);
 FUNC_2(VAR_2->list_dma, &VAR_1->acc_command->list_dma);
 FUNC_2(VAR_2->queue_mask, &VAR_1->acc_command->queue_mask);
 FUNC_2(VAR_2->command, &VAR_1->acc_command->command);


 do {
  VAR_3 = FUNC_1(&VAR_1->acc_command->command);
 } while ((VAR_3 >> 8) & 0xff);

 return (VAR_3 >> 24) & 0xff;
}
