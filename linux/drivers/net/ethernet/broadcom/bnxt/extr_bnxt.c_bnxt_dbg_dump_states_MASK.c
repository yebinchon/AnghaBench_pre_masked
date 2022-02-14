
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_napi {int dummy; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; } ;


 int FUNC_0 (struct bnxt_napi*) ;
 int FUNC_1 (struct bnxt_napi*) ;
 int FUNC_2 (struct bnxt_napi*) ;
 scalar_t__ FUNC_3 (struct bnxt*) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_0)
{
 int VAR_1;
 struct bnxt_napi *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  VAR_2 = VAR_0->bnapi[VAR_1];
  if (FUNC_3(VAR_0)) {
   FUNC_2(VAR_2);
   FUNC_1(VAR_2);
   FUNC_0(VAR_2);
  }
 }
}
