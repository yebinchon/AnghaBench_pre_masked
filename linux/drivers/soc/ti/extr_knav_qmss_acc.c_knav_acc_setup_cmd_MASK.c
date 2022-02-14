
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct knav_reg_acc_command {int queue_num; int timer_config; void* list_dma; void* queue_mask; int command; } ;
struct knav_acc_info {int list_entries; int pacing_mode; int timer_count; } ;
struct knav_range_info {int flags; int queue_base; struct knav_acc_channel* acc; int num_queues; struct knav_acc_info acc_info; } ;
struct knav_device {int dummy; } ;
struct knav_acc_channel {scalar_t__* list_dma; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct knav_reg_acc_command*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct knav_device *VAR_3,
    struct knav_range_info *VAR_4,
    struct knav_reg_acc_command *VAR_5,
    int VAR_6)
{
 struct knav_acc_info *VAR_7 = &VAR_4->acc_info;
 struct knav_acc_channel *VAR_8;
 int VAR_9;
 u32 VAR_10;

 if (VAR_4->flags & VAR_2) {
  VAR_8 = VAR_4->acc;
  VAR_9 = VAR_4->queue_base;
  VAR_10 = FUNC_0(VAR_4->num_queues) - 1;
 } else {
  VAR_8 = VAR_4->acc + VAR_6;
  VAR_9 = VAR_4->queue_base + VAR_6;
  VAR_10 = 0;
 }

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->command = VAR_8->channel;
 VAR_5->queue_mask = VAR_10;
 VAR_5->list_dma = (u32)VAR_8->list_dma[0];
 VAR_5->queue_num = VAR_7->list_entries << 16;
 VAR_5->queue_num |= VAR_9;

 VAR_5->timer_config = VAR_1 << 18;
 if (VAR_4->flags & VAR_2)
  VAR_5->timer_config |= VAR_0;
 VAR_5->timer_config |= VAR_7->pacing_mode << 16;
 VAR_5->timer_config |= VAR_7->timer_count;
}
