
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_queue {scalar_t__ qe_valid; int host_index; } ;
struct lpfc_eqe {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct lpfc_eqe*) ;
 int VAR_0 ;
 struct lpfc_eqe* FUNC_1 (struct lpfc_queue*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct lpfc_eqe *
FUNC_4(struct lpfc_queue *VAR_1)
{
 struct lpfc_eqe *VAR_2;


 if (FUNC_3(!VAR_1))
  return ((void*)0);
 VAR_2 = FUNC_1(VAR_1, VAR_1->host_index);


 if (FUNC_0(VAR_0, VAR_2) != VAR_1->qe_valid)
  return ((void*)0);
 FUNC_2();
 return VAR_2;
}
