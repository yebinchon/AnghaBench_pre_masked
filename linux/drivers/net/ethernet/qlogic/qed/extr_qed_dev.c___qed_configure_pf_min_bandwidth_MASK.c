
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_link_state {int line_speed; int min_pf_rate; } ;
struct TYPE_6__ {int pf_wfq; } ;
struct qed_hwfn {int rel_pf_id; TYPE_3__ qm_info; TYPE_2__* mcp_info; } ;
struct TYPE_4__ {int bandwidth_min; } ;
struct TYPE_5__ {TYPE_1__ func_info; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int FUNC_2(struct qed_hwfn *VAR_1,
         struct qed_ptt *VAR_2,
         struct qed_mcp_link_state *VAR_3,
         u8 VAR_4)
{
 int VAR_5 = 0;

 VAR_1->mcp_info->func_info.bandwidth_min = VAR_4;
 VAR_1->qm_info.pf_wfq = VAR_4;

 if (!VAR_3->line_speed)
  return VAR_5;

 VAR_3->min_pf_rate = (VAR_3->line_speed * VAR_4) / 100;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_1->rel_pf_id, VAR_4);

 FUNC_0(VAR_1, VAR_0,
     "Configured MIN bandwidth to be %d Mb/sec\n",
     VAR_3->min_pf_rate);

 return VAR_5;
}
