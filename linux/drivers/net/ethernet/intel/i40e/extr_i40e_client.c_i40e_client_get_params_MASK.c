
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct TYPE_13__ {int * qs_handle; } ;
struct TYPE_12__ {int enabled_tc; } ;
struct i40e_vsi {TYPE_9__* netdev; int id; TYPE_8__* back; TYPE_4__ info; TYPE_3__ tc_config; } ;
struct TYPE_15__ {TYPE_5__* prio_qos; } ;
struct i40e_params {int mtu; TYPE_6__ qos; } ;
struct TYPE_11__ {size_t* prioritytable; } ;
struct i40e_dcbx_config {TYPE_2__ etscfg; } ;
struct TYPE_18__ {int mtu; } ;
struct TYPE_10__ {struct i40e_dcbx_config local_dcbx_config; } ;
struct TYPE_17__ {TYPE_7__* pdev; TYPE_1__ hw; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_14__ {size_t tc; scalar_t__ qs_handle; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,size_t,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
int FUNC_3(struct i40e_vsi *VAR_3, struct i40e_params *VAR_4)
{
 struct i40e_dcbx_config *VAR_5 = &VAR_3->back->hw.local_dcbx_config;
 int VAR_6 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  u8 VAR_7 = VAR_5->etscfg.prioritytable[VAR_6];
  u16 VAR_8;


  if (!(VAR_3->tc_config.enabled_tc & FUNC_0(VAR_7)))
   VAR_7 = 0;

  VAR_8 = FUNC_2(VAR_3->info.qs_handle[VAR_7]);
  VAR_4->qos.prio_qos[VAR_6].tc = VAR_7;
  VAR_4->qos.prio_qos[VAR_6].qs_handle = VAR_8;
  if (VAR_8 == VAR_1) {
   FUNC_1(&VAR_3->back->pdev->dev, "Invalid queue set handle for TC = %d, vsi id = %d\n",
    VAR_7, VAR_3->id);
   return -VAR_0;
  }
 }

 VAR_4->mtu = VAR_3->netdev->mtu;
 return 0;
}
