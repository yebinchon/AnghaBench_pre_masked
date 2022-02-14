
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_vfs; struct net_device** ndev; } ;
struct TYPE_6__ {int sriov_enabled; } ;
struct octeon_device {scalar_t__ eswitch_mode; TYPE_2__ vf_rep_list; TYPE_3__ sriov_info; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int work; } ;
struct lio_vf_rep_desc {TYPE_1__ stats_wk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 struct lio_vf_rep_desc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

void
FUNC_6(struct octeon_device *VAR_1)
{
 struct lio_vf_rep_desc *VAR_2;
 struct net_device *VAR_3;
 int VAR_4;

 if (VAR_1->eswitch_mode != VAR_0)
  return;

 if (!VAR_1->sriov_info.sriov_enabled)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1->vf_rep_list.num_vfs; VAR_4++) {
  VAR_3 = VAR_1->vf_rep_list.ndev[VAR_4];
  VAR_1->vf_rep_list.ndev[VAR_4] = ((void*)0);
  if (VAR_3) {
   VAR_2 = FUNC_2(VAR_3);
   FUNC_0
    (&VAR_2->stats_wk.work);
   FUNC_4(VAR_3);
   FUNC_3(VAR_3);

   FUNC_5(VAR_3);
   FUNC_1(VAR_3);
  }
 }

 VAR_1->vf_rep_list.num_vfs = 0;
}
