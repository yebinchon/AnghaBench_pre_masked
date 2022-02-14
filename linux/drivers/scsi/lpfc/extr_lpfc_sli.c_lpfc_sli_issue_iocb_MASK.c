
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_sli_ring {int ring_lock; } ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 struct lpfc_sli_ring* FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(struct lpfc_hba *VAR_2, uint32_t VAR_3,
      struct lpfc_iocbq *VAR_4, uint32_t VAR_5)
{
 struct lpfc_sli_ring *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_2->sli_rev == VAR_1) {
  VAR_6 = FUNC_1(VAR_2, VAR_4);
  if (FUNC_4(VAR_6 == ((void*)0)))
   return VAR_0;

  FUNC_2(&VAR_6->ring_lock, VAR_7);
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_3(&VAR_6->ring_lock, VAR_7);
 } else {

  FUNC_2(&VAR_2->hbalock, VAR_7);
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_3(&VAR_2->hbalock, VAR_7);
 }
 return VAR_8;
}
