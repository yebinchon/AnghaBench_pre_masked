
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_name {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 struct lpfc_nodelist* FUNC_0 (struct lpfc_vport*,int ,struct lpfc_name*) ;
 int VAR_0 ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

struct lpfc_nodelist *
FUNC_4(struct lpfc_vport *VAR_1, struct lpfc_name *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1);
 struct lpfc_nodelist *VAR_4;

 FUNC_2(VAR_3->host_lock);
 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2);
 FUNC_3(VAR_3->host_lock);
 return VAR_4;
}
