
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct lpfc_sli_ring {int txcmplq_cnt; int ring_lock; } ;
struct TYPE_4__ {size_t ulpIoTag; } ;
struct lpfc_iocbq {int iocb_flag; TYPE_2__ iocb; int list; } ;
struct TYPE_3__ {size_t last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_1__ sli; int hbalock; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,size_t,size_t,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct lpfc_iocbq *
FUNC_4(struct lpfc_hba *VAR_4,
        struct lpfc_sli_ring *VAR_5,
        struct lpfc_iocbq *VAR_6)
{
 struct lpfc_iocbq *VAR_7 = ((void*)0);
 uint16_t VAR_8;
 spinlock_t *VAR_9 = ((void*)0);
 unsigned long VAR_10 = 0;

 if (VAR_4->sli_rev == VAR_3)
  VAR_9 = &VAR_5->ring_lock;
 else
  VAR_9 = &VAR_4->hbalock;

 FUNC_2(VAR_9, VAR_10);
 VAR_8 = VAR_6->iocb.ulpIoTag;

 if (VAR_8 != 0 && VAR_8 <= VAR_4->sli.last_iotag) {
  VAR_7 = VAR_4->sli.iocbq_lookup[VAR_8];
  if (VAR_7->iocb_flag & VAR_2) {

   FUNC_0(&VAR_7->list);
   VAR_7->iocb_flag &= ~VAR_2;
   VAR_5->txcmplq_cnt--;
   FUNC_3(VAR_9, VAR_10);
   return VAR_7;
  }
 }

 FUNC_3(VAR_9, VAR_10);
 FUNC_1(VAR_4, VAR_0, VAR_1,
   "0317 iotag x%x is out of "
   "range: max iotag x%x wd0 x%x\n",
   VAR_8, VAR_4->sli.last_iotag,
   *(((uint32_t *) &VAR_6->iocb) + 7));
 return ((void*)0);
}
