
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_vnic_info {int rss_hash_key; void* fw_l2_ctx_id; void** fw_rss_cos_lb_ctx; void* fw_vnic_id; } ;
struct bnxt {int nr_vnics; struct bnxt_vnic_info* vnic_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_vnics; VAR_4++) {
  struct bnxt_vnic_info *VAR_5 = &VAR_3->vnic_info[VAR_4];
  int VAR_6;

  VAR_5->fw_vnic_id = VAR_2;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_5->fw_rss_cos_lb_ctx[VAR_6] = VAR_2;

  VAR_5->fw_l2_ctx_id = VAR_2;

  if (VAR_3->vnic_info[VAR_4].rss_hash_key) {
   if (VAR_4 == 0)
    FUNC_1(VAR_5->rss_hash_key,
           VAR_1);
   else
    FUNC_0(VAR_5->rss_hash_key,
           VAR_3->vnic_info[0].rss_hash_key,
           VAR_1);
  }
 }
}
