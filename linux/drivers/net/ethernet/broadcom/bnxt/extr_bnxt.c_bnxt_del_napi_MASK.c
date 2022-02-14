
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_napi {int napi; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_0)
{
 int VAR_1;

 if (!VAR_0->bnapi)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  struct bnxt_napi *VAR_2 = VAR_0->bnapi[VAR_1];

  FUNC_0(&VAR_2->napi);
  FUNC_1(&VAR_2->napi);
 }



 FUNC_2();
}
