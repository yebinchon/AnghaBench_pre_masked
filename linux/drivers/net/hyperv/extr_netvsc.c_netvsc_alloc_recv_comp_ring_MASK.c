
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct recv_comp_data {int dummy; } ;
struct netvsc_device {int recv_completion_cnt; struct netvsc_channel* chan_table; } ;
struct TYPE_3__ {scalar_t__ slots; } ;
struct netvsc_channel {TYPE_1__ mrc; TYPE_2__* channel; } ;
struct TYPE_4__ {int target_cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t,int) ;

int FUNC_3(struct netvsc_device *VAR_1, u32 VAR_2)
{
 struct netvsc_channel *VAR_3 = &VAR_1->chan_table[VAR_2];
 int VAR_4 = FUNC_0(VAR_3->channel->target_cpu);
 size_t VAR_5;

 VAR_5 = VAR_1->recv_completion_cnt * sizeof(struct recv_comp_data);
 VAR_3->mrc.slots = FUNC_2(VAR_5, VAR_4);
 if (!VAR_3->mrc.slots)
  VAR_3->mrc.slots = FUNC_1(VAR_5);

 return VAR_3->mrc.slots ? 0 : -VAR_0;
}
