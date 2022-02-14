
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_link_state {int min_pf_rate; } ;
struct TYPE_10__ {TYPE_4__* wfq_data; } ;
struct qed_hwfn {TYPE_5__ qm_info; TYPE_3__* cdev; } ;
struct TYPE_9__ {int configured; int min_speed; } ;
struct TYPE_8__ {TYPE_2__* hwfns; } ;
struct TYPE_7__ {TYPE_1__* mcp_info; } ;
struct TYPE_6__ {struct qed_mcp_link_state link_output; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_0,
         struct qed_ptt *VAR_1, u16 VAR_2, u32 VAR_3)
{
 struct qed_mcp_link_state *VAR_4;
 int VAR_5 = 0;

 VAR_4 = &VAR_0->cdev->hwfns[0].mcp_info->link_output;

 if (!VAR_4->min_pf_rate) {
  VAR_0->qm_info.wfq_data[VAR_2].min_speed = VAR_3;
  VAR_0->qm_info.wfq_data[VAR_2].configured = 1;
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4->min_pf_rate);

 if (!VAR_5)
  FUNC_1(VAR_0, VAR_1,
       VAR_4->min_pf_rate);
 else
  FUNC_0(VAR_0,
     "Validation failed while configuring min rate\n");

 return VAR_5;
}
