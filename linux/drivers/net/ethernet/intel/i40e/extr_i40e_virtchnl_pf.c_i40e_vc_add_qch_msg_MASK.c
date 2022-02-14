
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
struct virtchnl_tc_info {int num_tc; TYPE_5__* list; } ;
struct i40e_vf {int driver_caps; int num_tc; int adq_enabled; scalar_t__ num_req_queues; TYPE_4__* ch; int vf_id; scalar_t__ num_queue_pairs; scalar_t__ spoofchk; int vf_states; struct i40e_pf* pf; } ;
struct i40e_link_status {int link_speed; } ;
struct TYPE_6__ {struct i40e_link_status link_info; } ;
struct TYPE_7__ {TYPE_1__ phy; } ;
struct i40e_pf {int queues_left; TYPE_3__* pdev; TYPE_2__ hw; } ;
typedef int i40e_status ;
struct TYPE_10__ {scalar_t__ count; scalar_t__ max_tx_rate; } ;
struct TYPE_9__ {scalar_t__ max_tx_rate; scalar_t__ num_qps; } ;
struct TYPE_8__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i40e_vf*,int) ;
 int FUNC_2 (struct i40e_vf*) ;
 int FUNC_3 (struct i40e_vf*,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct i40e_vf *VAR_14, u8 *VAR_15)
{
 struct virtchnl_tc_info *VAR_16 =
  (struct virtchnl_tc_info *)VAR_15;
 struct i40e_pf *VAR_17 = VAR_14->pf;
 struct i40e_link_status *VAR_18 = &VAR_17->hw.phy.link_info;
 int VAR_19, VAR_20 = 0;
 i40e_status VAR_21 = 0;
 u64 VAR_22 = 0;

 if (!FUNC_4(VAR_5, &VAR_14->vf_states)) {
  VAR_21 = VAR_1;
  goto err;
 }


 if (VAR_14->spoofchk) {
  FUNC_0(&VAR_17->pdev->dev,
   "Spoof check is ON, turn it OFF to enable ADq\n");
  VAR_21 = VAR_1;
  goto err;
 }

 if (!(VAR_14->driver_caps & VAR_13)) {
  FUNC_0(&VAR_17->pdev->dev,
   "VF %d attempting to enable ADq, but hasn't properly negotiated that capability\n",
   VAR_14->vf_id);
  VAR_21 = VAR_1;
  goto err;
 }


 if (!VAR_16->num_tc || VAR_16->num_tc > VAR_3) {
  FUNC_0(&VAR_17->pdev->dev,
   "VF %d trying to set %u TCs, valid range 1-%u TCs per VF\n",
   VAR_14->vf_id, VAR_16->num_tc, VAR_3);
  VAR_21 = VAR_1;
  goto err;
 }


 for (VAR_19 = 0; VAR_19 < VAR_16->num_tc; VAR_19++)
  if (!VAR_16->list[VAR_19].count ||
      VAR_16->list[VAR_19].count > VAR_0) {
   FUNC_0(&VAR_17->pdev->dev,
    "VF %d: TC %d trying to set %u queues, valid range 1-%u queues per TC\n",
    VAR_14->vf_id, VAR_19, VAR_16->list[VAR_19].count,
    VAR_0);
   VAR_21 = VAR_1;
   goto err;
  }


 VAR_20 = VAR_2 - VAR_0;

 if (VAR_17->queues_left < VAR_20) {
  FUNC_0(&VAR_17->pdev->dev,
   "No queues left to allocate to VF %d\n",
   VAR_14->vf_id);
  VAR_21 = VAR_1;
  goto err;
 } else {




  VAR_14->num_queue_pairs = VAR_2;
 }


 switch (VAR_18->link_speed) {
 case 133:
  VAR_22 = VAR_6;
  break;
 case 131:
  VAR_22 = VAR_7;
  break;
 case 132:
  VAR_22 = VAR_8;
  break;
 case 130:
  VAR_22 = VAR_9;
  break;
 case 129:
  VAR_22 = VAR_10;
  break;
 case 128:
  VAR_22 = VAR_11;
  break;
 default:
  FUNC_0(&VAR_17->pdev->dev,
   "Cannot detect link speed\n");
  VAR_21 = VAR_1;
  goto err;
 }


 VAR_14->num_tc = VAR_16->num_tc;
 for (VAR_19 = 0; VAR_19 < VAR_14->num_tc; VAR_19++) {
  if (VAR_16->list[VAR_19].max_tx_rate) {
   if (VAR_16->list[VAR_19].max_tx_rate > VAR_22) {
    FUNC_0(&VAR_17->pdev->dev,
     "Invalid max tx rate %llu specified for VF %d.",
     VAR_16->list[VAR_19].max_tx_rate,
     VAR_14->vf_id);
    VAR_21 = VAR_1;
    goto err;
   } else {
    VAR_14->ch[VAR_19].max_tx_rate =
     VAR_16->list[VAR_19].max_tx_rate;
   }
  }
  VAR_14->ch[VAR_19].num_qps = VAR_16->list[VAR_19].count;
 }


 VAR_14->adq_enabled = 1;




 VAR_14->num_req_queues = 0;


 FUNC_2(VAR_14);
 FUNC_1(VAR_14, 0);

 return VAR_4;


err:
 return FUNC_3(VAR_14, VAR_12,
           VAR_21);
}
