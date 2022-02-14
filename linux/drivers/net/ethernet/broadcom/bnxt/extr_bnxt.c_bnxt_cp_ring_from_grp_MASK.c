
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_ring_struct {size_t grp_idx; } ;
struct bnxt_ring_grp_info {int cp_fw_ring_id; } ;
struct bnxt {struct bnxt_ring_grp_info* grp_info; } ;



__attribute__((used)) static u16 FUNC_0(struct bnxt *VAR_0, struct bnxt_ring_struct *VAR_1)
{
 struct bnxt_ring_grp_info *VAR_2;

 VAR_2 = &VAR_0->grp_info[VAR_1->grp_idx];
 return VAR_2->cp_fw_ring_id;
}
