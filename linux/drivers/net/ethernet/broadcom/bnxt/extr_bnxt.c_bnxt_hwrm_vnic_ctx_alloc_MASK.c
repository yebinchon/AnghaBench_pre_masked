
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hwrm_vnic_rss_cos_lb_ctx_alloc_output {int rss_cos_lb_ctx_id; } ;
struct hwrm_vnic_rss_cos_lb_ctx_alloc_input {int member_0; } ;
struct bnxt {int hwrm_cmd_lock; TYPE_1__* vnic_info; struct hwrm_vnic_rss_cos_lb_ctx_alloc_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
struct TYPE_2__ {int * fw_rss_cos_lb_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_vnic_rss_cos_lb_ctx_alloc_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_vnic_rss_cos_lb_ctx_alloc_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5;
 struct hwrm_vnic_rss_cos_lb_ctx_alloc_input VAR_6 = {0};
 struct hwrm_vnic_rss_cos_lb_ctx_alloc_output *VAR_7 =
      VAR_2->hwrm_cmd_resp_addr;

 FUNC_1(VAR_2, &VAR_6, VAR_1, -1,
          -1);

 FUNC_3(&VAR_2->hwrm_cmd_lock);
 VAR_5 = FUNC_0(VAR_2, &VAR_6, sizeof(VAR_6), VAR_0);
 if (!VAR_5)
  VAR_2->vnic_info[VAR_3].fw_rss_cos_lb_ctx[VAR_4] =
   FUNC_2(VAR_7->rss_cos_lb_ctx_id);
 FUNC_4(&VAR_2->hwrm_cmd_lock);

 return VAR_5;
}
