
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (int ,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4,
     void *VAR_5, uint32_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_2(VAR_3);

 if (VAR_4->nlp_flag & VAR_1) {
  FUNC_3(VAR_7->host_lock);
  VAR_4->nlp_flag |= VAR_0;
  FUNC_4(VAR_7->host_lock);
  return VAR_4->nlp_state;
 } else {

  FUNC_1(VAR_3->phba, VAR_4);

  FUNC_0(VAR_3, VAR_4);
  return VAR_2;
 }
}
