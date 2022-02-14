
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_idx; } ;
struct bnxt_cp_ring_info {TYPE_1__ cp_ring_struct; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {struct bnxt_napi** bnapi; } ;



__attribute__((used)) static int FUNC_0(struct bnxt *VAR_0, int VAR_1)
{
 struct bnxt_napi *VAR_2 = VAR_0->bnapi[VAR_1];
 struct bnxt_cp_ring_info *VAR_3;

 VAR_3 = &VAR_2->cp_ring;
 return VAR_3->cp_ring_struct.map_idx;
}
