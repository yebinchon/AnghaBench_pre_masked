
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_state; int nlp_flag; } ;
struct TYPE_4__ {scalar_t__ ulpStatus; } ;
struct TYPE_3__ {struct lpfc_iocbq* rsp_iocb; } ;
struct lpfc_iocbq {TYPE_2__ iocb; TYPE_1__ context_un; } ;
struct Scsi_Host {int host_lock; } ;
typedef TYPE_2__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint32_t
FUNC_3(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3,
    void *VAR_4, uint32_t VAR_5)
{
 struct lpfc_iocbq *VAR_6, *VAR_7;
 IOCB_t *VAR_8;
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_2);

 VAR_6 = (struct lpfc_iocbq *) VAR_4;
 VAR_7 = VAR_6->context_un.rsp_iocb;

 VAR_8 = &VAR_7->iocb;
 if (VAR_8->ulpStatus) {
  FUNC_1(VAR_9->host_lock);
  VAR_3->nlp_flag |= VAR_0;
  FUNC_2(VAR_9->host_lock);
  return VAR_1;
 }
 return VAR_3->nlp_state;
}
