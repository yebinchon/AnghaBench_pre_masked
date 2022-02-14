
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fjes_hw {TYPE_4__* ep_shm_info; } ;
struct TYPE_7__ {TYPE_2__* info; } ;
struct TYPE_8__ {TYPE_3__ tx; } ;
struct TYPE_5__ {int rx_status; } ;
struct TYPE_6__ {TYPE_1__ v1i; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct fjes_hw *VAR_1, int VAR_2)
{
 return (VAR_1->ep_shm_info[VAR_2].tx.info->v1i.rx_status &
   VAR_0);
}
