
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ulp_bde64 {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_3__ {int CmdRsp; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct lpfc_sli_ct_request {TYPE_2__ CommandResponse; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;


 int VAR_0 ;
 struct lpfc_dmabuf* FUNC_0 (struct lpfc_hba*,int,struct ulp_bde64*,int ,int*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_dmabuf*,struct lpfc_dmabuf*,struct lpfc_dmabuf*,void (*) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*),struct lpfc_nodelist*,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct lpfc_vport *VAR_1, struct lpfc_dmabuf *VAR_2,
     struct lpfc_dmabuf *VAR_3, struct lpfc_nodelist *VAR_4,
     void (*VAR_5) (struct lpfc_hba *, struct lpfc_iocbq *,
     struct lpfc_iocbq *),
     uint32_t VAR_6, uint8_t VAR_7)
{
 struct lpfc_hba *VAR_8 = VAR_1->phba;
 struct ulp_bde64 *VAR_9 = (struct ulp_bde64 *) VAR_3->virt;
 struct lpfc_dmabuf *VAR_10;
 int VAR_11 = 0, VAR_12;
 int VAR_13 = ((struct lpfc_sli_ct_request *) VAR_2->virt)->
  CommandResponse.bits.CmdRsp;

 VAR_9++;


 VAR_10 = FUNC_0(VAR_8, VAR_13, VAR_9, VAR_6, &VAR_11);
 if (!VAR_10)
  return -VAR_0;





 VAR_11 += 1;
 VAR_12 = FUNC_2(VAR_1, VAR_3, VAR_2, VAR_10, VAR_5, VAR_4, 0,
         VAR_11, 0, VAR_7);
 if (VAR_12) {
  FUNC_1(VAR_8, VAR_10);
  return -VAR_0;
 }
 return 0;
}
