
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; scalar_t__ num_disc_nodes; int port_state; int fc_adisc_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,scalar_t__,int ,int,int ) ;
 int FUNC_3 (struct lpfc_vport*) ;

void
FUNC_4(struct lpfc_vport *VAR_3)
{
 if (VAR_3->num_disc_nodes)
  VAR_3->num_disc_nodes--;

 FUNC_2(VAR_3, VAR_1, VAR_2,
    "0210 Continue discovery with %d ADISCs to go "
    "Data: x%x x%x x%x\n",
    VAR_3->num_disc_nodes, VAR_3->fc_adisc_cnt,
    VAR_3->fc_flag, VAR_3->port_state);

 if (VAR_3->fc_flag & VAR_0) {
  FUNC_3(VAR_3);

  FUNC_1(VAR_3);
 }
 if (!VAR_3->num_disc_nodes)
  FUNC_0(VAR_3);
 return;
}
