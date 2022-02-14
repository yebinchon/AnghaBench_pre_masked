
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct qed_vf_info {int num_rxqs; int abs_vf_id; TYPE_1__* vf_queues; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {int fw_rx_qid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int ,int*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int,int) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_1,
          struct qed_ptt *VAR_2,
          struct qed_vf_info *VAR_3, u8 VAR_4)
{
 u32 VAR_5, VAR_6;
 u16 VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->num_rxqs; VAR_8++) {
  FUNC_1(VAR_1, VAR_3->vf_queues[VAR_8].fw_rx_qid,
    &VAR_7);

  VAR_5 = VAR_0 + VAR_7 * 4;
  VAR_6 = VAR_4 ? (VAR_3->abs_vf_id | FUNC_0(8)) : 0;
  FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6);
 }
}
