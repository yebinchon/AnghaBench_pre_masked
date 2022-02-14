
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_rqe {void* address_hi; void* address_lo; } ;
struct lpfc_queue {int dummy; } ;
struct TYPE_5__ {struct lpfc_queue* dat_rq; struct lpfc_queue* hdr_rq; } ;
struct lpfc_hba {TYPE_4__* hbqs; int hbalock; TYPE_1__ sli4_hba; } ;
struct TYPE_7__ {int list; int phys; } ;
struct TYPE_6__ {int phys; } ;
struct hbq_dmabuf {int tag; TYPE_3__ dbuf; TYPE_2__ hbuf; } ;
struct TYPE_8__ {int hbq_buffer_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_queue*,struct lpfc_queue*,struct lpfc_rqe*,struct lpfc_rqe*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_1, uint32_t VAR_2,
       struct hbq_dmabuf *VAR_3)
{
 int VAR_4;
 struct lpfc_rqe VAR_5;
 struct lpfc_rqe VAR_6;
 struct lpfc_queue *VAR_7;
 struct lpfc_queue *VAR_8;

 if (VAR_2 != VAR_0)
  return 1;
 VAR_7 = VAR_1->sli4_hba.hdr_rq;
 VAR_8 = VAR_1->sli4_hba.dat_rq;

 FUNC_1(&VAR_1->hbalock);
 VAR_5.address_lo = FUNC_4(VAR_3->hbuf.phys);
 VAR_5.address_hi = FUNC_3(VAR_3->hbuf.phys);
 VAR_6.address_lo = FUNC_4(VAR_3->dbuf.phys);
 VAR_6.address_hi = FUNC_3(VAR_3->dbuf.phys);
 VAR_4 = FUNC_2(VAR_7, VAR_8, &VAR_5, &VAR_6);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->tag = (VAR_4 | (VAR_2 << 16));
 FUNC_0(&VAR_3->dbuf.list, &VAR_1->hbqs[VAR_2].hbq_buffer_list);
 return 0;
}
