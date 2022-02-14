
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct virtchnl_vf_resource {int vf_cap_flags; } ;
struct TYPE_8__ {int num_tc; scalar_t__* count; scalar_t__* offset; int hw; } ;
struct tc_mqprio_qopt_offload {scalar_t__ mode; TYPE_4__ qopt; int * max_rate; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ state; int total_qps; TYPE_2__* ch_info; } ;
struct iavf_adapter {int num_tc; int netdev; int aq_required; TYPE_3__ ch_config; TYPE_1__* pdev; struct virtchnl_vf_resource* vf_res; } ;
struct TYPE_6__ {scalar_t__ count; scalar_t__ offset; int max_tx_rate; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*,struct tc_mqprio_qopt_offload*) ;
 struct iavf_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct net_device*,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_10, void *VAR_11)
{
 struct tc_mqprio_qopt_offload *VAR_12 = VAR_11;
 struct iavf_adapter *VAR_13 = FUNC_4(VAR_10);
 struct virtchnl_vf_resource *VAR_14 = VAR_13->vf_res;
 u8 VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0, VAR_18 = 0;
 u64 VAR_19;
 u16 VAR_20;
 int VAR_21;

 VAR_15 = VAR_12->qopt.num_tc;
 VAR_20 = VAR_12->mode;


 if (!VAR_12->qopt.hw) {
  if (VAR_13->ch_config.state == VAR_9) {

   FUNC_5(VAR_10);
   VAR_13->num_tc = 0;
   FUNC_9(VAR_10);
   FUNC_8(VAR_10);
   FUNC_2(VAR_13);
   VAR_13->aq_required = VAR_2;
   goto exit;
  } else {
   return -VAR_0;
  }
 }


 if (VAR_20 == VAR_6) {
  if (!(VAR_14->vf_cap_flags & VAR_7)) {
   FUNC_0(&VAR_13->pdev->dev, "ADq not supported\n");
   return -VAR_1;
  }
  if (VAR_13->ch_config.state != VAR_8) {
   FUNC_0(&VAR_13->pdev->dev, "TC configuration already exists\n");
   return -VAR_0;
  }

  VAR_17 = FUNC_3(VAR_13, VAR_12);
  if (VAR_17)
   return VAR_17;

  if (VAR_13->num_tc == VAR_15)
   return 0;
  VAR_13->num_tc = VAR_15;

  for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
   if (VAR_21 < VAR_15) {
    VAR_13->ch_config.ch_info[VAR_21].count =
     VAR_12->qopt.count[VAR_21];
    VAR_13->ch_config.ch_info[VAR_21].offset =
     VAR_12->qopt.offset[VAR_21];
    VAR_16 += VAR_12->qopt.count[VAR_21];
    VAR_19 = VAR_12->max_rate[VAR_21];

    VAR_19 = FUNC_1(VAR_19,
            VAR_5);
    VAR_13->ch_config.ch_info[VAR_21].max_tx_rate =
     VAR_19;
   } else {
    VAR_13->ch_config.ch_info[VAR_21].count = 1;
    VAR_13->ch_config.ch_info[VAR_21].offset = 0;
   }
  }
  VAR_13->ch_config.total_qps = VAR_16;
  FUNC_9(VAR_10);
  FUNC_8(VAR_10);
  VAR_13->aq_required |= VAR_3;
  FUNC_5(VAR_10);

  FUNC_6(VAR_13->netdev, VAR_15);
  for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
   u16 VAR_22 = VAR_12->qopt.count[VAR_21];
   u16 VAR_23 = VAR_12->qopt.offset[VAR_21];

   if (VAR_21 < VAR_15)
    FUNC_7(VAR_10, VAR_18++, VAR_22,
          VAR_23);
  }
 }
exit:
 return VAR_17;
}
