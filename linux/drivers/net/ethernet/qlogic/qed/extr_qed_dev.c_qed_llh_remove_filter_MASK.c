
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_llh_filter_details {int member_0; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int ,struct qed_llh_filter_details*) ;

__attribute__((used)) static int
FUNC_1(struct qed_hwfn *VAR_0,
        struct qed_ptt *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct qed_llh_filter_details VAR_4 = {0};

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
         &VAR_4);
}
