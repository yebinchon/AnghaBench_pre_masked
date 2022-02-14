
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netvsc_device {int num_chn; struct netvsc_channel* chan_table; } ;
struct TYPE_2__ {scalar_t__ first; scalar_t__ next; } ;
struct netvsc_channel {int queue_sends; TYPE_1__ mrc; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(const struct netvsc_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_chn; VAR_1++) {
  const struct netvsc_channel *VAR_2 = &VAR_0->chan_table[VAR_1];

  if (VAR_2->mrc.first != VAR_2->mrc.next)
   return 0;

  if (FUNC_0(&VAR_2->queue_sends) > 0)
   return 0;
 }

 return 1;
}
