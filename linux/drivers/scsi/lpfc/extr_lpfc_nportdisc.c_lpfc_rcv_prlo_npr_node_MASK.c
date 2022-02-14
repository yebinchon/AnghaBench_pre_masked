
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_last_elscmd; int nlp_delayfunc; } ;
struct lpfc_iocbq {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static uint32_t
FUNC_6(struct lpfc_vport *VAR_6, struct lpfc_nodelist *VAR_7,
         void *VAR_8, uint32_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_1(VAR_6);
 struct lpfc_iocbq *VAR_11 = (struct lpfc_iocbq *) VAR_8;

 FUNC_4(VAR_10->host_lock);
 VAR_7->nlp_flag |= VAR_3;
 FUNC_5(VAR_10->host_lock);

 FUNC_0(VAR_6, VAR_0, VAR_11, VAR_7, ((void*)0));

 if ((VAR_7->nlp_flag & VAR_2) == 0) {
  FUNC_2(&VAR_7->nlp_delayfunc,
     VAR_5 + FUNC_3(1000 * 1));
  FUNC_4(VAR_10->host_lock);
  VAR_7->nlp_flag |= VAR_2;
  VAR_7->nlp_flag &= ~VAR_4;
  FUNC_5(VAR_10->host_lock);
  VAR_7->nlp_last_elscmd = VAR_1;
 } else {
  FUNC_4(VAR_10->host_lock);
  VAR_7->nlp_flag &= ~VAR_4;
  FUNC_5(VAR_10->host_lock);
 }
 return VAR_7->nlp_state;
}
