
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ena_com_dev_get_features_ctx {int llq; int hw_hints; int offload; int aenq; int max_queues; int max_queue_ext; int dev_attr; } ;
struct ena_com_dev {int supported_features; int tx_max_header_size; } ;
struct TYPE_4__ {int max_tx_header_size; } ;
struct TYPE_6__ {int supported_features; scalar_t__ version; int max_header_size; TYPE_1__ max_queue_ext; } ;
struct TYPE_5__ {TYPE_3__ llq; TYPE_3__ hw_hints; TYPE_3__ offload; TYPE_3__ aenq; TYPE_3__ max_queue; TYPE_3__ max_queue_ext; TYPE_3__ dev_attr; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,scalar_t__) ;
 int FUNC_2 (int *,TYPE_3__*,int) ;
 int FUNC_3 (int *,int,int) ;

int FUNC_4(struct ena_com_dev *VAR_10,
         struct ena_com_dev_get_features_ctx *VAR_11)
{
 struct ena_admin_get_feat_resp VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_10, &VAR_12,
     VAR_2, 0);
 if (VAR_13)
  return VAR_13;

 FUNC_2(&VAR_11->dev_attr, &VAR_12.u.dev_attr,
        sizeof(VAR_12.u.dev_attr));
 VAR_10->supported_features = VAR_12.u.dev_attr.supported_features;

 if (VAR_10->supported_features & FUNC_0(VAR_5)) {
  VAR_13 = FUNC_1(VAR_10, &VAR_12,
      VAR_5,
      VAR_8);
  if (VAR_13)
   return VAR_13;

  if (VAR_12.u.max_queue_ext.version != VAR_8)
   return -VAR_0;

  FUNC_2(&VAR_11->max_queue_ext, &VAR_12.u.max_queue_ext,
         sizeof(VAR_12.u.max_queue_ext));
  VAR_10->tx_max_header_size =
   VAR_12.u.max_queue_ext.max_queue_ext.max_tx_header_size;
 } else {
  VAR_13 = FUNC_1(VAR_10, &VAR_12,
      VAR_6, 0);
  FUNC_2(&VAR_11->max_queues, &VAR_12.u.max_queue,
         sizeof(VAR_12.u.max_queue));
  VAR_10->tx_max_header_size =
   VAR_12.u.max_queue.max_header_size;

  if (VAR_13)
   return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_10, &VAR_12,
     VAR_1, 0);
 if (VAR_13)
  return VAR_13;

 FUNC_2(&VAR_11->aenq, &VAR_12.u.aenq,
        sizeof(VAR_12.u.aenq));

 VAR_13 = FUNC_1(VAR_10, &VAR_12,
     VAR_7, 0);
 if (VAR_13)
  return VAR_13;

 FUNC_2(&VAR_11->offload, &VAR_12.u.offload,
        sizeof(VAR_12.u.offload));




 VAR_13 = FUNC_1(VAR_10, &VAR_12, VAR_3, 0);

 if (!VAR_13)
  FUNC_2(&VAR_11->hw_hints, &VAR_12.u.hw_hints,
         sizeof(VAR_12.u.hw_hints));
 else if (VAR_13 == -VAR_9)
  FUNC_3(&VAR_11->hw_hints, 0x0,
         sizeof(VAR_11->hw_hints));
 else
  return VAR_13;

 VAR_13 = FUNC_1(VAR_10, &VAR_12, VAR_4, 0);
 if (!VAR_13)
  FUNC_2(&VAR_11->llq, &VAR_12.u.llq,
         sizeof(VAR_12.u.llq));
 else if (VAR_13 == -VAR_9)
  FUNC_3(&VAR_11->llq, 0x0, sizeof(VAR_11->llq));
 else
  return VAR_13;

 return 0;
}
