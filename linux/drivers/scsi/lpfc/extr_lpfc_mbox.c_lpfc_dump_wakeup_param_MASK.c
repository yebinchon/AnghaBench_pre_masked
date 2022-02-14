
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lpfc_hba {scalar_t__ sli_rev; } ;
struct TYPE_9__ {int cv; scalar_t__ resp_offset; scalar_t__ co; int word_cnt; int region_id; scalar_t__ entry_index; int type; } ;
struct TYPE_10__ {TYPE_2__ varDmp; } ;
struct TYPE_11__ {TYPE_3__ un; int mbxOwner; int mbxCommand; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_12__ {void* ctx_buf; TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;

void
FUNC_1(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7)
{
 MAILBOX_t *VAR_8;
 void *VAR_9;

 VAR_8 = &VAR_7->u.mb;

 VAR_9 = VAR_7->ctx_buf;


 FUNC_0(VAR_7, 0, sizeof(LPFC_MBOXQ_t));
 VAR_8->mbxCommand = VAR_2;
 VAR_8->mbxOwner = VAR_3;
 VAR_8->un.varDmp.cv = 1;
 VAR_8->un.varDmp.type = VAR_0;
 if (VAR_6->sli_rev < VAR_1)
  VAR_8->un.varDmp.entry_index = 0;
 VAR_8->un.varDmp.region_id = VAR_4;
 VAR_8->un.varDmp.word_cnt = VAR_5;
 VAR_8->un.varDmp.co = 0;
 VAR_8->un.varDmp.resp_offset = 0;
 VAR_7->ctx_buf = VAR_9;
 return;
}
