
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {scalar_t__ RandomData; scalar_t__ wwnn; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(struct lpfc_hba *VAR_1, uint32_t *VAR_2)
{
 int VAR_3;
 uint32_t *VAR_4;
 uint32_t *VAR_5 = (uint32_t *) VAR_1->wwnn;

 VAR_4 = FUNC_0(80, sizeof(uint32_t), VAR_0);
 if (!VAR_4)
  return;

 VAR_4[0] = VAR_4[78] = *VAR_5++;
 VAR_4[1] = VAR_4[79] = *VAR_5;

 for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
  FUNC_2(VAR_1->RandomData + VAR_3, VAR_4 + VAR_3);

 FUNC_3(VAR_2);
 FUNC_4(VAR_2, VAR_4);
 FUNC_1(VAR_4);
}
