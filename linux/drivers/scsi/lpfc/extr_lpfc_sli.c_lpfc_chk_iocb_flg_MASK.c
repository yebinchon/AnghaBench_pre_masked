
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_iocbq {int iocb_flag; } ;
struct lpfc_hba {int hbalock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_hba *VAR_0,
   struct lpfc_iocbq *VAR_1, uint32_t VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_0->hbalock, VAR_3);
 VAR_4 = VAR_1->iocb_flag & VAR_2;
 FUNC_1(&VAR_0->hbalock, VAR_3);
 return VAR_4;

}
