
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtchnl_vf_resource {int num_vsis; int vf_cap_flags; int rss_lut_size; int rss_key_size; TYPE_2__* vsi_res; } ;
struct net_device {int gso_partial_features; int hw_enc_features; int vlan_features; int hw_features; int features; int wanted_features; int mtu; int priv_flags; } ;
struct iavf_vsi {int base_vector; int qs_handle; struct net_device* netdev; int work_limit; struct iavf_adapter* back; int id; } ;
struct iavf_adapter {int num_req_queues; int rss_lut_size; int rss_key_size; TYPE_2__* vsi_res; struct net_device* netdev; struct iavf_vsi vsi; int flags; TYPE_1__* pdev; struct virtchnl_vf_resource* vf_res; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {scalar_t__ vsi_type; int num_queue_pairs; int qset_handle; int vsi_id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct iavf_adapter*) ;

int FUNC_2(struct iavf_adapter *VAR_37)
{
 struct virtchnl_vf_resource *VAR_38 = VAR_37->vf_res;
 int VAR_39, VAR_40 = VAR_37->num_req_queues;
 struct net_device *VAR_41 = VAR_37->netdev;
 struct iavf_vsi *VAR_42 = &VAR_37->vsi;
 netdev_features_t VAR_43;
 netdev_features_t VAR_44;


 for (VAR_39 = 0; VAR_39 < VAR_38->num_vsis; VAR_39++) {
  if (VAR_38->vsi_res[VAR_39].vsi_type == VAR_36)
   VAR_37->vsi_res = &VAR_38->vsi_res[VAR_39];
 }
 if (!VAR_37->vsi_res) {
  FUNC_0(&VAR_37->pdev->dev, "No LAN VSI found\n");
  return -VAR_0;
 }

 if (VAR_40 &&
     VAR_40 != VAR_37->vsi_res->num_queue_pairs) {




  FUNC_0(&VAR_37->pdev->dev,
   "Requested %d queues, but PF only gave us %d.\n",
   VAR_40,
   VAR_37->vsi_res->num_queue_pairs);
  VAR_37->flags |= VAR_2;
  VAR_37->num_req_queues = VAR_37->vsi_res->num_queue_pairs;
  FUNC_1(VAR_37);
  return -VAR_0;
 }
 VAR_37->num_req_queues = 0;

 VAR_43 = VAR_25 |
     VAR_21 |
     VAR_20 |
     VAR_15 |
     VAR_26 |
     VAR_27 |
     VAR_29 |
     VAR_28 |
     VAR_24 |
     VAR_23 |
     VAR_22 |
     0;




 if (VAR_38->vf_cap_flags & VAR_32) {
  VAR_43 |= VAR_13 |
       VAR_8 |
       VAR_9 |
       VAR_10 |
       VAR_11 |
       VAR_14 |
       VAR_12 |
       0;

  if (!(VAR_38->vf_cap_flags &
        VAR_33))
   VAR_41->gso_partial_features |=
    VAR_14;

  VAR_41->gso_partial_features |= VAR_9;
  VAR_41->hw_enc_features |= VAR_30;
  VAR_41->hw_enc_features |= VAR_43;
 }

 VAR_41->vlan_features |= VAR_43 | VAR_30;




 VAR_44 = VAR_43;


 if (VAR_38->vf_cap_flags & VAR_35)
  VAR_44 |= (VAR_19 |
    VAR_18);

 if (VAR_38->vf_cap_flags & VAR_31)
  VAR_44 |= VAR_16;

 VAR_41->hw_features |= VAR_44;

 VAR_41->features |= VAR_44;

 if (VAR_38->vf_cap_flags & VAR_35)
  VAR_41->features |= VAR_17;

 VAR_41->priv_flags |= VAR_5;




 if (VAR_41->wanted_features) {
  if (!(VAR_41->wanted_features & VAR_27) ||
      VAR_41->mtu < 576)
   VAR_41->features &= ~VAR_27;
  if (!(VAR_41->wanted_features & VAR_28) ||
      VAR_41->mtu < 576)
   VAR_41->features &= ~VAR_28;
  if (!(VAR_41->wanted_features & VAR_29))
   VAR_41->features &= ~VAR_29;
  if (!(VAR_41->wanted_features & VAR_6))
   VAR_41->features &= ~VAR_6;
  if (!(VAR_41->wanted_features & VAR_7))
   VAR_41->features &= ~VAR_7;
 }

 VAR_37->vsi.id = VAR_37->vsi_res->vsi_id;

 VAR_37->vsi.back = VAR_37;
 VAR_37->vsi.base_vector = 1;
 VAR_37->vsi.work_limit = VAR_1;
 VAR_42->netdev = VAR_37->netdev;
 VAR_42->qs_handle = VAR_37->vsi_res->qset_handle;
 if (VAR_38->vf_cap_flags & VAR_34) {
  VAR_37->rss_key_size = VAR_38->rss_key_size;
  VAR_37->rss_lut_size = VAR_38->rss_lut_size;
 } else {
  VAR_37->rss_key_size = VAR_3;
  VAR_37->rss_lut_size = VAR_4;
 }

 return 0;
}
