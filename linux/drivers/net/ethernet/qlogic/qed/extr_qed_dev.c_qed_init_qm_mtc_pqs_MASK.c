
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qed_qm_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ offload_tc; } ;
struct qed_hwfn {TYPE_1__ hw_info; struct qed_qm_info qm_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_qm_info*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1);
 struct qed_qm_info *VAR_3 = &VAR_1->qm_info;
 u8 VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(VAR_1, VAR_3,
          FUNC_2(VAR_1) ?
          VAR_1->hw_info.offload_tc : VAR_4,
          VAR_0);
}
