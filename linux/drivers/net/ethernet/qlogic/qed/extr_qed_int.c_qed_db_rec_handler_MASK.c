
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {int overflow; } ;
struct qed_hwfn {int db_bar_no_edpm; TYPE_1__ db_recovery_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct qed_hwfn *VAR_2, struct qed_ptt *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_1,
           &VAR_2->db_recovery_info.overflow);
 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_0);
 if (!VAR_5 && !VAR_4)
  return 0;

 FUNC_0(VAR_2, "PF Overflow sticky: attn %u current %u\n",
    VAR_4, VAR_5);

 if (VAR_5 && !VAR_2->db_bar_no_edpm) {
  VAR_6 = FUNC_1(VAR_2, VAR_3);
  if (VAR_6)
   return VAR_6;
 }


 FUNC_4(VAR_2, VAR_3, VAR_0, 0x0);


 FUNC_2(VAR_2);

 return 0;
}
