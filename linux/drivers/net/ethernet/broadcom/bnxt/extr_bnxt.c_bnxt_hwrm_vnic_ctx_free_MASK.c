
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_vnic_info {scalar_t__* fw_rss_cos_lb_ctx; } ;
struct bnxt {int nr_vnics; scalar_t__ rsscos_nr_ctxs; struct bnxt_vnic_info* vnic_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnxt*,int,int) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_vnics; VAR_3++) {
  struct bnxt_vnic_info *VAR_5 = &VAR_2->vnic_info[VAR_3];

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_5->fw_rss_cos_lb_ctx[VAR_4] != VAR_1)
    FUNC_0(VAR_2, VAR_3, VAR_4);
  }
 }
 VAR_2->rsscos_nr_ctxs = 0;
}
