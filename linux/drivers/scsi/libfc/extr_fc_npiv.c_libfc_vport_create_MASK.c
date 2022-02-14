
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {struct fc_lport* dd_data; } ;
struct fc_lport {int lp_mutex; int vports; int list; struct fc_vport* vport; } ;
struct Scsi_Host {int hostt; } ;


 struct fc_lport* FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fc_lport* FUNC_4 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_5 (struct fc_vport*) ;

struct fc_lport *FUNC_6(struct fc_vport *VAR_0, int VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_5(VAR_0);
 struct fc_lport *VAR_3 = FUNC_4(VAR_2);
 struct fc_lport *VAR_4;

 VAR_4 = FUNC_0(VAR_2->hostt, VAR_1);
 if (!VAR_4)
  return VAR_4;

 VAR_4->vport = VAR_0;
 VAR_0->dd_data = VAR_4;

 FUNC_2(&VAR_3->lp_mutex);
 FUNC_1(&VAR_4->list, &VAR_3->vports);
 FUNC_3(&VAR_3->lp_mutex);

 return VAR_4;
}
