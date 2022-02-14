
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int fc_flag; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_fc4_type; int nlp_state; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_vport *VAR_5, struct lpfc_nodelist *VAR_6,
      void *VAR_7, uint32_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_1(VAR_5);




 if (VAR_5->fc_flag & VAR_0)
  return VAR_6->nlp_state;

 FUNC_0(VAR_5, VAR_6);
 FUNC_2(VAR_9->host_lock);
 VAR_6->nlp_flag &= ~(VAR_3 | VAR_4);
 VAR_6->nlp_fc4_type &= ~(VAR_1 | VAR_2);
 FUNC_3(VAR_9->host_lock);
 return VAR_6->nlp_state;
}
