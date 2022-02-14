
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_qm_info {int num_pqs; int start_pq; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {int hw_mode; } ;
struct qed_hwfn {TYPE_1__ hw_info; int rel_pf_id; struct qed_qm_info qm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct qed_hwfn *VAR_3, struct qed_ptt *VAR_4)
{
 struct qed_qm_info *VAR_5 = &VAR_3->qm_info;
 bool VAR_6;
 int VAR_7;


 FUNC_1(VAR_3);


 FUNC_5(&VAR_2);
 VAR_6 = FUNC_4(VAR_3, VAR_4, 0, 1,
        VAR_5->start_pq, VAR_5->num_pqs);
 FUNC_6(&VAR_2);
 if (!VAR_6)
  return -VAR_0;


 FUNC_0(VAR_3);


 FUNC_3(VAR_3, VAR_4, 0);


 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_1, VAR_3->rel_pf_id,
     VAR_3->hw_info.hw_mode);
 if (VAR_7)
  return VAR_7;


 FUNC_5(&VAR_2);
 VAR_6 = FUNC_4(VAR_3, VAR_4, 1, 1,
        VAR_5->start_pq, VAR_5->num_pqs);
 FUNC_6(&VAR_2);
 if (!VAR_6)
  return -VAR_0;

 return 0;
}
