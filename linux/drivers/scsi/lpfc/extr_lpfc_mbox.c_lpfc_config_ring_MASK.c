
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct lpfc_sli_ring {int num_mask; TYPE_2__* prt; } ;
struct lpfc_sli {struct lpfc_sli_ring* sli3_ring; } ;
struct lpfc_hba {struct lpfc_sli sli; } ;
struct TYPE_13__ {int ring; int recvNotify; int numMask; TYPE_3__* rrRegs; scalar_t__ profile; scalar_t__ maxRespXchg; scalar_t__ maxOrigXchg; } ;
struct TYPE_14__ {TYPE_4__ varCfgRing; } ;
struct TYPE_15__ {TYPE_5__ un; int mbxOwner; int mbxCommand; } ;
struct TYPE_10__ {TYPE_6__ mb; } ;
struct TYPE_16__ {TYPE_1__ u; } ;
struct TYPE_12__ {scalar_t__ rval; int rmask; int tmask; int tval; } ;
struct TYPE_11__ {scalar_t__ rctl; int type; scalar_t__ profile; } ;
typedef TYPE_6__ MAILBOX_t ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_3, int VAR_4, LPFC_MBOXQ_t * VAR_5)
{
 int VAR_6;
 MAILBOX_t *VAR_7 = &VAR_5->u.mb;
 struct lpfc_sli *VAR_8;
 struct lpfc_sli_ring *VAR_9;

 FUNC_0(VAR_5, 0, sizeof (LPFC_MBOXQ_t));

 VAR_7->un.varCfgRing.ring = VAR_4;
 VAR_7->un.varCfgRing.maxOrigXchg = 0;
 VAR_7->un.varCfgRing.maxRespXchg = 0;
 VAR_7->un.varCfgRing.recvNotify = 1;

 VAR_8 = &VAR_3->sli;
 VAR_9 = &VAR_8->sli3_ring[VAR_4];
 VAR_7->un.varCfgRing.numMask = VAR_9->num_mask;
 VAR_7->mbxCommand = VAR_1;
 VAR_7->mbxOwner = VAR_2;


 if (VAR_9->prt[0].profile) {
  VAR_7->un.varCfgRing.profile = VAR_9->prt[0].profile;
  return;
 }


 for (VAR_6 = 0; VAR_6 < VAR_9->num_mask; VAR_6++) {
  VAR_7->un.varCfgRing.rrRegs[VAR_6].rval = VAR_9->prt[VAR_6].rctl;
  if (VAR_7->un.varCfgRing.rrRegs[VAR_6].rval != VAR_0)
   VAR_7->un.varCfgRing.rrRegs[VAR_6].rmask = 0xff;
  else
   VAR_7->un.varCfgRing.rrRegs[VAR_6].rmask = 0xfe;
  VAR_7->un.varCfgRing.rrRegs[VAR_6].tval = VAR_9->prt[VAR_6].type;
  VAR_7->un.varCfgRing.rrRegs[VAR_6].tmask = 0xff;
 }

 return;
}
