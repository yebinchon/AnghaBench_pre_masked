
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_alua_tg_pt_gp {int tg_pt_gp_alua_access_type; int tg_pt_gp_alua_supported_states; int tg_pt_gp_valid_id; int tg_pt_gp_list; scalar_t__ tg_pt_gp_id; int tg_pt_gp_implicit_trans_secs; int tg_pt_gp_trans_delay_msecs; int tg_pt_gp_nonop_delay_msecs; int tg_pt_gp_alua_access_state; struct se_device* tg_pt_gp_dev; int tg_pt_gp_ref_cnt; int tg_pt_gp_lock; int tg_pt_gp_transition_mutex; int tg_pt_gp_lun_list; } ;
struct TYPE_2__ {int tg_pt_gps_lock; int tg_pt_gps_list; int alua_tg_pt_gps_count; int alua_tg_pt_gps_counter; } ;
struct se_device {TYPE_1__ t10_alua; } ;


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
 int FUNC_0 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int ) ;
 struct t10_alua_tg_pt_gp* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_13 ;

struct t10_alua_tg_pt_gp *FUNC_9(struct se_device *VAR_14,
  const char *VAR_15, int VAR_16)
{
 struct t10_alua_tg_pt_gp *VAR_17;

 VAR_17 = FUNC_2(VAR_13, VAR_10);
 if (!VAR_17) {
  FUNC_5("Unable to allocate struct t10_alua_tg_pt_gp\n");
  return ((void*)0);
 }
 FUNC_0(&VAR_17->tg_pt_gp_list);
 FUNC_0(&VAR_17->tg_pt_gp_lun_list);
 FUNC_4(&VAR_17->tg_pt_gp_transition_mutex);
 FUNC_7(&VAR_17->tg_pt_gp_lock);
 FUNC_1(&VAR_17->tg_pt_gp_ref_cnt, 0);
 VAR_17->tg_pt_gp_dev = VAR_14;
 VAR_17->tg_pt_gp_alua_access_state =
   VAR_0;



 VAR_17->tg_pt_gp_alua_access_type =
   VAR_11 | VAR_12;



 VAR_17->tg_pt_gp_nonop_delay_msecs = VAR_4;
 VAR_17->tg_pt_gp_trans_delay_msecs = VAR_5;
 VAR_17->tg_pt_gp_implicit_trans_secs = VAR_3;




 VAR_17->tg_pt_gp_alua_supported_states =
     VAR_8 | VAR_6 |
     VAR_9 | VAR_7 | VAR_1 | VAR_2;

 if (VAR_16) {
  FUNC_6(&VAR_14->t10_alua.tg_pt_gps_lock);
  VAR_17->tg_pt_gp_id =
    VAR_14->t10_alua.alua_tg_pt_gps_counter++;
  VAR_17->tg_pt_gp_valid_id = 1;
  VAR_14->t10_alua.alua_tg_pt_gps_count++;
  FUNC_3(&VAR_17->tg_pt_gp_list,
         &VAR_14->t10_alua.tg_pt_gps_list);
  FUNC_8(&VAR_14->t10_alua.tg_pt_gps_lock);
 }

 return VAR_17;
}
