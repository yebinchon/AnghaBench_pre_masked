
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 struct lpfc_nodelist* FUNC_0 (struct lpfc_vport*,int ) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

struct lpfc_nodelist *
FUNC_4(struct lpfc_vport *VAR_0, uint16_t VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_0);
 struct lpfc_nodelist *VAR_3;
 unsigned long VAR_4;

 FUNC_2(VAR_2->host_lock, VAR_4);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_2->host_lock, VAR_4);
 return VAR_3;
}
