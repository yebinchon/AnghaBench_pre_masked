
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_hwfn {TYPE_2__* mcp_info; } ;
struct qed_dev_fcoe_info {int num_cqs; int wwnn; int wwpn; int secondary_bdq_rq_addr; int primary_dbq_rq_addr; int common; } ;
struct qed_dev {int dummy; } ;
struct TYPE_3__ {int wwn_node; int wwn_port; } ;
struct TYPE_4__ {TYPE_1__ func_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 int FUNC_2 (struct qed_dev_fcoe_info*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int ) ;
 int FUNC_4 (struct qed_hwfn*,int ) ;
 int FUNC_5 (struct qed_dev*,int *) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_2,
      struct qed_dev_fcoe_info *VAR_3)
{
 struct qed_hwfn *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_5 = FUNC_5(VAR_2, &VAR_3->common);

 VAR_3->primary_dbq_rq_addr =
     FUNC_3(VAR_4, VAR_0);
 VAR_3->secondary_bdq_rq_addr =
     FUNC_4(VAR_4, VAR_0);

 VAR_3->wwpn = VAR_4->mcp_info->func_info.wwn_port;
 VAR_3->wwnn = VAR_4->mcp_info->func_info.wwn_node;

 VAR_3->num_cqs = FUNC_0(VAR_4, VAR_1);

 return VAR_5;
}
