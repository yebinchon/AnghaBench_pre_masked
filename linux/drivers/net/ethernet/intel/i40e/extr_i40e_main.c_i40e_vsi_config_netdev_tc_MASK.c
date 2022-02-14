
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int enabled_tc; TYPE_2__* tc_info; int numtc; } ;
struct i40e_vsi {TYPE_3__ tc_config; struct i40e_pf* back; struct net_device* netdev; } ;
struct TYPE_4__ {size_t* prioritytable; } ;
struct i40e_dcbx_config {TYPE_1__ etscfg; } ;
struct i40e_hw {struct i40e_dcbx_config local_dcbx_config; } ;
struct i40e_pf {int flags; struct i40e_hw hw; } ;
struct TYPE_5__ {size_t netdev_tc; int qoffset; int qcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int,size_t) ;
 int FUNC_4 (struct net_device*,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i40e_vsi *VAR_3, u8 VAR_4)
{
 struct net_device *VAR_5 = VAR_3->netdev;
 struct i40e_pf *VAR_6 = VAR_3->back;
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 u8 VAR_8 = 0;
 int VAR_9;
 struct i40e_dcbx_config *VAR_10 = &VAR_7->local_dcbx_config;

 if (!VAR_5)
  return;

 if (!VAR_4) {
  FUNC_1(VAR_5);
  return;
 }


 if (FUNC_2(VAR_5, VAR_3->tc_config.numtc))
  return;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {







  if (VAR_3->tc_config.enabled_tc & FUNC_0(VAR_9))
   FUNC_4(VAR_5,
     VAR_3->tc_config.tc_info[VAR_9].netdev_tc,
     VAR_3->tc_config.tc_info[VAR_9].qcount,
     VAR_3->tc_config.tc_info[VAR_9].qoffset);
 }

 if (VAR_6->flags & VAR_0)
  return;


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {

  u8 VAR_11 = VAR_10->etscfg.prioritytable[VAR_9];

  VAR_8 = VAR_3->tc_config.tc_info[VAR_11].netdev_tc;
  FUNC_3(VAR_5, VAR_9, VAR_8);
 }
}
