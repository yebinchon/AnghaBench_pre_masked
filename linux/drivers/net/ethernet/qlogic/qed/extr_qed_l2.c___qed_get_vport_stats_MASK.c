
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {scalar_t__ mcp_info; } ;
struct qed_eth_stats {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,struct qed_eth_stats*,int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_eth_stats*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_eth_stats*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_eth_stats*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct qed_eth_stats*,int ) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_0,
      struct qed_ptt *VAR_1,
      struct qed_eth_stats *VAR_2,
      u16 VAR_3, bool VAR_4)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4 && VAR_0->mcp_info)
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
