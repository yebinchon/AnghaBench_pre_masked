
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_qm_info {int start_pq; int first_vf_pq; int first_llt_pq; int first_ofld_pq; int pure_ack_pq; int ooo_pq; int pure_lb_pq; int first_mcos_pq; int first_rl_pq; } ;
struct qed_hwfn {struct qed_qm_info qm_info; } ;
typedef int pq_flags ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,unsigned long) ;
 int FUNC_1 (unsigned long*,int) ;
 unsigned long FUNC_2 (struct qed_hwfn*) ;

__attribute__((used)) static u16 *FUNC_3(struct qed_hwfn *VAR_1,
        unsigned long VAR_2)
{
 struct qed_qm_info *VAR_3 = &VAR_1->qm_info;


 if (FUNC_1(&VAR_2,
     sizeof(VAR_2) * VAR_0) > 1) {
  FUNC_0(VAR_1, "requested multiple pq flags 0x%lx\n", VAR_2);
  goto err;
 }

 if (!(FUNC_2(VAR_1) & VAR_2)) {
  FUNC_0(VAR_1, "pq flag 0x%lx is not set\n", VAR_2);
  goto err;
 }

 switch (VAR_2) {
 case 129:
  return &VAR_3->first_rl_pq;
 case 132:
  return &VAR_3->first_mcos_pq;
 case 134:
  return &VAR_3->pure_lb_pq;
 case 130:
  return &VAR_3->ooo_pq;
 case 135:
  return &VAR_3->pure_ack_pq;
 case 131:
  return &VAR_3->first_ofld_pq;
 case 133:
  return &VAR_3->first_llt_pq;
 case 128:
  return &VAR_3->first_vf_pq;
 default:
  goto err;
 }

err:
 return &VAR_3->start_pq;
}
