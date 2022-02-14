
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_work_evt {int evt_listp; int evt; void* evt_arg2; void* evt_arg1; } ;
struct lpfc_hba {int hbalock; int work_list; } ;


 int VAR_0 ;
 struct lpfc_work_evt* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct lpfc_hba *VAR_1, void *VAR_2, void *VAR_3,
        uint32_t VAR_4)
{
 struct lpfc_work_evt *VAR_5;
 unsigned long VAR_6;





 VAR_5 = FUNC_0(sizeof(struct lpfc_work_evt), VAR_0);
 if (!VAR_5)
  return 0;

 VAR_5->evt_arg1 = VAR_2;
 VAR_5->evt_arg2 = VAR_3;
 VAR_5->evt = VAR_4;

 FUNC_3(&VAR_1->hbalock, VAR_6);
 FUNC_1(&VAR_5->evt_listp, &VAR_1->work_list);
 FUNC_4(&VAR_1->hbalock, VAR_6);

 FUNC_2(VAR_1);

 return 1;
}
