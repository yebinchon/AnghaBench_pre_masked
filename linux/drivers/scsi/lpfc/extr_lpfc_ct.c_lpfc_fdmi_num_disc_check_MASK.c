
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct lpfc_vport {int fc_flag; int fdmi_port_mask; scalar_t__ fdmi_num_disc; scalar_t__ port_type; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ,int) ;
 scalar_t__ FUNC_2 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 int FUNC_4 (struct lpfc_hba*) ;

void
FUNC_5(struct lpfc_vport *VAR_6)
{
 struct lpfc_hba *VAR_7 = VAR_6->phba;
 struct lpfc_nodelist *VAR_8;
 uint16_t VAR_9;

 if (!FUNC_4(VAR_7))
  return;


 if (!(VAR_6->fc_flag & VAR_0))
  return;

 if (!(VAR_6->fdmi_port_mask & VAR_2))
  return;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 == VAR_6->fdmi_num_disc)
  return;

 VAR_8 = FUNC_3(VAR_6, VAR_1);
 if (!VAR_8 || !FUNC_0(VAR_8))
  return;

 if (VAR_6->port_type == VAR_3) {
  FUNC_1(VAR_6, VAR_8, VAR_4,
         VAR_2);
 } else {
  FUNC_1(VAR_6, VAR_8, VAR_5,
         VAR_2);
 }
}
