
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_sli_ring {int missbufcnt; int ringno; } ;
struct TYPE_9__ {TYPE_3__* cont64; } ;
struct TYPE_10__ {int ulpBdeCount; int ulpLe; int ulpCommand; TYPE_4__ un; } ;
struct lpfc_iocbq {TYPE_5__ iocb; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; void* virt; int list; } ;
struct TYPE_6__ {void* bdeSize; } ;
struct TYPE_7__ {TYPE_1__ f; } ;
struct TYPE_8__ {TYPE_2__ tus; void* addrLow; void* addrHigh; } ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 void* FUNC_3 (struct lpfc_hba*,int ,int *) ;
 int FUNC_4 (struct lpfc_hba*,void*,int ) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_hba*) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_dmabuf*) ;
 void* FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;

int
FUNC_11(struct lpfc_hba *VAR_5, struct lpfc_sli_ring *VAR_6, int VAR_7)
{
 IOCB_t *VAR_8;
 struct lpfc_iocbq *VAR_9;
 struct lpfc_dmabuf *VAR_10, *VAR_11;

 VAR_7 += VAR_6->missbufcnt;


 while (VAR_7 > 0) {

  VAR_9 = FUNC_5(VAR_5);
  if (VAR_9 == ((void*)0)) {
   VAR_6->missbufcnt = VAR_7;
   return VAR_7;
  }
  VAR_8 = &VAR_9->iocb;



  VAR_10 = FUNC_2(sizeof (struct lpfc_dmabuf), VAR_2);
  if (VAR_10)
      VAR_10->virt = FUNC_3(VAR_5, VAR_4, &VAR_10->phys);
  if (!VAR_10 || !VAR_10->virt) {
   FUNC_1(VAR_10);
   FUNC_7(VAR_5, VAR_9);
   VAR_6->missbufcnt = VAR_7;
   return VAR_7;
  }

  FUNC_0(&VAR_10->list);

  if (VAR_7 > 1) {
   VAR_11 = FUNC_2(sizeof (struct lpfc_dmabuf), VAR_2);
   if (VAR_11)
    VAR_11->virt = FUNC_3(VAR_5, VAR_4,
           &VAR_11->phys);
   if (!VAR_11 || !VAR_11->virt) {
    FUNC_1(VAR_11);
    FUNC_4(VAR_5, VAR_10->virt, VAR_10->phys);
    FUNC_1(VAR_10);
    FUNC_7(VAR_5, VAR_9);
    VAR_6->missbufcnt = VAR_7;
    return VAR_7;
   }

   FUNC_0(&VAR_11->list);
  } else {
   VAR_11 = ((void*)0);
  }

  VAR_8->un.cont64[0].addrHigh = FUNC_9(VAR_10->phys);
  VAR_8->un.cont64[0].addrLow = FUNC_10(VAR_10->phys);
  VAR_8->un.cont64[0].tus.f.bdeSize = VAR_1;
  VAR_8->ulpBdeCount = 1;
  VAR_7--;
  if (VAR_11) {
   VAR_8->un.cont64[1].addrHigh = FUNC_9(VAR_11->phys);
   VAR_8->un.cont64[1].addrLow = FUNC_10(VAR_11->phys);
   VAR_8->un.cont64[1].tus.f.bdeSize = VAR_1;
   VAR_7--;
   VAR_8->ulpBdeCount = 2;
  }

  VAR_8->ulpCommand = VAR_0;
  VAR_8->ulpLe = 1;

  if (FUNC_6(VAR_5, VAR_6->ringno, VAR_9, 0) ==
      VAR_3) {
   FUNC_4(VAR_5, VAR_10->virt, VAR_10->phys);
   FUNC_1(VAR_10);
   VAR_7++;
   if (VAR_11) {
    FUNC_4(VAR_5, VAR_11->virt, VAR_11->phys);
    FUNC_1(VAR_11);
    VAR_7++;
   }
   FUNC_7(VAR_5, VAR_9);
   VAR_6->missbufcnt = VAR_7;
   return VAR_7;
  }
  FUNC_8(VAR_5, VAR_6, VAR_10);
  if (VAR_11)
   FUNC_8(VAR_5, VAR_6, VAR_11);
 }
 VAR_6->missbufcnt = 0;
 return 0;
}
