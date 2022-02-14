
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {scalar_t__ se_node_acl; scalar_t__ sess_bin_isid; } ;
struct se_device {int dev_reservation_flags; scalar_t__ dev_res_bin_isid; TYPE_1__* reservation_holder; } ;
struct se_cmd {int* t_task_cdb; struct se_session* se_sess; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {scalar_t__ se_node_acl; } ;


 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static sense_reason_t
FUNC_0(struct se_cmd *VAR_2)
{
 struct se_device *VAR_3 = VAR_2->se_dev;
 struct se_session *VAR_4 = VAR_2->se_sess;

 switch (VAR_2->t_task_cdb[0]) {
 case 130:
 case 129:
 case 128:
  return 0;
 default:
  break;
 }

 if (!VAR_3->reservation_holder || !VAR_4)
  return 0;

 if (VAR_3->reservation_holder->se_node_acl != VAR_4->se_node_acl)
  return VAR_1;

 if (VAR_3->dev_reservation_flags & VAR_0) {
  if (VAR_3->dev_res_bin_isid != VAR_4->sess_bin_isid)
   return VAR_1;
 }

 return 0;
}
