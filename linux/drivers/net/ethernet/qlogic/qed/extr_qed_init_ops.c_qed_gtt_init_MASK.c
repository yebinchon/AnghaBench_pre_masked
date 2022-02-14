
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qed_hwfn {int dummy; } ;


 size_t FUNC_0 (scalar_t__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,size_t,scalar_t__) ;
 scalar_t__* VAR_3 ;

void FUNC_2(struct qed_hwfn *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;


 VAR_5 = VAR_2 + VAR_1;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++)
  if (VAR_3[VAR_6])
   FUNC_1(VAR_4, VAR_5 + VAR_6 * VAR_0,
          VAR_3[VAR_6]);
}
