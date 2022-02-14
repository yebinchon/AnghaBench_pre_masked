
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ mode; int tc; } ;
struct TYPE_3__ {int ooo_tc; } ;
struct qed_hwfn {TYPE_2__ ufp_info; int hw_info; TYPE_1__ qm_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*) ;

__attribute__((used)) static int
FUNC_7(struct qed_hwfn *VAR_4, struct qed_ptt *VAR_5)
{
 FUNC_3(VAR_4, VAR_5);

 if (VAR_4->ufp_info.mode == VAR_3) {
  VAR_4->qm_info.ooo_tc = VAR_4->ufp_info.tc;
  FUNC_2(&VAR_4->hw_info,
        VAR_4->ufp_info.tc);

  FUNC_4(VAR_4, VAR_5);
 } else if (VAR_4->ufp_info.mode == VAR_2) {

  FUNC_1(VAR_4, VAR_5,
       VAR_1);
 } else {
  FUNC_0(VAR_4, "Invalid sched type, discard the UFP config\n");
  return -VAR_0;
 }


 FUNC_6(VAR_4);


 FUNC_5(VAR_4);

 return 0;
}
