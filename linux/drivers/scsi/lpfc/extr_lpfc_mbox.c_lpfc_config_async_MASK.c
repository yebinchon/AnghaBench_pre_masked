
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {int dummy; } ;
struct TYPE_9__ {int ring; } ;
struct TYPE_10__ {TYPE_2__ varCfgAsyncEvent; } ;
struct TYPE_11__ {int mbxOwner; TYPE_3__ un; int mbxCommand; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_2, LPFC_MBOXQ_t * VAR_3,
  uint32_t VAR_4)
{
 MAILBOX_t *VAR_5;

 VAR_5 = &VAR_3->u.mb;
 FUNC_0(VAR_3, 0, sizeof (LPFC_MBOXQ_t));
 VAR_5->mbxCommand = VAR_0;
 VAR_5->un.varCfgAsyncEvent.ring = VAR_4;
 VAR_5->mbxOwner = VAR_1;
 return;
}
