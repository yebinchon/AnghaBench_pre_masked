
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ring_struct {int ring_mem; } ;
struct bnxt_cp_ring_info {struct bnxt_cp_ring_info** cp_ring_arr; struct bnxt_ring_struct cp_ring_struct; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; } ;


 int FUNC_0 (struct bnxt*,int *) ;
 int FUNC_1 (struct bnxt_cp_ring_info*) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_0)
{
 int VAR_1;

 if (!VAR_0->bnapi)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  struct bnxt_napi *VAR_2 = VAR_0->bnapi[VAR_1];
  struct bnxt_cp_ring_info *VAR_3;
  struct bnxt_ring_struct *VAR_4;
  int VAR_5;

  if (!VAR_2)
   continue;

  VAR_3 = &VAR_2->cp_ring;
  VAR_4 = &VAR_3->cp_ring_struct;

  FUNC_0(VAR_0, &VAR_4->ring_mem);

  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   struct bnxt_cp_ring_info *VAR_6 = VAR_3->cp_ring_arr[VAR_5];

   if (VAR_6) {
    VAR_4 = &VAR_6->cp_ring_struct;
    FUNC_0(VAR_0, &VAR_4->ring_mem);
    FUNC_1(VAR_6);
    VAR_3->cp_ring_arr[VAR_5] = ((void*)0);
   }
  }
 }
}
