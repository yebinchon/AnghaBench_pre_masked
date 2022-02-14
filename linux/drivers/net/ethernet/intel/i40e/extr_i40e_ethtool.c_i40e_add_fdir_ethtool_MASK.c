
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef void* u16 ;
struct i40e_vsi {scalar_t__ num_queue_pairs; void* id; struct i40e_pf* back; } ;
struct i40e_rx_flow_userdef {int flex_offset; int flex_word; scalar_t__ flex_filter; } ;
struct TYPE_7__ {scalar_t__ fd_filters_best_effort; scalar_t__ fd_filters_guaranteed; } ;
struct TYPE_9__ {int pf_id; TYPE_1__ func_caps; } ;
struct i40e_pf {int flags; size_t num_alloc_vfs; int fdir_pf_active_filters; TYPE_3__ hw; TYPE_2__* vf; int state; } ;
struct i40e_fdir_filter {scalar_t__ fd_id; size_t dest_ctl; int flow_type; int flex_filter; int fdir_node; int flex_offset; int flex_word; int src_ip; int dst_ip; int src_port; int dst_port; int ip4_proto; int cnt_index; int fd_status; void* dest_vsi; void* q_index; } ;
struct ethtool_rxnfc {int fs; } ;
struct TYPE_11__ {int ip4dst; int ip4src; int pdst; int psrc; } ;
struct TYPE_10__ {int proto; } ;
struct TYPE_12__ {TYPE_5__ tcp_ip4_spec; TYPE_4__ usr_ip4_spec; } ;
struct ethtool_rx_flow_spec {int flow_type; scalar_t__ location; scalar_t__ ring_cookie; TYPE_6__ h_u; } ;
struct TYPE_8__ {scalar_t__ num_queue_pairs; void* lan_vsi_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i40e_vsi*,struct i40e_fdir_filter*,int) ;
 int FUNC_6 (struct i40e_vsi*,struct ethtool_rx_flow_spec*,struct i40e_rx_flow_userdef*) ;
 int FUNC_7 (struct i40e_vsi*,struct i40e_fdir_filter*) ;
 scalar_t__ FUNC_8 (struct ethtool_rx_flow_spec*,struct i40e_rx_flow_userdef*) ;
 int FUNC_9 (struct i40e_vsi*,struct i40e_fdir_filter*,scalar_t__,int *) ;
 int FUNC_10 (struct i40e_fdir_filter*) ;
 struct i40e_fdir_filter* FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct i40e_vsi *VAR_17,
     struct ethtool_rxnfc *VAR_18)
{
 struct i40e_rx_flow_userdef VAR_19;
 struct ethtool_rx_flow_spec *VAR_20;
 struct i40e_fdir_filter *VAR_21;
 u16 VAR_22 = 0, VAR_23 = 0;
 struct i40e_pf *VAR_24;
 int VAR_25 = -VAR_1;
 u8 VAR_26;

 if (!VAR_17)
  return -VAR_1;
 VAR_24 = VAR_17->back;

 if (!(VAR_24->flags & VAR_11))
  return -VAR_4;

 if (FUNC_12(VAR_14, VAR_24->state))
  return -VAR_3;

 if (FUNC_12(VAR_16, VAR_24->state) ||
     FUNC_12(VAR_15, VAR_24->state))
  return -VAR_0;

 if (FUNC_12(VAR_13, VAR_24->state))
  return -VAR_0;

 VAR_20 = (struct ethtool_rx_flow_spec *)&VAR_18->fs;


 if (FUNC_8(VAR_20, &VAR_19))
  return -VAR_1;


 if (VAR_20->flow_type & VAR_6)
  return -VAR_1;

 VAR_25 = FUNC_6(VAR_17, VAR_20, &VAR_19);
 if (VAR_25)
  return VAR_25;

 if (VAR_20->location >= (VAR_24->hw.func_caps.fd_filters_best_effort +
         VAR_24->hw.func_caps.fd_filters_guaranteed)) {
  return -VAR_1;
 }




 if (VAR_20->ring_cookie == VAR_12) {
  VAR_26 = VAR_9;
 } else {
  u32 VAR_27 = FUNC_2(VAR_20->ring_cookie);
  u8 VAR_28 = FUNC_3(VAR_20->ring_cookie);

  if (!VAR_28) {
   if (VAR_27 >= VAR_17->num_queue_pairs)
    return -VAR_1;
   VAR_22 = VAR_17->id;
  } else {

   VAR_28--;

   if (VAR_28 >= VAR_24->num_alloc_vfs)
    return -VAR_1;
   if (VAR_27 >= VAR_24->vf[VAR_28].num_queue_pairs)
    return -VAR_1;
   VAR_22 = VAR_24->vf[VAR_28].lan_vsi_id;
  }
  VAR_26 = VAR_8;
  VAR_23 = VAR_27;
 }

 VAR_21 = FUNC_11(sizeof(*VAR_21), VAR_7);

 if (!VAR_21)
  return -VAR_2;

 VAR_21->fd_id = VAR_20->location;
 VAR_21->q_index = VAR_23;
 VAR_21->dest_vsi = VAR_22;
 VAR_21->dest_ctl = VAR_26;
 VAR_21->fd_status = VAR_10;
 VAR_21->cnt_index = FUNC_0(VAR_24->hw.pf_id);
 VAR_21->dst_ip = VAR_20->h_u.tcp_ip4_spec.ip4src;
 VAR_21->src_ip = VAR_20->h_u.tcp_ip4_spec.ip4dst;
 VAR_21->flow_type = VAR_20->flow_type & ~VAR_5;
 VAR_21->ip4_proto = VAR_20->h_u.usr_ip4_spec.proto;




 VAR_21->dst_port = VAR_20->h_u.tcp_ip4_spec.psrc;
 VAR_21->src_port = VAR_20->h_u.tcp_ip4_spec.pdst;
 VAR_21->dst_ip = VAR_20->h_u.tcp_ip4_spec.ip4src;
 VAR_21->src_ip = VAR_20->h_u.tcp_ip4_spec.ip4dst;

 if (VAR_19.flex_filter) {
  VAR_21->flex_filter = 1;
  VAR_21->flex_word = FUNC_1(VAR_19.flex_word);
  VAR_21->flex_offset = VAR_19.flex_offset;
 }


 VAR_25 = FUNC_7(VAR_17, VAR_21);
 if (VAR_25)
  goto free_filter_memory;





 FUNC_9(VAR_17, VAR_21, VAR_20->location, ((void*)0));
 VAR_25 = FUNC_5(VAR_17, VAR_21, 1);
 if (VAR_25)
  goto remove_sw_rule;
 return 0;

remove_sw_rule:
 FUNC_4(&VAR_21->fdir_node);
 VAR_24->fdir_pf_active_filters--;
free_filter_memory:
 FUNC_10(VAR_21);
 return VAR_25;
}
