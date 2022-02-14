
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_cp_ring_info {int cp_raw_cons; int cp_db; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; int intr_sem; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bnxt*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->intr_sem, 0);
 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  struct bnxt_napi *VAR_2 = VAR_0->bnapi[VAR_1];
  struct bnxt_cp_ring_info *VAR_3 = &VAR_2->cp_ring;

  FUNC_1(VAR_0, &VAR_3->cp_db, VAR_3->cp_raw_cons);
 }
}
