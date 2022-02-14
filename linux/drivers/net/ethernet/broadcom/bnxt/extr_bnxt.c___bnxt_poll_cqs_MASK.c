
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_cp_ring_info {int has_more_work; struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnxt*,struct bnxt_cp_ring_info*,int) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_0, struct bnxt_napi *VAR_1, int VAR_2)
{
 struct bnxt_cp_ring_info *VAR_3 = &VAR_1->cp_ring;
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  struct bnxt_cp_ring_info *VAR_6 = VAR_3->cp_ring_arr[VAR_4];

  if (VAR_6) {
   VAR_5 += FUNC_0(VAR_0, VAR_6,
            VAR_2 - VAR_5);
   VAR_3->has_more_work |= VAR_6->has_more_work;
  }
 }
 return VAR_5;
}
