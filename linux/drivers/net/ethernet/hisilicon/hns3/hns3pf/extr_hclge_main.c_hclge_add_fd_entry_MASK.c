
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {scalar_t__ vport_id; scalar_t__ alloc_tqps; struct hclge_dev* back; } ;
struct hclge_fd_rule {int action; int rule_type; scalar_t__ queue_id; scalar_t__ vf_id; scalar_t__ unused_tuple; int location; int flow_type; } ;
struct hclge_dev {int num_req_vfs; int fd_rule_lock; TYPE_2__* pdev; TYPE_1__* vport; int fd_en; } ;
struct ethtool_rxnfc {int fs; } ;
struct ethtool_rx_flow_spec {scalar_t__ ring_cookie; int location; int flow_type; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ vport_id; scalar_t__ alloc_tqps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct hnae3_handle*) ;
 int FUNC_5 (struct hclge_dev*,struct ethtool_rx_flow_spec*,scalar_t__*) ;
 int FUNC_6 (struct hclge_dev*,struct hclge_fd_rule*) ;
 int FUNC_7 (struct hclge_dev*,struct ethtool_rx_flow_spec*,struct hclge_fd_rule*) ;
 struct hclge_vport* FUNC_8 (struct hnae3_handle*) ;
 int FUNC_9 (struct hclge_dev*) ;
 int FUNC_10 (struct hclge_fd_rule*) ;
 struct hclge_fd_rule* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct hnae3_handle *VAR_8,
         struct ethtool_rxnfc *VAR_9)
{
 struct hclge_vport *VAR_10 = FUNC_8(VAR_8);
 struct hclge_dev *VAR_11 = VAR_10->back;
 u16 VAR_12 = 0, VAR_13 = 0;
 struct ethtool_rx_flow_spec *VAR_14;
 struct hclge_fd_rule *VAR_15;
 u32 VAR_16 = 0;
 u8 VAR_17;
 int VAR_18;

 if (!FUNC_9(VAR_11))
  return -VAR_2;

 if (!VAR_11->fd_en) {
  FUNC_1(&VAR_11->pdev->dev,
    "Please enable flow director first\n");
  return -VAR_2;
 }

 VAR_14 = (struct ethtool_rx_flow_spec *)&VAR_9->fs;

 VAR_18 = FUNC_5(VAR_11, VAR_14, &VAR_16);
 if (VAR_18) {
  FUNC_0(&VAR_11->pdev->dev, "Check fd spec failed\n");
  return VAR_18;
 }

 if (VAR_14->ring_cookie == VAR_7) {
  VAR_17 = VAR_5;
 } else {
  u32 VAR_19 = FUNC_2(VAR_14->ring_cookie);
  u8 VAR_20 = FUNC_3(VAR_14->ring_cookie);
  u16 VAR_21;

  if (VAR_20 > VAR_11->num_req_vfs) {
   FUNC_0(&VAR_11->pdev->dev,
    "Error: vf id (%d) > max vf num (%d)\n",
    VAR_20, VAR_11->num_req_vfs);
   return -VAR_0;
  }

  VAR_12 = VAR_20 ? VAR_11->vport[VAR_20].vport_id : VAR_10->vport_id;
  VAR_21 = VAR_20 ? VAR_11->vport[VAR_20].alloc_tqps : VAR_10->alloc_tqps;

  if (VAR_19 >= VAR_21) {
   FUNC_0(&VAR_11->pdev->dev,
    "Error: queue id (%d) > max tqp num (%d)\n",
    VAR_19, VAR_21 - 1);
   return -VAR_0;
  }

  VAR_17 = VAR_4;
  VAR_13 = VAR_19;
 }

 VAR_15 = FUNC_11(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_18 = FUNC_7(VAR_11, VAR_14, VAR_15);
 if (VAR_18) {
  FUNC_10(VAR_15);
  return VAR_18;
 }

 VAR_15->flow_type = VAR_14->flow_type;

 VAR_15->location = VAR_14->location;
 VAR_15->unused_tuple = VAR_16;
 VAR_15->vf_id = VAR_12;
 VAR_15->queue_id = VAR_13;
 VAR_15->action = VAR_17;
 VAR_15->rule_type = VAR_6;




 FUNC_4(VAR_8);

 FUNC_12(&VAR_11->fd_rule_lock);
 VAR_18 = FUNC_6(VAR_11, VAR_15);

 FUNC_13(&VAR_11->fd_rule_lock);

 return VAR_18;
}
