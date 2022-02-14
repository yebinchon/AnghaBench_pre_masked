
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {int dummy; } ;
struct fc_lport {int lp_mutex; struct fc_vport* vport; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,struct fc_lport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct fc_lport* FUNC_4 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_5 (struct fc_vport*) ;

void FUNC_6(struct fc_lport *VAR_1)
{
 struct fc_vport *VAR_2 = VAR_1->vport;
 struct Scsi_Host *VAR_3 = FUNC_5(VAR_2);
 struct fc_lport *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(&VAR_4->lp_mutex);
 FUNC_2(&VAR_1->lp_mutex, VAR_0);
 FUNC_0(VAR_4, VAR_1);
 FUNC_3(&VAR_1->lp_mutex);
 FUNC_3(&VAR_4->lp_mutex);
}
