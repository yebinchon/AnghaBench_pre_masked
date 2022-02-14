
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_8__ {scalar_t__ numCiocb; scalar_t__ numRiocb; int * rspringaddr; int * cmdringaddr; int sizeRiocb; int sizeCiocb; } ;
struct TYPE_9__ {TYPE_3__ sli3; } ;
struct lpfc_sli_ring {TYPE_4__ sli; } ;
struct lpfc_sli {int num_rings; struct lpfc_sli_ring* sli3_ring; } ;
struct TYPE_6__ {scalar_t__ phys; scalar_t__ virt; } ;
struct lpfc_hba {int sli_rev; TYPE_1__ slim2p; int * IOCBs; TYPE_5__* pcb; struct lpfc_sli sli; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_10__ {int maxRing; TYPE_2__* rdsc; } ;
struct TYPE_7__ {scalar_t__ cmdEntries; scalar_t__ rspEntries; void* rspAddrLow; void* rspAddrHigh; void* cmdAddrLow; void* cmdAddrHigh; } ;
typedef TYPE_5__ PCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba * VAR_4)
{
 struct lpfc_sli *VAR_5 = &VAR_4->sli;
 struct lpfc_sli_ring *VAR_6;
 PCB_t *VAR_7 = VAR_4->pcb;
 dma_addr_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10 = 0;
 int VAR_11;

 VAR_7->maxRing = (VAR_5->num_rings - 1);

 for (VAR_11 = 0; VAR_11 < VAR_5->num_rings; VAR_11++) {
  VAR_6 = &VAR_5->sli3_ring[VAR_11];

  VAR_6->sli.sli3.sizeCiocb =
   VAR_4->sli_rev == 3 ? VAR_2 :
       VAR_0;
  VAR_6->sli.sli3.sizeRiocb =
   VAR_4->sli_rev == 3 ? VAR_3 :
       VAR_1;


  if ((VAR_6->sli.sli3.numCiocb == 0) ||
   (VAR_6->sli.sli3.numRiocb == 0)) {
   VAR_7->rdsc[VAR_11].cmdEntries = 0;
   VAR_7->rdsc[VAR_11].rspEntries = 0;
   VAR_7->rdsc[VAR_11].cmdAddrHigh = 0;
   VAR_7->rdsc[VAR_11].rspAddrHigh = 0;
   VAR_7->rdsc[VAR_11].cmdAddrLow = 0;
   VAR_7->rdsc[VAR_11].rspAddrLow = 0;
   VAR_6->sli.sli3.cmdringaddr = ((void*)0);
   VAR_6->sli.sli3.rspringaddr = ((void*)0);
   continue;
  }

  VAR_6->sli.sli3.cmdringaddr = (void *)&VAR_4->IOCBs[VAR_10];
  VAR_7->rdsc[VAR_11].cmdEntries = VAR_6->sli.sli3.numCiocb;

  VAR_9 = (uint8_t *) &VAR_4->IOCBs[VAR_10] -
    (uint8_t *) VAR_4->slim2p.virt;
  VAR_8 = VAR_4->slim2p.phys + VAR_9;
  VAR_7->rdsc[VAR_11].cmdAddrHigh = FUNC_0(VAR_8);
  VAR_7->rdsc[VAR_11].cmdAddrLow = FUNC_1(VAR_8);
  VAR_10 += VAR_6->sli.sli3.numCiocb;


  VAR_6->sli.sli3.rspringaddr = (void *) &VAR_4->IOCBs[VAR_10];

  VAR_7->rdsc[VAR_11].rspEntries = VAR_6->sli.sli3.numRiocb;
  VAR_9 = (uint8_t *)&VAR_4->IOCBs[VAR_10] -
    (uint8_t *)VAR_4->slim2p.virt;
  VAR_8 = VAR_4->slim2p.phys + VAR_9;
  VAR_7->rdsc[VAR_11].rspAddrHigh = FUNC_0(VAR_8);
  VAR_7->rdsc[VAR_11].rspAddrLow = FUNC_1(VAR_8);
  VAR_10 += VAR_6->sli.sli3.numRiocb;
 }
}
