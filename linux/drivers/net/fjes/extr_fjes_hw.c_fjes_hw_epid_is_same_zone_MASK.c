
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fjes_hw {int max_epid; size_t my_epid; TYPE_1__* ep_shm_info; } ;
struct TYPE_2__ {scalar_t__ es_status; scalar_t__ zone; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct fjes_hw *VAR_2, int VAR_3)
{
 if (VAR_3 >= VAR_2->max_epid)
  return 0;

 if ((VAR_2->ep_shm_info[VAR_3].es_status !=
   VAR_0) ||
  (VAR_2->ep_shm_info[VAR_2->my_epid].zone ==
   VAR_1))
  return 0;
 else
  return (VAR_2->ep_shm_info[VAR_3].zone ==
    VAR_2->ep_shm_info[VAR_2->my_epid].zone);
}
