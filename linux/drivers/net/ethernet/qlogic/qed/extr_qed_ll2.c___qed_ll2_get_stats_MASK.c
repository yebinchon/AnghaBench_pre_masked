
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct qed_ptt {int dummy; } ;
struct qed_ll2_stats {int dummy; } ;
struct TYPE_2__ {scalar_t__ gsi_enable; } ;
struct qed_ll2_info {scalar_t__ tx_stats_en; TYPE_1__ input; } ;
struct qed_hwfn {struct qed_ll2_info* p_ll2_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_ll2_stats*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_ll2_info*,struct qed_ll2_stats*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_ll2_info*,struct qed_ll2_stats*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct qed_ll2_info*,struct qed_ll2_stats*) ;
 struct qed_ptt* FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_7(void *VAR_2, u8 VAR_3,
          struct qed_ll2_stats *VAR_4)
{
 struct qed_hwfn *VAR_5 = VAR_2;
 struct qed_ll2_info *VAR_6 = ((void*)0);
 struct qed_ptt *VAR_7;

 if ((VAR_3 >= VAR_1) ||
     !VAR_5->p_ll2_info)
  return -VAR_0;

 VAR_6 = &VAR_5->p_ll2_info[VAR_3];

 VAR_7 = FUNC_5(VAR_5);
 if (!VAR_7) {
  FUNC_0(VAR_5, "Failed to acquire ptt\n");
  return -VAR_0;
 }

 if (VAR_6->input.gsi_enable)
  FUNC_1(VAR_5, VAR_7, VAR_4);

 FUNC_3(VAR_5, VAR_7, VAR_6, VAR_4);

 FUNC_4(VAR_5, VAR_7, VAR_6, VAR_4);

 if (VAR_6->tx_stats_en)
  FUNC_2(VAR_5, VAR_7, VAR_6, VAR_4);

 FUNC_6(VAR_5, VAR_7);

 return 0;
}
