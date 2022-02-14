
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int * max_rate; } ;
struct TYPE_7__ {int enabled_tc; TYPE_1__* tc_info; } ;
struct i40e_vsi {int * tc_seid_map; TYPE_5__* back; int ch_list; TYPE_3__ mqprio_qopt; TYPE_2__ tc_config; int seid; } ;
struct i40e_channel {int seid; int num_queue_pairs; int list; int max_tx_rate; int base_queue; } ;
struct TYPE_10__ {TYPE_4__* pdev; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {int qoffset; int qcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i40e_vsi*,struct i40e_channel*) ;
 int FUNC_5 (struct i40e_vsi*) ;
 struct i40e_channel* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct i40e_vsi *VAR_4)
{
 struct i40e_channel *VAR_5;
 u64 VAR_6 = 0;
 int VAR_7 = 0, VAR_8;


 VAR_4->tc_seid_map[0] = VAR_4->seid;
 for (VAR_8 = 1; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_4->tc_config.enabled_tc & FUNC_0(VAR_8)) {
   VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
   if (!VAR_5) {
    VAR_7 = -VAR_0;
    goto err_free;
   }

   FUNC_1(&VAR_5->list);
   VAR_5->num_queue_pairs =
    VAR_4->tc_config.tc_info[VAR_8].qcount;
   VAR_5->base_queue =
    VAR_4->tc_config.tc_info[VAR_8].qoffset;




   VAR_6 = VAR_4->mqprio_qopt.max_rate[VAR_8];
   FUNC_3(VAR_6, VAR_2);
   VAR_5->max_tx_rate = VAR_6;

   FUNC_7(&VAR_5->list, &VAR_4->ch_list);

   VAR_7 = FUNC_4(VAR_4, VAR_5);
   if (VAR_7) {
    FUNC_2(&VAR_4->back->pdev->dev,
     "Failed creating queue channel with TC%d: queues %d\n",
     VAR_8, VAR_5->num_queue_pairs);
    goto err_free;
   }
   VAR_4->tc_seid_map[VAR_8] = VAR_5->seid;
  }
 }
 return VAR_7;

err_free:
 FUNC_5(VAR_4);
 return VAR_7;
}
