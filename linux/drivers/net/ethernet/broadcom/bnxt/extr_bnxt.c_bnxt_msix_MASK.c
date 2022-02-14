
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt_cp_ring_info {int ** cp_desc_ring; int event_ctr; int cp_raw_cons; } ;
struct bnxt_napi {int napi; struct bnxt_cp_ring_info cp_ring; struct bnxt* bp; } ;
struct bnxt {int dummy; } ;
typedef int irqreturn_t ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct bnxt_napi *VAR_3 = VAR_2;
 struct bnxt *VAR_4 = VAR_3->bp;
 struct bnxt_cp_ring_info *VAR_5 = &VAR_3->cp_ring;
 u32 VAR_6 = FUNC_2(VAR_5->cp_raw_cons);

 VAR_5->event_ctr++;
 FUNC_4(&VAR_5->cp_desc_ring[FUNC_1(VAR_6)][FUNC_0(VAR_6)]);
 FUNC_3(&VAR_3->napi);
 return VAR_0;
}
