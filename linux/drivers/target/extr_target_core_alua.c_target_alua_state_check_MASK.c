
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t10_alua_tg_pt_gp {int tg_pt_gp_alua_access_state; int tg_pt_gp_nonop_delay_msecs; } ;
struct se_lun {int lun_tg_pt_gp_lock; struct t10_alua_tg_pt_gp* lun_tg_pt_gp; int lun_tg_pt_secondary_offline; } ;
struct se_device {TYPE_2__* transport; TYPE_1__* se_hba; } ;
struct se_cmd {unsigned char* t_task_cdb; struct se_lun* se_lun; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_4__ {int transport_flags; } ;
struct TYPE_3__ {int hba_flags; } ;



 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct se_cmd*,struct t10_alua_tg_pt_gp*) ;
 int FUNC_2 (struct se_cmd*,unsigned char*,int) ;
 int FUNC_3 (struct se_cmd*,unsigned char*) ;
 int FUNC_4 (struct se_cmd*,unsigned char*) ;
 int FUNC_5 (struct se_cmd*,unsigned char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct se_cmd*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

sense_reason_t
FUNC_11(struct se_cmd *VAR_6)
{
 struct se_device *VAR_7 = VAR_6->se_dev;
 unsigned char *VAR_8 = VAR_6->t_task_cdb;
 struct se_lun *VAR_9 = VAR_6->se_lun;
 struct t10_alua_tg_pt_gp *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7->se_hba->hba_flags & VAR_2)
  return 0;
 if (VAR_7->transport->transport_flags & VAR_5)
  return 0;





 if (FUNC_0(&VAR_9->lun_tg_pt_secondary_offline)) {
  FUNC_6("ALUA: Got secondary offline status for local"
    " target port\n");
  FUNC_8(VAR_6, VAR_1);
  return VAR_3;
 }

 if (!VAR_9->lun_tg_pt_gp)
  return 0;

 FUNC_9(&VAR_9->lun_tg_pt_gp_lock);
 VAR_10 = VAR_9->lun_tg_pt_gp;
 VAR_11 = VAR_10->tg_pt_gp_alua_access_state;
 VAR_12 = VAR_10->tg_pt_gp_nonop_delay_msecs;


 FUNC_10(&VAR_9->lun_tg_pt_gp_lock);






 if (VAR_11 == VAR_0)
  return 0;

 switch (VAR_11) {
 case 133:
  FUNC_2(VAR_6, VAR_8, VAR_12);
  break;
 case 130:
  if (FUNC_3(VAR_6, VAR_8))
   return VAR_3;
  break;
 case 128:
  if (FUNC_5(VAR_6, VAR_8))
   return VAR_3;
  break;
 case 129:
  if (FUNC_4(VAR_6, VAR_8))
   return VAR_3;
  break;
 case 132:
  if (FUNC_1(VAR_6, VAR_10))
   return VAR_3;
  break;




 case 131:
 default:
  FUNC_7("Unknown ALUA access state: 0x%02x\n",
    VAR_11);
  return VAR_4;
 }

 return 0;
}
