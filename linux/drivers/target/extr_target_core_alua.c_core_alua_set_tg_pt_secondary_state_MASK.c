
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cg_item; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_trans_delay_msecs; int tg_pt_gp_id; TYPE_1__ tg_pt_gp_group; } ;
struct se_lun {scalar_t__ lun_tg_pt_secondary_write_md; int lun_tg_pt_gp_lock; int lun_tg_pt_secondary_stat; int lun_tg_pt_secondary_offline; struct t10_alua_tg_pt_gp* lun_tg_pt_gp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct se_lun*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int ,int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
 struct se_lun *VAR_3,
 int VAR_4,
 int VAR_5)
{
 struct t10_alua_tg_pt_gp *VAR_6;
 int VAR_7;

 FUNC_6(&VAR_3->lun_tg_pt_gp_lock);
 VAR_6 = VAR_3->lun_tg_pt_gp;
 if (!VAR_6) {
  FUNC_7(&VAR_3->lun_tg_pt_gp_lock);
  FUNC_5("Unable to complete secondary state"
    " transition\n");
  return -VAR_2;
 }
 VAR_7 = VAR_6->tg_pt_gp_trans_delay_msecs;




 if (VAR_5)
  FUNC_0(&VAR_3->lun_tg_pt_secondary_offline, 1);
 else
  FUNC_0(&VAR_3->lun_tg_pt_secondary_offline, 0);

 VAR_3->lun_tg_pt_secondary_stat = (VAR_4) ?
   VAR_0 :
   VAR_1;

 FUNC_4("Successful %s ALUA transition TG PT Group: %s ID: %hu"
  " to secondary access state: %s\n", (VAR_4) ? "explicit" :
  "implicit", FUNC_1(&VAR_6->tg_pt_gp_group.cg_item),
  VAR_6->tg_pt_gp_id, (VAR_5) ? "OFFLINE" : "ONLINE");

 FUNC_7(&VAR_3->lun_tg_pt_gp_lock);




 if (VAR_7 != 0)
  FUNC_3(VAR_7);




 if (VAR_3->lun_tg_pt_secondary_write_md)
  FUNC_2(VAR_3);

 return 0;
}
