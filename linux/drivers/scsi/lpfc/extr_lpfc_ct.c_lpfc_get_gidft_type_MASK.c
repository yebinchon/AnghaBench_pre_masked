
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_3__ {scalar_t__ Fc4Type; } ;
struct TYPE_4__ {TYPE_1__ gid; } ;
struct lpfc_sli_ct_request {TYPE_2__ un; } ;
struct lpfc_iocbq {struct lpfc_dmabuf* context1; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct lpfc_vport *VAR_2, struct lpfc_iocbq *VAR_3)
{
 struct lpfc_sli_ct_request *VAR_4;
 struct lpfc_dmabuf *VAR_5;
 uint32_t VAR_6;

 VAR_5 = VAR_3->context1;
 if (VAR_5 == ((void*)0))
  return 0;
 VAR_4 = (struct lpfc_sli_ct_request *)VAR_5->virt;
 VAR_6 = (uint32_t)VAR_4->un.gid.Fc4Type;
 if ((VAR_6 != VAR_0) && (VAR_6 != VAR_1))
  return 0;
 return VAR_6;
}
