
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dummy; } ;
struct qed_dev_iscsi_info {int num_cqs; int secondary_bdq_rq_addr; int primary_dbq_rq_addr; int common; } ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 int FUNC_2 (struct qed_dev_iscsi_info*,int ,int) ;
 int FUNC_3 (struct qed_dev*,int *) ;
 int FUNC_4 (struct qed_hwfn*,int ) ;
 int FUNC_5 (struct qed_hwfn*,int ) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_2,
       struct qed_dev_iscsi_info *VAR_3)
{
 struct qed_hwfn *VAR_4 = FUNC_1(VAR_2);

 int VAR_5;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_5 = FUNC_3(VAR_2, &VAR_3->common);

 VAR_3->primary_dbq_rq_addr =
     FUNC_4(VAR_4, VAR_0);
 VAR_3->secondary_bdq_rq_addr =
     FUNC_5(VAR_4, VAR_0);

 VAR_3->num_cqs = FUNC_0(VAR_4, VAR_1);

 return VAR_5;
}
