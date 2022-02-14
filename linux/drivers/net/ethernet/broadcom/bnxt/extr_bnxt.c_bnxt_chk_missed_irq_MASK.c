
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int fw_ring_id; } ;
struct bnxt_cp_ring_info {scalar_t__ cp_raw_cons; scalar_t__ last_cp_raw_cons; int missed_irqs; TYPE_1__ cp_ring_struct; scalar_t__ has_more_work; struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int flags; int cp_nr_rings; struct bnxt_napi** bnapi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,int ,int ,int *,int *) ;
 int FUNC_1 (struct bnxt*,struct bnxt_cp_ring_info*) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_2)
{
 int VAR_3;

 if (!(VAR_2->flags & VAR_0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->cp_nr_rings; VAR_3++) {
  struct bnxt_napi *VAR_4 = VAR_2->bnapi[VAR_3];
  struct bnxt_cp_ring_info *VAR_5;
  u32 VAR_6;
  int VAR_7;

  if (!VAR_4)
   continue;

  VAR_5 = &VAR_4->cp_ring;
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   struct bnxt_cp_ring_info *VAR_8 = VAR_5->cp_ring_arr[VAR_7];
   u32 VAR_9[2];

   if (!VAR_8 || VAR_8->has_more_work ||
       !FUNC_1(VAR_2, VAR_8))
    continue;

   if (VAR_8->cp_raw_cons != VAR_8->last_cp_raw_cons) {
    VAR_8->last_cp_raw_cons = VAR_8->cp_raw_cons;
    continue;
   }
   VAR_6 = VAR_8->cp_ring_struct.fw_ring_id;
   FUNC_0(VAR_2,
    VAR_1,
    VAR_6, &VAR_9[0], &VAR_9[1]);
   VAR_5->missed_irqs++;
  }
 }
}
