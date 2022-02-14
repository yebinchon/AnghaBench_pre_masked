
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bnxt_db_info {int db_key64; int doorbell; } ;
struct bnxt_cp_ring_info {scalar_t__ had_work_done; int cp_raw_cons; struct bnxt_db_info cp_db; struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnxt*,struct bnxt_napi*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_0, struct bnxt_napi *VAR_1,
     u64 VAR_2, bool VAR_3)
{
 struct bnxt_cp_ring_info *VAR_4 = &VAR_1->cp_ring;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  struct bnxt_cp_ring_info *VAR_6 = VAR_4->cp_ring_arr[VAR_5];
  struct bnxt_db_info *VAR_7;

  if (VAR_6 && (VAR_3 || VAR_6->had_work_done)) {
   VAR_7 = &VAR_6->cp_db;
   FUNC_2(VAR_7->db_key64 | VAR_2 |
          FUNC_0(VAR_6->cp_raw_cons), VAR_7->doorbell);
   VAR_6->had_work_done = 0;
  }
 }
 FUNC_1(VAR_0, VAR_1);
}
