
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qed_vf_info {scalar_t__ num_txqs; int abs_vf_id; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_iov_validate_q_mode { ____Placeholder_qed_iov_validate_q_mode } qed_iov_validate_q_mode ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*,scalar_t__,int,int) ;

__attribute__((used)) static bool FUNC_2(struct qed_hwfn *VAR_1,
     struct qed_vf_info *VAR_2,
     u16 VAR_3,
     enum qed_iov_validate_q_mode VAR_4)
{
 if (VAR_3 >= VAR_2->num_txqs) {
  FUNC_0(VAR_1,
      VAR_0,
      "VF[0x%02x] - can't touch Tx queue[%04x]; Only 0x%04x are allocated\n",
      VAR_2->abs_vf_id, VAR_3, VAR_2->num_txqs);
  return 0;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, 1);
}
