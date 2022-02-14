
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct lpfc_sli_ring {int txcmplq_cnt; int ring_lock; } ;
struct lpfc_iocbq {int iocb_flag; int list; } ;
struct TYPE_2__ {size_t last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_1__ sli; int hbalock; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,size_t,size_t,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct lpfc_iocbq *
FUNC_4(struct lpfc_hba *VAR_4,
        struct lpfc_sli_ring *VAR_5, uint16_t VAR_6)
{
 struct lpfc_iocbq *VAR_7 = ((void*)0);
 spinlock_t *VAR_8 = ((void*)0);
 unsigned long VAR_9 = 0;

 if (VAR_4->sli_rev == VAR_3)
  VAR_8 = &VAR_5->ring_lock;
 else
  VAR_8 = &VAR_4->hbalock;

 FUNC_2(VAR_8, VAR_9);
 if (VAR_6 != 0 && VAR_6 <= VAR_4->sli.last_iotag) {
  VAR_7 = VAR_4->sli.iocbq_lookup[VAR_6];
  if (VAR_7->iocb_flag & VAR_2) {

   FUNC_0(&VAR_7->list);
   VAR_7->iocb_flag &= ~VAR_2;
   VAR_5->txcmplq_cnt--;
   FUNC_3(VAR_8, VAR_9);
   return VAR_7;
  }
 }

 FUNC_3(VAR_8, VAR_9);
 FUNC_1(VAR_4, VAR_0, VAR_1,
   "0372 iotag x%x lookup error: max iotag (x%x) "
   "iocb_flag x%x\n",
   VAR_6, VAR_4->sli.last_iotag,
   VAR_7 ? VAR_7->iocb_flag : 0xffff);
 return ((void*)0);
}
