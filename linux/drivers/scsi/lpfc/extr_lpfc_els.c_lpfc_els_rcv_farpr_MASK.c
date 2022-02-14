
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_4__ {int remoteID; } ;
struct TYPE_5__ {TYPE_1__ elsreq64; } ;
struct TYPE_6__ {TYPE_2__ un; } ;
struct lpfc_iocbq {scalar_t__ context2; TYPE_3__ iocb; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_3, struct lpfc_iocbq *VAR_4,
     struct lpfc_nodelist *VAR_5)
{
 struct lpfc_dmabuf *VAR_6;
 uint32_t *VAR_7;
 IOCB_t *VAR_8;
 uint32_t VAR_9;

 VAR_8 = &VAR_4->iocb;
 VAR_9 = VAR_8->un.elsreq64.remoteID;
 VAR_6 = (struct lpfc_dmabuf *) VAR_4->context2;
 VAR_7 = (uint32_t *) VAR_6->virt;

 VAR_7++;

 FUNC_1(VAR_3, VAR_1, VAR_2,
    "0600 FARP-RSP received from DID x%x\n", VAR_9);

 FUNC_0(VAR_3, VAR_0, VAR_4, VAR_5, ((void*)0));

 return 0;
}
