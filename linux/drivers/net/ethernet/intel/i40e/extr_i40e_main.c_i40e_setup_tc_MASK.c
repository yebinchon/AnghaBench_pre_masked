
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct TYPE_6__ {int num_tc; int hw; } ;
struct tc_mqprio_qopt_offload {int mode; TYPE_1__ qopt; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {scalar_t__* max_rate; } ;
struct TYPE_8__ {int enabled_tc; TYPE_2__* tc_info; } ;
struct i40e_vsi {int num_queue_pairs; int seid; struct i40e_pf* back; TYPE_5__ mqprio_qopt; TYPE_3__ tc_config; } ;
struct i40e_pf {int flags; TYPE_4__* pdev; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int qcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_1 (int *,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct i40e_vsi*) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (struct i40e_vsi*) ;
 int FUNC_7 (struct i40e_vsi*) ;
 int FUNC_8 (struct i40e_vsi*,int ,scalar_t__) ;
 int FUNC_9 (struct i40e_vsi*) ;
 int FUNC_10 (struct i40e_vsi*,struct tc_mqprio_qopt_offload*) ;
 int FUNC_11 (struct i40e_vsi*,int) ;
 int FUNC_12 (struct i40e_vsi*) ;
 int FUNC_13 (TYPE_5__*,struct tc_mqprio_qopt_offload*,int) ;
 int FUNC_14 (struct net_device*,char*,...) ;
 struct i40e_netdev_priv* FUNC_15 (struct net_device*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_7, void *VAR_8)
{
 struct tc_mqprio_qopt_offload *VAR_9 = VAR_8;
 struct i40e_netdev_priv *VAR_10 = FUNC_15(VAR_7);
 struct i40e_vsi *VAR_11 = VAR_10->vsi;
 struct i40e_pf *VAR_12 = VAR_11->back;
 u8 VAR_13 = 0, VAR_14, VAR_15;
 bool VAR_16 = 0;
 int VAR_17;
 int VAR_18 = -VAR_0;
 u16 VAR_19;
 int VAR_20;

 VAR_17 = VAR_11->num_queue_pairs;
 VAR_14 = VAR_9->qopt.num_tc;
 VAR_15 = VAR_9->qopt.hw;
 VAR_19 = VAR_9->mode;
 if (!VAR_15) {
  VAR_12->flags &= ~VAR_6;
  FUNC_13(&VAR_11->mqprio_qopt, VAR_9, sizeof(*VAR_9));
  goto config_tc;
 }


 if (VAR_12->flags & VAR_4) {
  FUNC_14(VAR_7,
       "Configuring TC not supported in MFP mode\n");
  return VAR_18;
 }
 switch (VAR_19) {
 case 128:
  VAR_12->flags &= ~VAR_6;


  if (!(VAR_12->flags & VAR_3)) {
   FUNC_14(VAR_7,
        "DCB is not enabled for adapter\n");
   return VAR_18;
  }


  if (VAR_14 > FUNC_5(VAR_12)) {
   FUNC_14(VAR_7,
        "TC count greater than enabled on link for adapter\n");
   return VAR_18;
  }
  break;
 case 129:
  if (VAR_12->flags & VAR_3) {
   FUNC_14(VAR_7,
        "Full offload of TC Mqprio options is not supported when DCB is enabled\n");
   return VAR_18;
  }
  if (!(VAR_12->flags & VAR_5))
   return VAR_18;
  VAR_18 = FUNC_10(VAR_11, VAR_9);
  if (VAR_18)
   return VAR_18;
  FUNC_13(&VAR_11->mqprio_qopt, VAR_9,
         sizeof(*VAR_9));
  VAR_12->flags |= VAR_6;
  VAR_12->flags &= ~VAR_3;
  break;
 default:
  return -VAR_0;
 }

config_tc:

 for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
  VAR_13 |= FUNC_0(VAR_20);


 if (VAR_13 == VAR_11->tc_config.enabled_tc &&
     VAR_19 != 129)
  return 0;


 FUNC_6(VAR_11);

 if (!VAR_15 && !(VAR_12->flags & VAR_6))
  FUNC_7(VAR_11);


 VAR_18 = FUNC_11(VAR_11, VAR_13);
 if (VAR_18) {
  FUNC_14(VAR_7, "Failed configuring TC for VSI seid=%d\n",
       VAR_11->seid);
  VAR_16 = 1;
  goto exit;
 } else {
  FUNC_2(&VAR_11->back->pdev->dev,
    "Setup channel (id:%u) utilizing num_queues %d\n",
    VAR_11->seid, VAR_11->tc_config.tc_info[0].qcount);
 }

 if (VAR_12->flags & VAR_6) {
  if (VAR_11->mqprio_qopt.max_rate[0]) {
   u64 VAR_21 = VAR_11->mqprio_qopt.max_rate[0];

   FUNC_3(VAR_21, VAR_2);
   VAR_18 = FUNC_8(VAR_11, VAR_11->seid, VAR_21);
   if (!VAR_18) {
    u64 VAR_22 = VAR_21;

    FUNC_3(VAR_22, VAR_1);
    FUNC_1(&VAR_11->back->pdev->dev,
     "Set tx rate of %llu Mbps (count of 50Mbps %llu) for vsi->seid %u\n",
     VAR_21,
     VAR_22,
     VAR_11->seid);
   } else {
    VAR_16 = 1;
    goto exit;
   }
  }
  VAR_18 = FUNC_4(VAR_11);
  if (VAR_18) {
   VAR_11->num_queue_pairs = VAR_17;
   FUNC_14(VAR_7,
        "Failed configuring queue channels\n");
   VAR_16 = 1;
   goto exit;
  }
 }

exit:

 if (VAR_16) {
  FUNC_12(VAR_11);
  VAR_16 = 0;
 }


 FUNC_9(VAR_11);
 return VAR_18;
}
