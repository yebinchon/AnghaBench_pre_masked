
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ring_struct {scalar_t__ fw_ring_id; } ;
struct bnxt_cp_ring_info {int cp_raw_cons; int cp_db; struct bnxt_ring_struct cp_ring_struct; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnxt*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_1)
{
 int VAR_2;

 if (!VAR_1->bnapi)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->cp_nr_rings; VAR_2++) {
  struct bnxt_napi *VAR_3 = VAR_1->bnapi[VAR_2];
  struct bnxt_cp_ring_info *VAR_4 = &VAR_3->cp_ring;
  struct bnxt_ring_struct *VAR_5 = &VAR_4->cp_ring_struct;

  if (VAR_5->fw_ring_id != VAR_0)
   FUNC_0(VAR_1, &VAR_4->cp_db, VAR_4->cp_raw_cons);
 }
}
