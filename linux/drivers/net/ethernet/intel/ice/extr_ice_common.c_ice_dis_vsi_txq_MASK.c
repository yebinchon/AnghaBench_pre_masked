
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct ice_sq_cd {int dummy; } ;
struct TYPE_2__ {int parent_teid; } ;
struct ice_sched_node {TYPE_1__ info; } ;
struct ice_q_ctx {size_t q_handle; } ;
struct ice_port_info {scalar_t__ port_state; int sched_lock; int hw; int root; } ;
struct ice_aqc_dis_txq_item {int num_qs; int * q_id; int parent_teid; } ;
typedef int qg_list ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_disq_rst_src { ____Placeholder_ice_disq_rst_src } ice_disq_rst_src ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int,struct ice_aqc_dis_txq_item*,int,int,size_t,struct ice_sq_cd*) ;
 int FUNC_2 (int ,int ,char*,size_t,...) ;
 int FUNC_3 (struct ice_port_info*,struct ice_sched_node*) ;
 struct ice_q_ctx* FUNC_4 (int ,size_t,size_t,size_t) ;
 struct ice_sched_node* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

enum ice_status
FUNC_8(struct ice_port_info *VAR_5, u16 VAR_6, u8 VAR_7, u8 VAR_8,
  u16 *VAR_9, u16 *VAR_10, u32 *VAR_11,
  enum ice_disq_rst_src VAR_12, u16 VAR_13,
  struct ice_sq_cd *VAR_14)
{
 enum ice_status VAR_15 = VAR_2;
 struct ice_aqc_dis_txq_item VAR_16;
 struct ice_q_ctx *VAR_17;
 u16 VAR_18;

 if (!VAR_5 || VAR_5->port_state != VAR_4)
  return VAR_1;

 if (!VAR_8) {




  if (VAR_12)
   return FUNC_1(VAR_5->hw, 0, ((void*)0), 0, VAR_12,
        VAR_13, ((void*)0));
  return VAR_1;
 }

 FUNC_6(&VAR_5->sched_lock);

 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  struct ice_sched_node *VAR_19;

  VAR_19 = FUNC_5(VAR_5->root, VAR_11[VAR_18]);
  if (!VAR_19)
   continue;
  VAR_17 = FUNC_4(VAR_5->hw, VAR_6, VAR_7, VAR_9[VAR_18]);
  if (!VAR_17) {
   FUNC_2(VAR_5->hw, VAR_0, "invalid queue handle%d\n",
      VAR_9[VAR_18]);
   continue;
  }
  if (VAR_17->q_handle != VAR_9[VAR_18]) {
   FUNC_2(VAR_5->hw, VAR_0, "Err:handles %d %d\n",
      VAR_17->q_handle, VAR_9[VAR_18]);
   continue;
  }
  VAR_16.parent_teid = VAR_19->info.parent_teid;
  VAR_16.num_qs = 1;
  VAR_16.q_id[0] = FUNC_0(VAR_10[VAR_18]);
  VAR_15 = FUNC_1(VAR_5->hw, 1, &VAR_16,
         sizeof(VAR_16), VAR_12, VAR_13,
         VAR_14);

  if (VAR_15)
   break;
  FUNC_3(VAR_5, VAR_19);
  VAR_17->q_handle = VAR_3;
 }
 FUNC_7(&VAR_5->sched_lock);
 return VAR_15;
}
