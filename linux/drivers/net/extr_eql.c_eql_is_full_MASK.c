
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_slaves; int master_dev; } ;
typedef TYPE_1__ slave_queue_t ;
struct TYPE_6__ {scalar_t__ max_slaves; } ;
typedef TYPE_2__ equalizer_t ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(slave_queue_t *VAR_0)
{
 equalizer_t *VAR_1 = FUNC_0(VAR_0->master_dev);

 if (VAR_0->num_slaves >= VAR_1->max_slaves)
  return 1;
 return 0;
}
