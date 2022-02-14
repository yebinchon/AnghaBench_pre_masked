
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {scalar_t__ db_bar_no_edpm; } ;
struct qed_dev_rdma_info {int user_dpm_enabled; int common; int rdma_type; } ;
struct qed_dev {int dummy; } ;


 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qed_dev_rdma_info*,int ,int) ;
 int FUNC_3 (struct qed_dev*,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_2,
      struct qed_dev_rdma_info *VAR_3)
{
 struct qed_hwfn *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->rdma_type = FUNC_1(VAR_4) ?
     VAR_1 : VAR_0;

 VAR_3->user_dpm_enabled = (VAR_4->db_bar_no_edpm == 0);

 FUNC_3(VAR_2, &VAR_3->common);

 return 0;
}
