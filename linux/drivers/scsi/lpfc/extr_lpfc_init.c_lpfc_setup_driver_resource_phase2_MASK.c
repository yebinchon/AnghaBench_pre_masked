
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int worker_thread; int brd_no; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct lpfc_hba*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct lpfc_hba *VAR_1)
{
 int VAR_2;


 VAR_1->worker_thread = FUNC_2(VAR_0, VAR_1,
       "lpfc_worker_%d", VAR_1->brd_no);
 if (FUNC_0(VAR_1->worker_thread)) {
  VAR_2 = FUNC_1(VAR_1->worker_thread);
  return VAR_2;
 }

 return 0;
}
