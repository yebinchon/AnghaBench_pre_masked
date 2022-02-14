
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numRiocb; int numCiocb; } ;
struct TYPE_5__ {TYPE_1__ sli3; } ;
struct lpfc_sli_ring {int iotag_max; int num_mask; TYPE_3__* prt; TYPE_2__ sli; } ;
struct lpfc_sli {struct lpfc_sli_ring* sli3_ring; } ;
struct lpfc_hba {int cfg_multi_ring_type; int cfg_multi_ring_rctl; struct lpfc_sli sli; } ;
struct TYPE_6__ {int * lpfc_sli_rcv_unsol_event; int type; int rctl; scalar_t__ profile; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_0( struct lpfc_hba *VAR_6)
{
 struct lpfc_sli *VAR_7;
 struct lpfc_sli_ring *VAR_8;

 VAR_7 = &VAR_6->sli;




 VAR_8 = &VAR_7->sli3_ring[VAR_1];
 VAR_8->sli.sli3.numCiocb -= VAR_2;
 VAR_8->sli.sli3.numRiocb -= VAR_4;
 VAR_8->sli.sli3.numCiocb -= VAR_3;
 VAR_8->sli.sli3.numRiocb -= VAR_5;


 VAR_8 = &VAR_7->sli3_ring[VAR_0];

 VAR_8->sli.sli3.numCiocb += VAR_2;
 VAR_8->sli.sli3.numRiocb += VAR_4;
 VAR_8->sli.sli3.numCiocb += VAR_3;
 VAR_8->sli.sli3.numRiocb += VAR_5;


 VAR_8->iotag_max = 4096;
 VAR_8->num_mask = 1;
 VAR_8->prt[0].profile = 0;
 VAR_8->prt[0].rctl = VAR_6->cfg_multi_ring_rctl;
 VAR_8->prt[0].type = VAR_6->cfg_multi_ring_type;
 VAR_8->prt[0].lpfc_sli_rcv_unsol_event = ((void*)0);
 return 0;
}
