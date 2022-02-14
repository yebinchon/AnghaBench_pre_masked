
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cg_item; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_alua_access_state; scalar_t__ tg_pt_gp_trans_delay_msecs; int tg_pt_gp_transition_mutex; int tg_pt_gp_id; TYPE_1__ tg_pt_gp_group; scalar_t__ tg_pt_gp_write_metadata; int tg_pt_gp_alua_access_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct t10_alua_tg_pt_gp*) ;
 int FUNC_3 (struct t10_alua_tg_pt_gp*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(
 struct t10_alua_tg_pt_gp *VAR_4,
 int VAR_5,
 int VAR_6)
{
 int VAR_7;

 FUNC_5(&VAR_4->tg_pt_gp_transition_mutex);

 if (VAR_4->tg_pt_gp_alua_access_state == VAR_5) {
  FUNC_6(&VAR_4->tg_pt_gp_transition_mutex);
  return 0;
 }

 if (VAR_6 && VAR_5 == VAR_0) {
  FUNC_6(&VAR_4->tg_pt_gp_transition_mutex);
  return -VAR_3;
 }





 VAR_7 = VAR_4->tg_pt_gp_alua_access_state;
 VAR_4->tg_pt_gp_alua_access_state = VAR_0;
 VAR_4->tg_pt_gp_alua_access_status = (VAR_6) ?
    VAR_1 :
    VAR_2;

 FUNC_2(VAR_4);

 if (VAR_5 == VAR_0) {
  FUNC_6(&VAR_4->tg_pt_gp_transition_mutex);
  return 0;
 }




 if (VAR_4->tg_pt_gp_trans_delay_msecs != 0)
  FUNC_4(VAR_4->tg_pt_gp_trans_delay_msecs);




 VAR_4->tg_pt_gp_alua_access_state = VAR_5;
 if (VAR_4->tg_pt_gp_write_metadata) {
  FUNC_3(VAR_4);
 }

 FUNC_7("Successful %s ALUA transition TG PT Group: %s ID: %hu"
  " from primary access state %s to %s\n", (VAR_6) ? "explicit" :
  "implicit", FUNC_0(&VAR_4->tg_pt_gp_group.cg_item),
  VAR_4->tg_pt_gp_id,
  FUNC_1(VAR_7),
  FUNC_1(VAR_5));

 FUNC_2(VAR_4);

 FUNC_6(&VAR_4->tg_pt_gp_transition_mutex);
 return 0;
}
