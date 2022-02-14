
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int list; } ;
struct TYPE_12__ {int bdeSize; } ;
struct TYPE_13__ {TYPE_2__ f; } ;
struct TYPE_14__ {int addrLow; int addrHigh; TYPE_3__ tus; } ;
struct TYPE_15__ {TYPE_4__ lilpBde64; } ;
struct TYPE_16__ {TYPE_5__ varReadTop; } ;
struct TYPE_17__ {int mbxOwner; TYPE_6__ un; int mbxCommand; } ;
struct TYPE_11__ {TYPE_7__ mb; } ;
struct TYPE_18__ {int * ctx_buf; TYPE_1__ u; } ;
typedef TYPE_7__ MAILBOX_t ;
typedef TYPE_8__ LPFC_MBOXQ_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_8__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct lpfc_hba *VAR_3, LPFC_MBOXQ_t *VAR_4,
     struct lpfc_dmabuf *VAR_5)
{
 MAILBOX_t *VAR_6;

 VAR_6 = &VAR_4->u.mb;
 FUNC_1(VAR_4, 0, sizeof (LPFC_MBOXQ_t));

 FUNC_0(&VAR_5->list);
 VAR_6->mbxCommand = VAR_1;
 VAR_6->un.varReadTop.lilpBde64.tus.f.bdeSize = VAR_0;
 VAR_6->un.varReadTop.lilpBde64.addrHigh = FUNC_2(VAR_5->phys);
 VAR_6->un.varReadTop.lilpBde64.addrLow = FUNC_3(VAR_5->phys);




 VAR_4->ctx_buf = (uint8_t *)VAR_5;
 VAR_6->mbxOwner = VAR_2;
 return (0);
}
