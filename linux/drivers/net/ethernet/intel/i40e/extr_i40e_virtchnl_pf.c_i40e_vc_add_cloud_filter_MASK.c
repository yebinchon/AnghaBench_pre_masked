
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_l4_spec {int* dst_mac; int* src_mac; int vlan_id; int dst_port; int src_port; int* dst_ip; int* src_ip; } ;
struct TYPE_12__ {struct virtchnl_l4_spec tcp_spec; } ;
struct TYPE_11__ {struct virtchnl_l4_spec tcp_spec; } ;
struct virtchnl_filter {int flow_type; size_t action_meta; int field_flags; TYPE_2__ data; TYPE_1__ mask; } ;
struct i40e_vsi {int seid; } ;
struct i40e_vf {int num_cloud_filters; int cloud_filter_list; int vf_id; TYPE_6__* ch; int adq_enabled; int vf_states; struct i40e_pf* pf; } ;
struct TYPE_18__ {int asq_last_status; } ;
struct TYPE_19__ {TYPE_8__ aq; } ;
struct i40e_pf {TYPE_9__ hw; TYPE_7__* pdev; struct i40e_vsi** vsi; } ;
struct TYPE_14__ {int src_ip6; int dst_ip6; } ;
struct TYPE_13__ {int src_ip; int dst_ip; } ;
struct TYPE_15__ {TYPE_4__ v6; TYPE_3__ v4; } ;
struct i40e_cloud_filter {int* dst_mac; int* src_mac; int vlan_id; int dst_port; int src_port; int cloud_node; int flags; int seid; TYPE_5__ ip; int n_proto; } ;
typedef int i40e_status ;
struct TYPE_17__ {int dev; } ;
struct TYPE_16__ {size_t vsi_idx; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;


 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct i40e_vsi*,struct i40e_cloud_filter*,int) ;
 int FUNC_6 (struct i40e_vsi*,struct i40e_cloud_filter*,int) ;
 int FUNC_7 (TYPE_9__*,int ) ;
 int FUNC_8 (TYPE_9__*,int) ;
 scalar_t__ FUNC_9 (struct i40e_vf*,struct virtchnl_filter*) ;
 int FUNC_10 (struct i40e_vf*,int ,int ) ;
 int FUNC_11 (struct i40e_cloud_filter*) ;
 struct i40e_cloud_filter* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int*,int) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct i40e_vf *VAR_8, u8 *VAR_9)
{
 struct virtchnl_filter *VAR_10 = (struct virtchnl_filter *)VAR_9;
 struct virtchnl_l4_spec VAR_11 = VAR_10->mask.tcp_spec;
 struct virtchnl_l4_spec VAR_12 = VAR_10->data.tcp_spec;
 struct i40e_cloud_filter *VAR_13 = ((void*)0);
 struct i40e_pf *VAR_14 = VAR_8->pf;
 struct i40e_vsi *VAR_15 = ((void*)0);
 i40e_status VAR_16 = 0;
 int VAR_17, VAR_18;

 if (!FUNC_14(VAR_6, &VAR_8->vf_states)) {
  VAR_16 = VAR_5;
  goto err_out;
 }

 if (!VAR_8->adq_enabled) {
  FUNC_3(&VAR_14->pdev->dev,
    "VF %d: ADq is not enabled, can't apply cloud filter\n",
    VAR_8->vf_id);
  VAR_16 = VAR_5;
  goto err_out;
 }

 if (FUNC_9(VAR_8, VAR_10)) {
  FUNC_3(&VAR_14->pdev->dev,
    "VF %d: Invalid input/s, can't apply cloud filter\n",
    VAR_8->vf_id);
  VAR_16 = VAR_5;
  goto err_out;
 }

 VAR_13 = FUNC_12(sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_0;


 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
  VAR_13->dst_mac[VAR_17] = VAR_11.dst_mac[VAR_17] & VAR_12.dst_mac[VAR_17];


 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
  VAR_13->src_mac[VAR_17] = VAR_11.src_mac[VAR_17] & VAR_12.src_mac[VAR_17];

 VAR_13->vlan_id = VAR_11.vlan_id & VAR_12.vlan_id;
 VAR_13->dst_port = VAR_11.dst_port & VAR_12.dst_port;
 VAR_13->src_port = VAR_11.src_port & VAR_12.src_port;

 switch (VAR_10->flow_type) {
 case 129:
  VAR_13->n_proto = VAR_2;
  if (VAR_11.dst_ip[0] & VAR_12.dst_ip[0])
   FUNC_13(&VAR_13->ip.v4.dst_ip, VAR_12.dst_ip,
          FUNC_0(VAR_12.dst_ip));
  else if (VAR_11.src_ip[0] & VAR_12.dst_ip[0])
   FUNC_13(&VAR_13->ip.v4.src_ip, VAR_12.src_ip,
          FUNC_0(VAR_12.dst_ip));
  break;
 case 128:
  VAR_13->n_proto = VAR_3;
  if (VAR_11.dst_ip[3] & VAR_12.dst_ip[3])
   FUNC_13(&VAR_13->ip.v6.dst_ip6, VAR_12.dst_ip,
          sizeof(VAR_13->ip.v6.dst_ip6));
  if (VAR_11.src_ip[3] & VAR_12.src_ip[3])
   FUNC_13(&VAR_13->ip.v6.src_ip6, VAR_12.src_ip,
          sizeof(VAR_13->ip.v6.src_ip6));
  break;
 default:



  FUNC_3(&VAR_14->pdev->dev, "VF %d: Flow type not configured\n",
    VAR_8->vf_id);
 }


 VAR_15 = VAR_14->vsi[VAR_8->ch[VAR_10->action_meta].vsi_idx];
 VAR_13->seid = VAR_15->seid;
 VAR_13->flags = VAR_10->field_flags;


 if (VAR_12.dst_port)
  VAR_18 = FUNC_6(VAR_15, VAR_13, 1);
 else
  VAR_18 = FUNC_5(VAR_15, VAR_13, 1);
 if (VAR_18) {
  FUNC_2(&VAR_14->pdev->dev,
   "VF %d: Failed to add cloud filter, err %s aq_err %s\n",
   VAR_8->vf_id, FUNC_8(&VAR_14->hw, VAR_18),
   FUNC_7(&VAR_14->hw, VAR_14->hw.aq.asq_last_status));
  goto err_free;
 }

 FUNC_1(&VAR_13->cloud_node);
 FUNC_4(&VAR_13->cloud_node, &VAR_8->cloud_filter_list);

 VAR_13 = ((void*)0);
 VAR_8->num_cloud_filters++;
err_free:
 FUNC_11(VAR_13);
err_out:
 return FUNC_10(VAR_8, VAR_7,
           VAR_16);
}
