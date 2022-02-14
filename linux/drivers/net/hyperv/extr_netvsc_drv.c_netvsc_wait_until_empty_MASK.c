
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmbus_channel {int outbound; int inbound; } ;
struct netvsc_device {int num_chn; TYPE_1__* chan_table; } ;
struct TYPE_2__ {int napi; struct vmbus_channel* channel; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct netvsc_device *VAR_4)
{
 unsigned int VAR_5 = 0;
 int VAR_6;


 for (;;) {
  u32 VAR_7 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_4->num_chn; VAR_6++) {
   struct vmbus_channel *VAR_8
    = VAR_4->chan_table[VAR_6].channel;

   if (!VAR_8)
    continue;


   FUNC_1(&VAR_4->chan_table[VAR_6].napi);

   VAR_7 = FUNC_0(&VAR_8->inbound);
   if (VAR_7)
    break;

   VAR_7 = FUNC_0(&VAR_8->outbound);
   if (VAR_7)
    break;
  }

  if (VAR_7 == 0)
   return 0;

  if (++VAR_5 > VAR_1)
   return -VAR_0;

  FUNC_2(VAR_3, VAR_2);
 }
}
