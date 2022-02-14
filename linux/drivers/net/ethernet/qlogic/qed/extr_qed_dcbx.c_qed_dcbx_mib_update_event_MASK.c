
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ personality; } ;
struct qed_hwfn {TYPE_2__* p_dcbx_info; TYPE_1__ hw_info; } ;
struct qed_dcbx_results {TYPE_3__* arr; } ;
typedef enum qed_mib_read_type { ____Placeholder_qed_mib_read_type } qed_mib_read_type ;
struct TYPE_6__ {int tc; } ;
struct TYPE_5__ {struct qed_dcbx_results results; int get; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct qed_hwfn*,int) ;
 int FUNC_1 (struct qed_hwfn*,int *,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int
FUNC_8(struct qed_hwfn *VAR_7,
     struct qed_ptt *VAR_8, enum qed_mib_read_type VAR_9)
{
 int VAR_10 = 0;

 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 == VAR_5) {
  VAR_10 = FUNC_2(VAR_7, VAR_8);
  if (!VAR_10) {



   FUNC_4(VAR_7, VAR_8);


   FUNC_6(VAR_7);




   if (VAR_7->hw_info.personality ==
       VAR_6)
    FUNC_5(VAR_7, VAR_8);
  }
 }

 FUNC_1(VAR_7, &VAR_7->p_dcbx_info->get, VAR_9);

 if (VAR_9 == VAR_5) {
  struct qed_dcbx_results *VAR_11;
  u16 VAR_12;




  VAR_11 = &VAR_7->p_dcbx_info->results;
  VAR_12 = (0x1 << VAR_11->arr[VAR_0].tc) |
        (0x1 << VAR_11->arr[VAR_1].tc);
  VAR_12 <<= VAR_4;
  VAR_12 |= VAR_3;
  FUNC_7(VAR_7, VAR_8, VAR_2, VAR_12);
 }

 FUNC_0(VAR_7, VAR_9);

 return VAR_10;
}
