
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {int overflow; } ;
struct qed_hwfn {int db_bar_no_edpm; TYPE_1__ db_recovery_info; struct qed_ptt* p_dpc_ptt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_2)
{
 struct qed_ptt *VAR_3 = VAR_2->p_dpc_ptt;
 u32 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_0);
 if (!VAR_4)
  goto out;


 FUNC_4(VAR_1, &VAR_2->db_recovery_info.overflow);

 if (!VAR_2->db_bar_no_edpm) {
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  if (VAR_5)
   goto out;
 }

 FUNC_3(VAR_2, VAR_3, VAR_0, 0x0);
out:

 FUNC_1(VAR_2);
}
